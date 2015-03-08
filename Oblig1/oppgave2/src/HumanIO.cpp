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
//	input = getSingleInputChar();
	int input_int;

	do {
		input_int = getSingleInputInt();
		if (input_int < 1)
			message(strings::TO_FEW_PLAYERS_ERROR, true);
		else if (input_int > 5)
			message(strings::TO_MANY_PLAYERS_ERROR, true);
	} while (input_int < 1 || input_int > 5);

	cout << "Starting game for " << input_int << " players" << endl;
	//return atoi(&input);
	return input_int;
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
		cout << "Player " << i + 1 << " " << p_names[i] << ":$500"<< endl;
}

void HumanIO::placeBets(vector<HPlayer>* h_players) {
	int bet = 0;
	int user_input;
	string user_name;
	cout << strings::PLACE_YOUR_BETS << endl;
	cout << strings::BET_CHOICES << endl;

	for (unsigned int i = 0; i < h_players->size(); i++) {
		user_name = h_players->at(i).getPlayerName();
		cout << endl << h_players->at(i).getPlayerName()
				<< " please choose your bet?" << endl;
		do {
			user_input = getSingleInputInt();
			bet = BetSize::getBetAmount(user_input);
			if (user_input < 1 || user_input > 3) {
				cout << user_name;
				message(strings::BET_ERROR, false);
				message(strings::BET_CHOICES, true);
			}
		} while (user_input < 1 || user_input > 3);
		cout << "Setting bet $" << bet << " for "
				<< h_players->at(i).getPlayerName() << ". " << endl;
		h_players->at(i).setBet(bet);
		bet = 0;
	}
	for (unsigned int i = 0; i < h_players->size(); i++) {
		cout << h_players->at(i).getPlayerName() << " bets $"
				<< h_players->at(i).getBet() << endl;
	}

	cout << endl;
}

void HumanIO::showPlayerNames(vector<HPlayer>& h_players) {
	for (unsigned int i = 0; i < h_players.size(); i++) {
		cout << ((HPlayer) h_players[i]).getPlayerName() << " $" << *((HPlayer) h_players[i]).showCash() <<", ";
	}
	cout << endl << endl;
}

/**
 * Prints out the dealed cards for every player
 */
void HumanIO::showDealedCards(vector<HPlayer>& h_players, Bank& bank) {
	stringstream ss;

//	ss << "Player\t" << "Card 1\t" << "Card 2\t " << "Score" << endl;

	ss << endl << "---=== DEAL ===---" << endl;

	//Getting cards for every player
	for (unsigned int i = 0; i < h_players.size(); i++) {

		ss << h_players[i].getPlayerName() << "\t|";

		for (int j = 0; j < h_players[i].getHandSize(); j++) {
			ss << h_players[i].showHandCardAt(j).getFullCardName() << " | ";
		}
		ss << "Score: " << h_players[i].getHandScore();
		ss << endl;
	}

	//Printign out cards of dealer
	//Second card is not suposed to be visible for other players
	ss << bank.getPlayerName() << "\t|";
//	for (int i = 0; i < bank.getHandSize(); i++) {
//		ss << bank.showHandCardAt(i).getFullCardName() << " | ";
//	}
	ss << bank.showHandCardAt(0).getFullCardName() << " | ";
	ss << "*************" << " | ";
//	ss << "Score: " << bank.getHandScore();
	ss << "Score: *";
	cout << ss.str() << endl << endl;
}

/**
 * Request for action from player.
 * For now it only handles HIT and STAND actions.
 */
PlayerAction HumanIO::requestPlayerAction(HPlayer& h_player) {
	string user_name = h_player.getPlayerName();
	int action_received;

	cout << endl << "Player " << user_name
			<< " please choose your action " << endl << strings::ACTION
			<< endl;

	do {
		action_received = getSingleInputInt();
		if(action_received < 1 || action_received > 2)
			message(user_name+strings::ACTION_ERROR, true);
	} while (action_received < 1 || action_received > 2);

	//More actions can be implemented later on
	switch (action_received) {
	case 1:
		return PlayerAction::Hit;
		break;
	default:
		return PlayerAction::Stand;
		break;
	}
}

void HumanIO::message(string message, bool new_line) {
	if (new_line)
		cout << message << endl;
	else
		cout << message;
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
