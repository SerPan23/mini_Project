#include "funcs.h"
bool ifArgNumber(string arg)
{
    for (int i = 0; i < arg.size(); i++)
    {
        if (arg[i] != '0' && arg[i] != '1' && arg[i] != '2' && arg[i] != '3' && arg[i] != '4' && arg[i] != '5' && arg[i] != '6' && arg[i] != '7' && arg[i] != '8' && arg[i] != '9')
            return 0;
    }
    return 1;
}

bool checkCommandForCorrect(vector <string>& args)
{
    if (args[0] == "r" || args[0] == "R" || args[0] == "L")
    {
        if (args.size() > 6 || args.size() < 6)
        {
            printError("Error: Uncorrect command");
            return 0;
        }
        if (!(ifArgNumber(args[1]) && ifArgNumber(args[2]) && ifArgNumber(args[3]) && ifArgNumber(args[4])))
        {
            printError("Error: Uncorrect command");
            return 0;
        }
    }
    else if (args[0] == "c" || args[0] == "C")
    {
        if (args.size() > 5 || args.size() < 5)
        {
            printError("Error: Uncorrect command");
            return 0;
        }
        if (!(ifArgNumber(args[1]) && ifArgNumber(args[2]) && ifArgNumber(args[3])))
        {
            printError("Error: Uncorrect command");
            return 0;
        }
    }
    else
    {
        if (args.size() > 3 || args.size() < 3)
        {
            printError("Error: Uncorrect command");
            return 0;
        }
        if (!(ifArgNumber(args[0]) && ifArgNumber(args[1])))
        {
            printError("Error: Uncorrect command");
            return 0;
        }
    }

    return 1;
}