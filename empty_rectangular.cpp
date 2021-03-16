#include "funcs.h"
int empty_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height )
{
	/*line(field, x, y, x + width-1, y, r); // 1
	line(field, x, y + height-1, x + width-1, y + height-1, r); // 1
	//line(field, x + width, y, x + width, y + height, r); // 2
	line(field, x, y, x, y + height-1, r); // 3
	line(field, x + width-1, y, x + width-1, y + height-1, r); // 4
	
	//    1
	//  *-----*
	//3 |     | 2
	//  |     |
	//  *-----*
	//     4*/
	
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if(i == 0 || i == height-1)
				field[y + i][x + j] = r;
			else
			{
				field[y + i][x] = r;
				field[y + i][x + width-1] = r;
			}
		}
	}

	return 1;
}

int empty_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height, int color, vector <vector <int>>& colorsfield)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || i == height - 1)
			{
				field[y + i][x + j] = r;

				colorsfield[y + i][x + j] = color;
			}
			else
			{
				field[y + i][x] = r;
				field[y + i][x + width - 1] = r;

				colorsfield[y + i][x] = color;
				colorsfield[y + i][x + width - 1] = color;
			}
		}
	}

	return 1;
}