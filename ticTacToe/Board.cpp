#include <vector>
#include "Board.h"
#include <iostream>
#include <string>

Board::Board()
{
	this->tiles = Board::getEmptyBoard();
}

std::vector<std::vector<char>> Board::getEmptyBoard()
{
	std::vector<std::vector<char>> result = {
		{ '1', '2', '3' },
		{ '4', '5', '6' },
		{ '7', '8', '9' }
	};

	return result;
}

void Board::printSelf()
{
	std::vector<char> firstRow = this->tiles[0];
	std::vector<char> secondRow = this->tiles[1];
	std::vector<char> thirdRow = this->tiles[2];

	Board::printRow(firstRow);
	Board::printDivider();
	Board::printRow(secondRow);
	Board::printDivider();
	Board::printRow(thirdRow);
}

void Board::printRow(std::vector<char> row)
{
	std::cout << " " << row[0] << " | " << row[1] << " | " << row[2] << std::endl;
}

void Board::printDivider()
{
	std::cout << "---+---+---" << std::endl;
}