#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

/* Функции рисования */
void background(vector <vector <char>>& field, int w, int h, char c);
void empty_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c);
void empty_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height);
void filled_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c);
void filled_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height);
void line(vector <vector <char>>& field, int xa, int ya, int xb, int yb, char c);

/* Наши функции */
void swap(int& a, int& b);
int str_to_int(string str);
void command_parser(vector <string>& args, string command);

/* Функции работы с файлами */
void fileRead(string path, vector <string>& commands);
#endif