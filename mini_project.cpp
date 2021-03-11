#include "funcs.h"

using namespace std;
int main()
{
    vector<vector<char>> field(10, vector<char>(10));

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            field[i][j] = '$';
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << (char)field[i][j] << " ";
        }
        cout << endl;
    }
}
