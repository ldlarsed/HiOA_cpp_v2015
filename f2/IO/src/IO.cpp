//============================================================================
// Name        : IO.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void countWords(int *words) {
	cout << "WordCount: " << *words - 1 << endl;
}

/**
 * Denne teller kun linjer
 */
void countLines() {
	vector<string> words;
	string tmp;

	while (cin) {
		getline(cin, tmp);
		words.push_back(tmp);
	}

	cout << "Word count: " << words.size() << endl;
}

void countOnLine() {

	string tmp, all;
	int teller;

	while (cin) {
		getline(cin, tmp);
		all += tmp;
	}

	vector<char> words(all.begin(), all.end());
	int count = words.size();

	for (int i = 0; i < count; i++) {
		if (isspace(words[i]))
			teller++;
	}

	cout << "Antall tegn: " << count << endl;
	cout << "Antall ord: " << teller << endl;

}

int main() {

	countOnLine();

	return 0;
}
