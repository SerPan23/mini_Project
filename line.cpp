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

void vertical(vector <vector <int>>& field, int y, int length, char c) {
	for (int i = y; i < length; i++)
	{
		field[i][y] = c;
	}
}

void line(vector <vector <int>>& field, int xa, int ya, int xb, int yb, char c) {
	if (xa > xb) {
		swap(xa, xb);
	}
	else if (ya > yb) {
		swap(ya, yb);
	}

	if (xa == xb) {
		vertical(field, ya, ya-yb, c);
	}
	else if (ya == yb) {
		horizontal(field, xa, xa-xb, c);
	}
	else {
		const int deltaX = abs(xb - xa);
		const int deltaY = abs(yb - ya);
		const int signX = xa < xb ? 1 : -1;
		const int signY = ya < yb ? 1 : -1;
		int error = deltaX - deltaY;
		field[xb][yb] = '*';
		while (xa != xb || ya != yb)
		{
			field[xa][ya] = '*';
			int error2 = error * 2;
			if (error2 > -deltaY)
			{
				error -= deltaY;
				xa += signX;
			}
			if (error2 < deltaX)
			{
				error += deltaX;
				ya += signY;
			}
		}
	}
}