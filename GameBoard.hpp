//
//  GameBoard.hpp
//

#pragma once

#include <stdexcept>

#include "ExtendableVector.h"

const int OUTSIDE_BOARD = -1;
const int BOARD_SIZE = 101;

class GameBoard {
public:
	enum Ladders { ONE = 1, FOUR = 4, NINE = 9, TWENTY_ONE = 21, TWENTY_EIGHT = 28, THIRTY_SIX = 36, FIFTY_ONE = 51, SEVENTY_ONE = 71, EIGHTY = 80 };

	enum Chutes { SIXTEEN = 16, FORTY_SEVEN = 47, FORTY_NINE = 49, FIFTY_SIX = 56, SIXTY_TWO = 62, SIXTY_FOUR = 64, EIGHTY_SEVEN = 87, NINETY_THREE = 93, NINETY_FIVE = 95, NINETY_EIGHT = 98 };

	// Build the gameboard
	// TO DO: implement this function
	void buildBoard();
		


	

	GameBoard() {}
	
	
	// If player lands on chutes or ladders, returns the new position.
	// Otherwise, returns the player's current position.
	// If the player's position is outside of the gameboard, throws index out of bounds exception
	// TO DO: implement this function properly
	int checkChutesLadders(int position) {
		if ((position < 0) || (position >= BOARD_SIZE)) {
			throw range_error("index out of bounds");
		}
		if (position == 1)
			return position = 38;
		else if (position == 4)
			return position = 14;
		else if (position == 9)
			return position = 31;
		else if (position == 21)
			return position = 42;
		else if (position == 28)
			return position = 84;
		else if (position == 36)
			return position = 44;
		else if (position == 51)
			return position = 67;
		else if (position == 71)
			return position = 91;
		else if (position == 80)
			return position = 100;
		else if (position == 16)
			return position = 6;
		else if (position == 47)
			return position = 26;
		else if (position == 49)
			return position = 11;
		else if (position == 56)
			return position = 53;
		else if (position == 62)
			return position = 19;
		else if (position == 64)
			return position = 60;
		else if (position == 87)
			return position = 24;
		else if (position == 93)
			return position = 73;
		else if (position == 95)
			return position = 75;
		else if (position == 98)
			return position = 78;
		else return position;
		// TODO: implement this function properly
		throw std::logic_error("not implemented yet");
	}

private:
	
	
	// TO DO: add storage for squares including square of chutes and ladders
	// Requirement: use ExtendableVector to store the square
};
