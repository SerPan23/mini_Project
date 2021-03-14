#include "funcs.h"
bool checkCommandForCorrect(vector <string>& args)
{
    if (args[0] == "r" || args[0] == "R")
    {
        if (args.size() > 6 || args.size() < 6)
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
    }
    else if (args[0] == "L")
    {
        if (args.size() > 6 || args.size() < 6)
        {
            printError("Error: Uncorrect command");
            return 0;
        }
    }
}