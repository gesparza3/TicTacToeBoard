/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoardTest, toggleX)
{
	TicTacToeBoard b;
	Piece whose_turn = b.toggleTurn();
	ASSERT_EQ(whose_turn == O, true);
}

TEST(TicTacToeBoardTest, toggleO)
{
	TicTacToeBoard b;
	Piece whose_turn = b.toggleTurn();
	whose_turn = b.toggleTurn();
	ASSERT_EQ(whose_turn == X, true);
}

TEST(TicTacToeBoardTest, isFirstPlaced)
{
	TicTacToeBoard b;
	Piece whose_turn = b.placePiece(1, 1);
	ASSERT_EQ(whose_turn == X, true);
}

TEST(TicTacToeBoardTest, getBlankPiece)
{
	TicTacToeBoard b;
	Piece blank_piece = b.getPiece(2, 1);
	ASSERT_EQ(blank_piece == Blank, true);
}

TEST(TicTacToeBoardTest, getInvalidPiece)
{
	TicTacToeBoard b;
	Piece invalid_piece = b.getPiece(BOARDSIZE + 1, 1);
	ASSERT_EQ(invalid_piece == Invalid, true);
}

TEST(TicTacToeBoardTest, getPlacedPiece)
{
	TicTacToeBoard b;
	Piece blank_piece = b.placePiece(2, 1);
	Piece new_piece = b.getPiece(2, 1);
	ASSERT_EQ(blank_piece == new_piece, true);
}