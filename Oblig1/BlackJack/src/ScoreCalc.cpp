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
	if (user_table_score <= 11)
		return 10;
	return 1;
}

std::string ScoreCalc::wonOrlost(int score) {
	if (score == 21)
		return "BlackJack!";
	else if(score > 21)
		return "BUSTED";
	return "";
}
