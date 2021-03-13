#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED
#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

/* Функции рисования */
int background(vector <vector <char>>& field, int w, int h, char c);
int empty_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c);
int empty_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height);
int filled_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c);
int filled_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height);
int line(vector <vector <char>>& field, int xa, int ya, int xb, int yb, char c);

/* Наши функции */
void swap(int& a, int& b);
int str_to_int(string str);
void command_parser(vector <string>& args, string command);
void SetColor(int text, int bg);
bool fitsField(int width, int height, int x1, int y1, int x2, int y2);
bool fitsField(int width, int height, int x1, int y1, int xl, int yl, char c);
bool fitsField(int width, int height, int x, int y, int r);

/* Функции работы с файлами */
void fileRead(string path, vector <string>& commands);
#endif