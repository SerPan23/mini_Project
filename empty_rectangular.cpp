#include "funcs.h"
int empty_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height )
{
	line(field, x, y, x + width-1, y, r); // 1
	line(field, x, y + height, x + width-1, y + height, r); // 1
	//line(field, x + width, y, x + width, y + height, r); // 2
	line(field, x, y, x, y + height, r); // 3
	line(field, x + width-1, y, x + width-1, y + height, r); // 4
	
	//    1
	//  *-----*
	//3 |     | 2
	//  |     |
	//  *-----*
	//     4


	return 1;
}