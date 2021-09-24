#pragma once
class solverr
{
public:
	solverr();

	bool solve(int b[9][9], int x, int y);

	bool isValid(int x, int y, int b[9][9], int val);

	void print(int b[9][9]);

	void copy(int b[9][9], int b2[9][9]);
};

