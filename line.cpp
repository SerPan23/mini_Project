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

/*int line(vector <vector <char>>& field, int xa, int ya, int xb, int yb, char c) {
	if (xa > xb && ya > yb) {
		swap(xa, xb);
		swap(ya, yb);
	}

	/*if (xa == xb) {
		vertical(field, ya, ya-yb, c);
	}
	else if (ya == yb) {
		horizontal(field, xa, xa-xb, c);
	}*//*
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
	
}*/

int line(vector <vector <char>>& field, int x0, int y0, int x1, int y1, char c)
{
	int A, B, sign;
	A = y1 - y0;
	B = x0 - x1;
	if (my_abs(A) > my_abs(B)) sign = 1;
	else sign = -1;
	int signa, signb;
	if (A < 0) signa = -1;
	else signa = 1;
	if (B < 0) signb = -1;
	else signb = 1;
	int f = 0;
	field[y0][x0] = c;
	int x = x0, y = y0;
	if (sign == -1)
	{
		do {
			f += A * signa;
			if (f > 0)
			{
				f -= B * signb;
				y += signa;
			}
			x -= signb;
			field[y][x] = c;
		} while (x != x1 || y != y1);
	}
	else
	{
		do {
			f += B * signb;
			if (f > 0) {
				f -= A * signa;
				x -= signb;
			}
			y += signa;
			field[y][x] = c;
		} while (x != x1 || y != y1);
	}

	return 1;
}