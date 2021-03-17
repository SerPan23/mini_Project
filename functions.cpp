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
        if ((command[i] == ' ' || command[i] == '\0') && tmp.size() > 0)
        {
            args.push_back(tmp);
            tmp = "";
            continue;
        }
        else
            tmp += command[i];
    }
}

bool fitsField(int width, int height, int x1, int y1, int x2, int y2, char c) {
    bool alpha, betta;
    if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0 || height < 0 || width < 0) {
        printError("Error: Incorrect data");
        return false;
    }
    alpha = (x1 <= width) && (x2 <= width);
    betta = (y1 <= height) && (y2 <= height);
    return alpha * betta;
}

bool fitsField(int width, int height, int x1, int y1, int x2, int y2) {
    if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0 || height < 0 || width < 0) {
        printError("Error: Incorrect data");
        return false;
    }
    bool alpha, betta;
    if (x1 == 0) 
        x1++;
    if (y1 == 0)
        y1++;
    alpha = (x1 < width) * (x2 < width);
    betta = (y1 < height) * (y2 < height);
    return alpha * betta;
}

bool fitsField(int width, int height, int x, int y, int r) {
    if (x < 0 || y1 < 0 || r < 0 || height < 0 || width < 0) {
        printError("Error: Incorrect data");
        return false;
    }
    bool alpha, betta;
    alpha = (x + r <= width) && (x - r >= 0);
    betta = (y + r <= height) && (y - r >= 0);
    return alpha * betta;
}

void changeSymbol(char& c, string command)
{
    cout << "Do you want change symbol for this command " + command + ",  because this symbol is similar to the background symbol?" << endl;
    string answer = "";
    while (answer[0] != 'y' && answer[0] != 'n')
    {
        cout << "Please write yes/no: ";
        cin >> answer;
        cout << endl;
    }
    if (answer[0] == 'y')
    {
        cout << "Please write new symbol: ";
        cin >> c;
        cout << endl;
    }
    return;
}