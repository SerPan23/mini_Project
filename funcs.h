#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

void background();
void empty_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c);
void empty_rectangular();
void filled_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c);
void filled_rectangular();
void line(vector <vector <char>>& field, int xa, int ya, int xb, int yb, char c);

void fileRead(string path, vector <string>& commands);
#endif