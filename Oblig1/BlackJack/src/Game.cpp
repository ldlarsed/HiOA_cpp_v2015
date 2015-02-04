#include "Game.h"

using namespace std;

Game::Game() {

}

//Se hvorfor utskriften over ikke kommer ut?

Game::~Game() {
}

void Game::initilizeNewGame() {
	h_io.message("Players ", false);
	h_io.showPlayerNames(h_players);
}

void Game::runGame(){
	placeBets();
}

void Game::placeBets(){
	h_io.placeBets(&h_players);
}
