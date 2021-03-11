#include "funcs.h"

using namespace std;
int main()
{
    int w, h;
    char c;
    cin >> w >> h >> c;
    vector<vector<char>> field(h, vector<char>(w));

    /*for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            field[i][j] = '$';
        }
    }*/
    background(field, w, h, c);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << (char)field[i][j] << " ";
        }
        cout << endl;
    }
}
