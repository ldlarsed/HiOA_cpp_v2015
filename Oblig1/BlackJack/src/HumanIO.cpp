#include <iostream>
#include <string>
#include <sstream>
#include <deque>

#include "HumanIO.h"
#include "Strings.h"

using namespace std;

HumanIO::HumanIO() {
	ClearScreen();
	cout << strings::GREATINGS << endl;
}

HumanIO::~HumanIO() {
}

string HumanIO::getSingleInputString(string message) {

	string input_str;
	while (cin == NULL)
		wait();
	getline(cin, input_str);

	return input_str;
}

char HumanIO::getSingleInputChar() {
	char read_in;

	do {
		read_in = cin.get();
//		read_in = getchar();
//		read_in = system("wait");
	} while (!read_in);

	return read_in;
}

int HumanIO::getSingleInputInt() {
	int read_in, read_storage;
	do {
		read_in = getchar();
		if (read_in != '\n')
			read_storage = read_in;
	} while (read_in != '\n' && read_in != EOF);
	return (int) read_storage - '0';
}

int HumanIO::getNumberOfPlayers() {
	cout << strings::NUMBER_OF_PLAYERS << endl;
	input = getSingleInputChar();
	cout << "Starting game for " << input << " players" << endl;
	return atoi(&input);
}

vector<string> HumanIO::getPlayerNames(int number_of_players) {
	vector<string> p_names;

	for (int i = 0; i < number_of_players; i++) {
		string msg = strings::PLAYERNAME;
		cout << msg << i + 1 << endl;
		string fdbck;
		do {
			fdbck = getSingleInputString(msg);
			wait();
		} while (i < number_of_players && fdbck.empty());
		p_names.push_back(fdbck);
	}
	return p_names;
}

void HumanIO::ClearScreen() {
	cout << string(100, '\n');
}

void HumanIO::showCreatedPlayers(vector<string>& p_names) {
	cout << flush;
	cout << "Players in game: " << endl;
	for (unsigned int i = 0; i < p_names.size(); i++)
		cout << "Player " << i + 1 << " " << p_names[i] << endl;
}

void HumanIO::placeBets(vector<HPlayer>* h_players) {
	int bet = 0;
	cout << strings::PLACE_YOUR_BETS << endl;
	cout << strings::BET_CHOICES << endl;

	for (unsigned int i = 0; i < h_players->size(); i++) {
		cout << h_players->at(i).getPlayerName() << endl;
		bet = BetSize::getBetAmount(getSingleInputInt());
		cout << "Setting bet $" << bet << endl;
		h_players->at(i).setBet(bet);
		bet = 0;
	}
	for (unsigned int i = 0; i < h_players->size(); i++) {
		cout << h_players->at(i).getPlayerName() << " bets $"
				<< h_players->at(i).getBet() << endl;
	}
}

void HumanIO::showPlayerNames(vector<HPlayer>& h_players) {
	for (unsigned int i = 0; i < h_players.size(); i++) {
		cout << ((HPlayer) h_players[i]).getPlayerName() << "\t";
	}
	cout << endl << endl;
}

/**
 * Prints out the dealed cards for every player
 */
void HumanIO::showDealedCards(vector<HPlayer>& h_players, Bank& bank) {
	stringstream ss;
	for (unsigned int i = 0; i < h_players.size(); i++) {

		ss << h_players[i].getPlayerName() << ": ";

		for(int j = 0; j < h_players[i].getHandSize(); j++){
			ss << h_players[i].showHandCardAt(j).getFullCardName() << ", ";
		}
		ss << h_players[i].getHandScore();
		ss << endl;
	}
	ss << bank.getPlayerName() << ": ";
	ss << bank.removeLastCard().getFullCardName() << endl;

	cout << ss.str() << endl;
}

void HumanIO::message(string message, bool new_line) {
	cout << message << (new_line) ? "\n" : "";
}

//Eksempel på hvordan man kan lese hele strenger fra input fra bruker for å lese hele strenger
//	while(true){
//		getline(cin, input);
//		cout << input << endl;
//	}

//	do {
//		input = cin.get();
//		cout << input << endl;
//	} while (input != requested);
