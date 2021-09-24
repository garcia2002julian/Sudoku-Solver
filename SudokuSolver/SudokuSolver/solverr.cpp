#include <iostream>
#include <vector>
#include <string>
#include "solverr.h"
#include <map>

using namespace std;

solverr::solverr(){}

bool solverr::solve(int b[9][9], int x , int y) {
	//print(b);

	if (x == 8 && y == 8) {
		print(b);
		return true;
	}
	for (int q = 0; q < 9; q++) {
		for (int w = 0; w < 9; w++) {

			if (b[q][w] == 0) {
				bool found = false;
				for (int i = 1; i <= 9; i++) {
					if (isValid(w, q, b, i)) {
						bool found = true;
						b[q][w] = i;
						int b2[9][9];
						copy(b, b2);


						if (solve(b2, 0, q + 1)){
							return true;
						}
						else if (solve(b2, w + 1, q))
							return true;
					}
				}
				if (!found)
					return false;
			}
		}
	}
	

	return false;
}

bool solverr::isValid(int x, int y, int b[9][9], int val) {
	for (int i = 0; i < 9; i++) {
		if (b[y][i] == val) {
			return false;
		}
	}

	for (int i = 0; i < 9; i++) {
		if (b[i][x] == val) {
			return false;
		}
	}

	int gridx = x / 3;
	int gridy = y / 3;
	for (int i = 0; i < 3; i++) {
		for (int t = 0; t < 3; t++) {
			if (b[3 * gridy + i][3 * gridx + t] == val) {
				return false;
			}
		}
	}

	return true;
}

void solverr::print(int b[9][9]) {
	for (int i = 0; i < 9; i++){
		if(i % 3 == 0 && i != 0)
				for (int t = 0; t < 30; t++)
					cout << "_";
		cout << endl;
		for(int t = 0; t < 9; t++){
			if (t % 3 == 0 && t != 0)
				cout << "|";
			if (b[i][t] == 0)
				cout << "   ";
			else
				cout << " " << b[i][t] << " ";
			
		}
		cout << endl;
	}
}

void solverr::copy(int b[9][9], int b2[9][9]) {
	for (int i = 0; i < 9; i++) {
		for (int t = 0; t < 9; t++) {
			b2[i][t] = b[i][t];
		}
	}
}