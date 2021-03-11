#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void horizontal(vector <vector <int>>& field, int x, int length, char c) {
	for (int i = 0; i < length; i++)
	{
		field[x][i] = c;
	}
}

void vertical

void line(int xa, int ya, int xb, int yb, char c) {
	int length = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
}