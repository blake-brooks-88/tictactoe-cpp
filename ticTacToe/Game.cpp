#include "Board.h"
#include "Game.h"
#include <string>
#include <iostream>

Game::Game()
{
	Board board;
	board.printSelf();
	//Game::getPlayerCount();
	Game::printInstructions(Game::NEW_GAME_INSTRUCTIONS);
}

void Game::printInstructions(std::string instruction)
{
	std::cout << instruction;
}

