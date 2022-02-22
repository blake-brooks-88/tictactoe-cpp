#pragma once
#include <vector>

class Board
{
public:
	Board();
	void printSelf();
//member functions 
private:
	std::vector<std::vector<char>> getEmptyBoard();	
	void printDivider();
	void printRow(std::vector<char> row);

private:
	std::vector<std::vector<char>> tiles;
};