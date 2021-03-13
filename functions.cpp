#include "funcs.h"
void swap(int& a, int& b) {
	int temp;
	temp = b;
	b = a;
	a = temp;
}

int my_abs(int a) {
    if (a < 0) return -a;
    return a;
}

double my_abs(double a) {
    if (a < 0) return -a;
    return a;
}

int str_to_int(string str)
{
    int otv = 0, i = 0;
    char t = '1';
    while (i < str.size())
    {
        t = str[i];
        otv *= 10;
        otv += t - 48;
        i++;
    }
    return otv;
}

void command_parser(vector <string>& args, string command)
{
    string tmp;
    for (int i = 0; i <= command.size(); i++)
    {
        if (command[i] == ' ' || command[i] == '\0')
        {
            args.push_back(tmp);
            tmp = "";
            continue;
        }
        else
            tmp += command[i];
    }
}

bool fitsField(int width, int height, int x1, int y1, int x2, int y2) {
    bool alpha, betta;
    alpha = (x1 <= width) && (x2 <= width);
    betta = (y1 <= height) && (y2 <= height);
    return alpha * betta;
}

bool fitsField(int width, int height, int x1, int y1, int xl, int yl, char c) {
    bool alpha, betta;
    alpha = (x1 <= width) && ((x1 + xl) <= height);
    betta = (y1 <= height) && (y1 + yl <= height);
    return alpha * betta;
}

bool fitsField(int width, int height, int x, int y, int r) {
    bool alpha, betta;
    alpha = (x + r <= width) && (x - r >= 0);
    betta = (y + r <= height) && (y - r >= 0);
    return alpha * betta;
}