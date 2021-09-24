// SudokuSolver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "solverr.h"

int main()
{
	int board[9][9] = { {0, 0, 1, 3, 0, 2, 0, 0, 0},
					{0, 0, 3, 0, 0, 7, 0, 4, 5},
					{0, 0, 7, 0, 0, 0, 0, 0, 9},
					{0, 0, 6, 5, 0, 0, 0, 7, 0},
					{2, 0, 0, 0, 0, 0, 0, 0, 1},
					{0, 9, 0, 0, 0, 1, 4, 0, 0},
					{5, 0, 0, 0, 0, 0, 9, 0, 0},
					{6, 1, 0, 2, 0, 0, 8, 0, 0},
					{0, 0, 0, 9, 0, 8, 5, 0, 0} };
	solverr s = solverr();
	s.solve(board, 0, 0);
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
