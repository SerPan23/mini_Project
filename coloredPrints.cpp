#include "funcs.h"
void printError(string error)
{
    SetColor(12, 0);
    cout << error << endl;
    SetColor(7, 0);
}

void printSuccess(string msg)
{
    SetColor(10, 0);
    cout << msg << endl;
    SetColor(7, 0);
}