#pragma once
#include <string>

class Game
{
private:
	void printInstructions(std::string instruction);

public:
	Game();

private:
	const std::string NEW_GAME_INSTRUCTIONS = "Welcome to tic tac toe!\nHow many players would you like to play with?";

public:
};