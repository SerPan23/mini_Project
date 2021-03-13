#include "funcs.h"
void fileRead(string path, vector <string>& commands) {
	string tmp;
	ifstream file;
	file.open(path, ios_base::in);
	if (file.is_open()) {
		while (getline(file, tmp))
		{
			commands.push_back(tmp);
		}
	}
	else
		printError("Error: Operation file corrupted");
	file.close();
}
