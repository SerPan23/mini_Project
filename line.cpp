#include <cmath>
#include <iostream>
#include <vector>
#include "funcs.h"

using namespace std;

//void horizontal(vector <vector <char>>& field, int x, int length, char c) {
//	for (int i = 0; i < length; i++)
//	{
//		field[x][i] = c;
//	}
//}
//
//void vertical(vector <vector <char>>& field, int y, int length, char c) {
//	for (int i = y; i < length; i++)
//	{
//		field[i][y] = c;
//	}
//}

int line(vector <vector <char>>& field, int xa, int ya, int xb, int yb, char c) {
	if (xa > xb && ya > yb) {
		swap(xa, xb);
		swap(ya, yb);
	}

	/*if (xa == xb) {
		vertical(field, ya, ya-yb, c);
	}
	else if (ya == yb) {
		horizontal(field, xa, xa-xb, c);
	}*/
	const int deltaX = my_abs(xb - xa);
	const int deltaY = my_abs(yb - ya);
	const int signX = xa < xb ? 1 : -1;
	const int signY = ya < yb ? 1 : -1;
	int error = deltaX - deltaY;
	field[xb][yb] = c;
	while (xa != xb || ya != yb)
	{
		field[xa][ya] = c;
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

	return 1;
	
}