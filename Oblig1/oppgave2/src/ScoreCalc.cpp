#include "ScoreCalc.h"

ScoreCalc::ScoreCalc() {
}

ScoreCalc::~ScoreCalc() {
}

int ScoreCalc::requestValue(int user_table_score, Card card) {

	return getStandardValue(user_table_score, card);
}

int ScoreCalc::getStandardValue(int user_table_score, Card card) {

	switch (card.getCardType()) {
	case CardType::Ace:
		return getAceValue(5);
		break;
	case CardType::King:
	case CardType::Queen:
	case CardType::Jack:
	case CardType::Ten:
		return 10;
		break;
	case CardType::Nine:
		return 9;
		break;
	case CardType::Eight:
		return 8;
		break;
	case CardType::Seven:
		return 7;
		break;
	case CardType::Six:
		return 6;
		break;
	case CardType::Five:
		return 5;
		break;
	case CardType::Four:
		return 4;
		break;
	case CardType::Three:
		return 3;
		break;
	case CardType::Two:
		return 2;
		break;
	default:
		return 0;
		break;
	}
}

int ScoreCalc::getAceValue(int user_table_score) {
	int possible_result = user_table_score + 11;
	if (possible_result == 21)
		return 10;
	return 1;
}

//int ScoreCalc::getAceValue(int user_table_score) {
//	if (user_table_score <= 11)
//		return 10;
//	return 1;
//}

std::string ScoreCalc::bj_or_bust(int score) {
	if (score == 21)
		return "BlackJack!";
	else if(score > 21)
		return "BUSTED";
	return "";
}

/**
 * Score calculator. I'm not sure about all the rules but I'll guess when
 * the score is even among player end the dealer even if both have a BJ
 * then no one wins and player get it bet back.
 */
int ScoreCalc::win_or_loose(int dealer_score, int player_score, int player_bet){

	int delta_dealer_score = 21-dealer_score;
	int delta_player_score = 21-player_score;

	if(player_score == dealer_score)
		return 0.0;
	else if(player_score == 21)
		return player_bet*1.5;
	else if(dealer_score > 21)
		return player_bet;
	else if(delta_dealer_score < delta_player_score)
		return player_bet*-1;
	else if(player_score < 21 && player_score > dealer_score)
		return player_bet;

	//I følgende regler finnes det en del feil
//	if(player_score == 21 && dealer_score != 21)
//		return player_bet * 1.5;
//	else if(player_score < 21 && dealer_score > 21)
//		return player_bet;
//	else if(player_score < dealer_score)
//		return player_bet*-1;
//	else if(player_score > 21)
//		return player_bet*-1;
//	else if(player_score == dealer_score)
//		return player_bet;

	return player_bet*-1;
}
