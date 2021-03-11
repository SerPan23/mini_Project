#include <cmath>
#include <iostream>

using namespace std;

void horizontal(int x, int length, char c) {
	for (int i = 0; i < length; i++)
	{
		cout << c;
	}
	cout << endl;
}

void line(int xa, int ya, int xb, int yb, char c) {
	int length = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
}