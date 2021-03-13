#include "funcs.h"
void swap(int& a, int& b) {
	int temp;
	temp = b;
	b = a;
	a = temp;
}

int abs(int a) {
    if (a < 0) return -a;
    return a;
}

double abs(double a) {
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