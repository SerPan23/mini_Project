#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED
#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

/* Функции рисования */
int background(vector <vector <char>>& field, int w, int h, char c, vector <vector <int>>& colorsfield);
int empty_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c);
int empty_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height);
int filled_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c);
int filled_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height);
int line(vector <vector <char>>& field, int xa, int ya, int xb, int yb, char c);

int empty_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c, int color, vector <vector <int>>& colorsfield);
int empty_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height, int color, vector <vector <int>>& colorsfield);
int filled_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c, int color, vector <vector <int>>& colorsfield);
int filled_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height, int color, vector <vector <int>>& colorsfield);
int line(vector <vector <char>>& field, int xa, int ya, int xb, int yb, char c, int color, vector <vector <int>>& colorsfield);

/* Команды */
int make_r(vector <string>& args, string& command, char bgc, int fieldWidth, int fieldHeight, vector<vector<char>>& field, vector<vector<int>>& colorsfield);
int make_R(vector <string>& args, string& command, char bgc, int fieldWidth, int fieldHeight, vector<vector<char>>& field, vector<vector<int>>& colorsfield);
int make_c(vector <string>& args, string& command, char bgc, int fieldWidth, int fieldHeight, vector<vector<char>>& field, vector<vector<int>>& colorsfield);
int make_C(vector <string>& args, string& command, char bgc, int fieldWidth, int fieldHeight, vector<vector<char>>& field, vector<vector<int>>& colorsfield);
int make_L(vector <string>& args, string& command, char bgc, int fieldWidth, int fieldHeight, vector<vector<char>>& field, vector<vector<int>>& colorsfield);
int commandHanlder(vector <string> commands, char bgc, int fieldWidth, int fieldHeight, vector<vector<char>> field, vector<vector <int>> colorsfield);

/* Misc */
void output(int h, int w, vector<vector<char>>& field, vector<vector<int>>& colorsfield);
int onStart(int argc, char* argv[], string& path, vector <string>& commands, vector <string>& bgargs, bool& needSave);
int pathSizeHandler(int pathSize, string path);

/* Наши функции */
void swap(int& a, int& b);
int str_to_int(string str);
void command_parser(vector <string>& args, string command);
void SetColor(int text, int bg);
int my_abs(int a);
double my_abs(double a);
bool fitsField(int width, int height, int x1, int y1, int x2, int y2);
bool fitsField(int width, int height, int x1, int y1, int x2, int y2, char c);
bool fitsField(int width, int height, int x, int y, int r);
bool checkCommandForCorrect(vector <string>& args);
bool ifArgNumber(string arg);
void changeSymbol(char& c, string command);

/* Функции вывода */
void printError(string error);
void printSuccess(string msg);

/* Функции работы с файлами */
void fileRead(string path, vector <string>& commands);
void fileWrite(string value, string path);
void fileClear(string path);
void savePicture(vector<vector<char>>& field, string path);
#endif