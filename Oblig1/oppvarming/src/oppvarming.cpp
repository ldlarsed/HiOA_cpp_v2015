//============================================================================
// Name        : Oblig1_test_opp1.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

long long msg1 { 28539401679696455 };

int msg2[] { 1918986818, 1998611822, 1684829551, 544483182, 1701538156,
		1768453152, 8563 };

int encrypted[] { 1498105673, 1227249735, 1498829639, 1196119078, 1314530904,
		1197024843, 5853000 };

string decryptMsg1() {
	char* a = (char*) &msg1;
	return a;
}

string decryptMsg2() {
	stringstream ss;
	
	ss << (char*) &msg2;

	return ss.str();
}


/**
 * Used to find the right string
 */
void findEncryption() {
	stringstream ss;

	string testPos = (char*) &encrypted;
	string testNeg = (char*) &encrypted;

	for(unsigned j = 0; j < 26; j++) {
		for (unsigned int i = 0; i < testPos.length(); i++) {
			testPos[i] += j;
			ss << testPos[i];
		}
		for (unsigned int i = 0; i < testNeg.length(); i++) {
			testNeg[i] -= j;
			ss << testNeg[i];
		}
		ss << endl;
	}
	cout << ss.str();
}

/*
 * IGKYGX IGSVY TKGX ZNK YGHOYGX
 * CAESAR CAMPS NEAR THE SABISAR
 */

string decryptEncrypted() {

	string test = (char*) &encrypted;

	for (unsigned int i = 0; i < test.length(); i++) {
		test[i] -= 6;
	}
	return test;
}

int main() {

//	findEncryption();

	// Print out the messages in human-readable form!
	cout << "Message 1: " << decryptMsg1() << endl;
	cout << "Message 2: " << decryptMsg2() << endl;
	cout << "Decrypted: " << decryptEncrypted() << endl;
}
