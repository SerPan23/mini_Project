#include "funcs.h"

int commandHanlder(vector <string> commands, char bgc, int fieldWidth, int fieldHeight, vector<vector<char>> field, vector<vector <int>> colorsfield) {
    for (int i = 1; i < commands.size(); i++)
    {
        string command = commands[i];
        vector <string> args;
        command_parser(args, command);
        //cout << command << endl;
        if (command[0] == 'r')
        {
            // Empty Rectangular
            if (make_r(args, command, bgc, fieldWidth, fieldHeight, field, colorsfield) == -1)
                return -1;
        }
        else if (command[0] == 'R')
        {
            // Fileld Rectangular
            if (make_R(args, command, bgc, fieldWidth, fieldHeight, field, colorsfield) == -1)
                return -1;
        }
        else if (command[0] == 'c')
        {
            // Empty Circle
            if (make_c(args, command, bgc, fieldWidth, fieldHeight, field, colorsfield) == -1)
                return -1;
        }
        else if (command[0] == 'C')
        {
            // Filled Circle
            if (make_C(args, command, bgc, fieldWidth, fieldHeight, field, colorsfield) == -1)
                return -1;
        }
        else if (command[0] == 'L')
        {
            // Line
            if (make_L(args, command, bgc, fieldWidth, fieldHeight, field, colorsfield) == -1)
                return -1;
        }
        else
        {
            printError("Error: Incorrect command");
            return -1;
        }
    }
}