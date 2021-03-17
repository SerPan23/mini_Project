#include "funcs.h"

void output(int h, int w, vector<vector<char>>& field, vector<vector<int>>& colorsfield) {
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            SetColor(colorsfield[i][j], 0);
            cout << field[i][j] << " ";
            SetColor(7, 0);
        }
        cout << endl;
    }
}