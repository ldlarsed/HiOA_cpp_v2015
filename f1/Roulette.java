import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;

/**
 * Klassen har to set med metoder. Den første benytter seg av HashMap og den
 * andre av en vanlig array som settes til MAX_LENGTH plasser. I gjennomsnitt er
 * versjonen med array ca 100 ms raskere.
 * 
 * @author Lukas Larsed, s198569@stud.hioa.no
 *
 */
public class Roulette {

	private static final int SPIN_COUNT = 10_000_000;
	private static final int MIN = 0, MAX = 1;
	private Map<Integer, Integer> seq;
	private int[] seq2;
	private static final int MAX_LENGTH = 40;
	private long exec_time;
	private int largest_seq_present = 0;
	private static boolean take_time;

	private int getRandom(int min, int max) {
		if (max <= min || max < 0 || min < 0)
			throw new IllegalArgumentException();
		return (int) (Math.random() * (max - min + 1) + min);
	}

	/*
	 * Versjon med Map
	 */

	private void createSequencesMap() {
		if (take_time)
			exec_time = System.currentTimeMillis();
		seq = new HashMap<Integer, Integer>();
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
			rand_old = rand;
		}
	}

	public void getResultsMap() {
		createSequencesMap();
		exec_time = System.currentTimeMillis() - exec_time;
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
		if (take_time)
			sb.append("Time: ").append(exec_time).append(" ms");
		System.out.println(sb.toString());
	}

	/*
	 * Versjon med int array
	 */

	private void createSequencesArr() {
		if (take_time)
			exec_time = System.currentTimeMillis();
		seq2 = new int[MAX_LENGTH];
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
				seq2[count]++;
				if (count > largest_seq_present)
					largest_seq_present = count;
				count = 1;
			}
			rand_old = rand;
		}
	}

	public void getResultsArr() {
		createSequencesArr();
		exec_time = System.currentTimeMillis() - exec_time;
		StringBuilder sb = new StringBuilder();
		for (int i = 1; i <= largest_seq_present; i++)
			sb.append(i).append(":\t").append(seq2[i]).append("\n");
		if (take_time)
			sb.append("Time: ").append(exec_time).append(" ms");
		System.out.println(sb.toString());
	}

	public static void main(String[] args) {
		try {
			String parm = args[0];
			if (parm.equals("--no-time")) {
				take_time = false;
				System.out.print(SPIN_COUNT);
				System.out.println(" spins in Array");
				new Roulette().getResultsArr();
			}
		} catch (ArrayIndexOutOfBoundsException e) {
			take_time = true;
			Scanner sc = new Scanner(System.in);
			System.out
					.println("Choose collection for your benchmark:\n1: HashMap\n2: Array\n0: Quit");
			while (sc.hasNext()) {
				switch (sc.nextLine()) {
				case "0":
					System.out.println("Terminating. Goodbye!");
					sc.close();
					System.exit(0);
					break;
				case "1":
					System.out.print(SPIN_COUNT);
					System.out.println(" spins in HashMap");
					new Roulette().getResultsMap();
					break;
				case "2":
					System.out.print(SPIN_COUNT);
					System.out.println(" spins in Array");
					new Roulette().getResultsArr();
					break;
				default:
					System.out
							.println("Wrong choice. Please try again (enter 0 to terminate)");
					break;
				}
			}
			sc.close();
		}
	}
}
