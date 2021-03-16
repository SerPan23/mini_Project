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