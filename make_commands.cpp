#include "funcs.h"


int make_r(vector <string>& args, string& command, char bgc, int fieldWidth, int fieldHeight, vector<vector<char>>& field, vector<vector<int>>& colorsfield) {
    // Empty Rectangular
    if (!checkCommandForCorrect(args))
        return -1;
    int x = str_to_int(args[1]), y = str_to_int(args[2]), width = str_to_int(args[3]), height = str_to_int(args[4]);
    char c = args[5][0];
    if (c == bgc)
        changeSymbol(c, command);
    int color = -1, r = -1, g = -1, b = -1, s = -1;
    if (args.size() == 10)
    {
        r = str_to_int(args[6]);
        g = str_to_int(args[7]);
        b = str_to_int(args[8]);
        s = str_to_int(args[9]);
        color = getColorFromRGBS(r, g, b, s);
    }
    if (fitsField(fieldWidth, fieldHeight, x, y, width, height, c))
    {
        if (color > -1)
            empty_rectangular(field, c, x, y, width, height, color, colorsfield);
        else
            empty_rectangular(field, c, x, y, width, height);
    }
    else
    {
        printError("Error: Not enough space");
        return -1;
    }
}

int make_R(vector <string>& args, string& command, char bgc, int fieldWidth, int fieldHeight, vector<vector<char>>& field, vector<vector<int>>& colorsfield) {
    if (!checkCommandForCorrect(args))
        return -1;
    int x = str_to_int(args[1]), y = str_to_int(args[2]), width = str_to_int(args[3]), height = str_to_int(args[4]);
    char c = args[5][0];
    if (c == bgc)
        changeSymbol(c, command);
    int color = -1, r = -1, g = -1, b = -1, s = -1;
    if (args.size() == 10)
    {
        r = str_to_int(args[6]);
        g = str_to_int(args[7]);
        b = str_to_int(args[8]);
        s = str_to_int(args[9]);
        color = getColorFromRGBS(r, g, b, s);
    }
    if (fitsField(fieldWidth, fieldHeight, x, y, width, height, c))
    {
        if (color > -1)
            filled_rectangular(field, c, x, y, width, height, color, colorsfield);
        else
            filled_rectangular(field, c, x, y, width, height);
    }
    else
    {
        printError("Error: Not enough space");
        return -1;
    }
}
int make_c(vector <string>& args, string& command, char bgc, int fieldWidth, int fieldHeight, vector<vector<char>>& field, vector<vector<int>>& colorsfield) {
    if (!checkCommandForCorrect(args))
        return -1;
    int x = str_to_int(args[1]), y = str_to_int(args[2]), radius = str_to_int(args[3]);
    char c = args[4][0];
    if (c == bgc)
        changeSymbol(c, command);
    int color = -1, r = -1, g = -1, b = -1, s = -1;
    if (args.size() == 9)
    {
        r = str_to_int(args[5]);
        g = str_to_int(args[6]);
        b = str_to_int(args[7]);
        s = str_to_int(args[8]);
        color = getColorFromRGBS(r, g, b, s);
    }
    if (fitsField(fieldWidth, fieldHeight, x, y, radius))
    {
        if (color > -1)
            empty_circle(field, x, y, radius, c, color, colorsfield);
        else
            empty_circle(field, x, y, radius, c);
    }
    else
    {
        printError("Error: Not enough space");
        return -1;
    }
}
int make_C(vector <string>& args, string& command, char bgc, int fieldWidth, int fieldHeight, vector<vector<char>>& field, vector<vector<int>>& colorsfield) {
    if (!checkCommandForCorrect(args))
        return -1;
    int x = str_to_int(args[1]), y = str_to_int(args[2]), radius = str_to_int(args[3]);
    char c = args[4][0];
    if (c == bgc)
        changeSymbol(c, command);
    int color = -1, r = -1, g = -1, b = -1, s = -1;
    if (args.size() == 9)
    {
        r = str_to_int(args[5]);
        g = str_to_int(args[6]);
        b = str_to_int(args[7]);
        s = str_to_int(args[8]);
        color = getColorFromRGBS(r, g, b, s);
    }
    if (fitsField(fieldWidth, fieldHeight, x, y, radius))
    {
        if (color > -1)
            filled_circle(field, x, y, radius, c, color, colorsfield);
        else
            filled_circle(field, x, y, radius, c);
    }
    else
    {
        printError("Error: Not enough space");
        return -1;
    }
}
int make_L(vector <string>& args, string& command, char bgc, int fieldWidth, int fieldHeight, vector<vector<char>>& field, vector<vector<int>>& colorsfield) {
    if (!checkCommandForCorrect(args))
        return -1;
    int x = str_to_int(args[1]), y = str_to_int(args[2]), x1 = str_to_int(args[3]), y1 = str_to_int(args[4]);
    char c = args[5][0];
    if (c == bgc)
        changeSymbol(c, command);
    int color = -1, r = -1, g = -1, b = -1, s = -1;
    if (args.size() == 10)
    {
        r = str_to_int(args[6]);
        g = str_to_int(args[7]);
        b = str_to_int(args[8]);
        s = str_to_int(args[9]);
        color = getColorFromRGBS(r, g, b, s);
    }
    if (fitsField(fieldWidth, fieldHeight, x, y, x1, y1))
    {
        if (color > -1)
            line(field, x, y, x1, y1, c, color, colorsfield);
        else
            line(field, x, y, x1, y1, c);
    }
    else
    {
        printError("Error: Not enough space");
        return -1;
    }
}