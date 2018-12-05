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
	ASSERT_EQ(whose_turn == X, true)
}