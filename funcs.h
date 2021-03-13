#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED
#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

/* ������� ��������� */
int background(vector <vector <char>>& field, int w, int h, char c);
int empty_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c);
int empty_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height);
int filled_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c);
int filled_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height);
int line(vector <vector <char>>& field, int xa, int ya, int xb, int yb, char c);

/* ���� ������� */
void swap(int& a, int& b);
int str_to_int(string str);
void command_parser(vector <string>& args, string command);
void SetColor(int text, int bg);

/* ������� ������ � ������� */
void fileRead(string path, vector <string>& commands);
#endif