#include "funcs.h"

int main()
{
    string path = "H:\\Codes\\с++_school\\mini_Project\\operation.it";
    //cin >> w >> h >> c;
    vector <string> commands, bgargs;
    fileRead(path, commands);
    string bg = commands[0];
    command_parser(bgargs, bg);
    int w = str_to_int(bgargs[0]), h = str_to_int(bgargs[1]);
    char c = bgargs[2][0];
    vector<vector<char>> field(h, vector<char>(w));
    background(field, w, h, c);
    
    /*for (int i = 1; i < commands.size(); i++)
    {
        string command = commands[i];
        vector <string> args;
        command_parser(args, command);
        cout << command << endl;
        if (command[0] == 'r')
        {
            int x = str_to_int(args[0]), y = str_to_int(args[1]), width = str_to_int(args[2]), height = str_to_int(args[3]);
            char c = args[4][0];
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
    }*/
    empty_rectangular(field, '*', 0, 0, 2, 2);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
}
