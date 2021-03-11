#include <vector>
#include <iostream>
#include "funcs.h"

using namespace std;

void swap(int& a, int& b) {
	int temp;
	temp = b;
	b = a;
	a = temp;
}