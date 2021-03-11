#ifndef SORTIC_H_INCLUDED
#define SORTIC_H_INCLUDED
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

void background();
void empty_circle();
void empty_rectangular();
void filled_circle();
void filled_rectangular();
void line(vector <vector <int>>& field, int xa, int ya, int xb, int yb, char c);


void fileWrite(string value, string path);
void fileClear(string path);
#endif