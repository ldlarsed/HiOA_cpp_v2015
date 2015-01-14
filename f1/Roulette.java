import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Set;

/**
 * Java versjon for Roulette shoutout.
 * 
 * @author Lukas Larsed, s198569@stud.hioa.no
 *
 */
public class Roulette {

	private int SPIN_COUNT;
	private static final int MIN = 0, MAX = 1;
	private static final int MAX_LENGTH = 40; // brukes for arrayversjon
	private int largest_seq_present = 0; // brukes for arrayversjon
	private int c_red = 0, c_black = 0; // 0 = rød, 1 = sort

	public Roulette(int spins) {
		this.SPIN_COUNT = spins;
		runStandard();
	}
	
	/**
	 * Teller farge
	 * 
	 * @param numb
	 */
	private void countColor(int numb) {
		if (numb == 0)
			c_red++;
		else
			c_black++;
	}

	/**
	 * Lager tilfedlige tall
	 * 
	 * @param min
	 * @param max
	 * @return
	 */
	private int getRandom(int min, int max) {
		if (max <= min || max < 0 || min < 0)
			throw new IllegalArgumentException();
		return (int) (Math.random() * (max - min + 1) + min);
	}

	private LinkedList<Integer> createSequencesLinkedList() {
		LinkedList<Integer> seq = new LinkedList<Integer>();
		int rand = 0, rand_old = 0, index = 1;

		for (int i = 1; i <= MAX_LENGTH; i++) {
			seq.add(0);
		}
		
		for (int i = 1; i <= SPIN_COUNT; i++) {
			if (i == 1) {
				rand = getRandom(MIN, MAX);
				rand_old = rand;
			}
			rand = getRandom(MIN, MAX);
			if (rand == rand_old)
				index++;
			else {
				try {
					Integer current_index = seq.get(index);
					seq.set(index, current_index + 1);
				} catch (IndexOutOfBoundsException e) {
					seq.set(index, 1);
				} 
				index = 1;
			}
			countColor(rand);
			rand_old = rand;
		}
		return seq;
	}

	private void getResultsLinkedList(LinkedList<Integer> seq) {
		while(seq.peekLast()==0) seq.removeLast();
		StringBuilder sb = new StringBuilder();
		int i = 1;
		seq.removeFirst();
		while (!seq.isEmpty()) {
			sb.append(i++).append(":\t").append(seq.removeFirst()).append("\n");
		}
		sb.append("\nRed:\t").append(c_red);
		sb.append("\nBlack:\t").append(c_black);
		System.out.println(sb.toString());
	}

	/**
	 * HashMap
	 */
	private HashMap<Integer, Integer> createSequencesMap() {
		HashMap<Integer, Integer> seq = new HashMap<Integer, Integer>();
		int rand = 0, rand_old = 0, count = 1;

		for (int i = 1; i <= SPIN_COUNT; i++) {
			if (i == 1) {
				rand = getRandom(MIN, MAX);
				rand_old = rand;
			}
			rand = getRandom(MIN, MAX);
			if (rand == rand_old)
				count++;
			else {
				Integer current_count = seq.get(count);
				if (current_count != null)
					seq.put(count, current_count + 1);
				else
					seq.put(count, 1);
				count = 1;
			}
			countColor(rand);
			rand_old = rand;
		}
		return seq;
	}

	private void getResultsMap(HashMap<Integer, Integer> seq) {
		StringBuilder sb = new StringBuilder();
		Set<Integer> keys = seq.keySet();
		Iterator<Integer> iter = keys.iterator();
		int i = 0, i_old = 0;
		while (iter.hasNext()) {
			i = iter.next();
			if (i > i_old + 1) {
				for (int j = i_old + 1; j < i; j++) {
					sb.append(j).append(":\t")
							.append(seq.get(j) == null ? "0" : "Error")
							.append("\n");
				}
			}
			sb.append(i).append(":\t").append(seq.get(i)).append("\n");
			i_old = i;
		}
		sb.append("\nRed:\t").append(c_red);
		sb.append("\nBlack:\t").append(c_black);
		System.out.println(sb.toString());
	}

	/**
	 * int[]
	 */
	private int[] createSequencesArr() {
		int[] seq = new int[MAX_LENGTH];
		int rand = 0, rand_old = 0, count = 1;

		for (int i = 1; i <= SPIN_COUNT; i++) {
			if (i == 1) {
				rand = getRandom(MIN, MAX);
				rand_old = rand;
			}
			rand = getRandom(MIN, MAX);
			if (rand == rand_old)
				count++;
			else {
				seq[count]++;
				if (count > largest_seq_present)
					largest_seq_present = count;
				count = 1;
			}
			countColor(rand);
			rand_old = rand;
		}
		return seq;
	}

	private void getResultsArr(int[] seq) {
		StringBuilder sb = new StringBuilder();
		for (int i = 1; i <= largest_seq_present; i++)
			sb.append(i).append(":\t").append(seq[i]).append("\n");
		sb.append("\nRed:\t").append(c_red);
		sb.append("\nBlack:\t").append(c_black);
		System.out.println(sb.toString());
	}

	/**
	 * Brukes for å starte opp.
	 * 
	 * @param param
	 */
	private void runStandard() {
		System.out.print(this.SPIN_COUNT);
		System.out.println();
//		System.out.println(" spins in int Array");
		// getResultsArr(createSequencesArr());
//		 getResultsMap(createSequencesMap());
		getResultsLinkedList(createSequencesLinkedList());
		;
	}

	public static void main(String[] args) {
		int param = 10_000_000;
		new Roulette(param);
	}
}
