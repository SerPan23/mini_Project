#include "funcs.h"

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

int main()
{
    string path = "F:\\Codes\\с++_school\\mini_Project\\operation.it";
    int w, h;
    char c;
    //cin >> w >> h >> c;
    vector <string> commands;
    fileRead(path, commands);
    string bg = commands[0];
    int sp = 0;
    string tmp;
    for (int i = 0; i < bg.size(); i++)
    {
        if (bg[i] == ' ' && sp == 0)
        {
            w = str_to_int(tmp);
            tmp = "";
            sp++;
            cout << w << endl;
            continue;
        }
        else if (bg[i] == ' ' && sp == 1)
        {
            h = str_to_int(tmp);
            tmp = "";
            sp++;
            cout << h << endl;
            continue;
        }
        else
            tmp += bg[i];
    }
    c = tmp[0];
    vector<vector<char>> field(h, vector<char>(w));
    background(field, w, h, c);

    for (int i = 1; i < commands.size(); i++)
    {
        string command = commands[i];
        cout << command << endl;
        if (command[0] == 'r')
        {
            int sp = 0, x = 0, y = 0, width = 0, height = 0;
            char c;
            string temp;
            for (int i = 2; i < command.size(); i++)
            {
                if (command[i] == ' ' && sp == 0)
                {
                    x = str_to_int(temp);
                    temp = "";
                    sp++;
                    cout << x << endl;
                    continue;
                }
                else if (command[i] == ' ' && sp == 1)
                {
                    y = str_to_int(temp);
                    temp = "";
                    sp++;
                    cout << y << endl;
                    continue;
                }
                else if (command[i] == ' ' && sp == 2)
                {
                    width = str_to_int(temp);
                    temp = "";
                    sp++;
                    cout << width << endl;
                    continue;
                }
                else if (command[i] == ' ' && sp == 3)
                {
                    height = str_to_int(temp);
                    temp = "";
                    sp++;
                    cout << height << endl;
                    continue;
                }
                else
                    temp += command[i];
            }
            c = temp[0];
            cout << c << endl;
            empty_rectangular(field, c, x, y, width, height);
        }
        else if (command[0] == 'R')
        {
            cout << "R";
        }
        else if (command[0] == 'c')
        {
            cout << "c";
        }
        else if (command[0] == 'C')
        {
            cout << "C";
        }
        else if (command[0] == 'L')
        {
            cout << "L";
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
}
