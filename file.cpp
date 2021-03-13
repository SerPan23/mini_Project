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

void fileWrite(string value, string path) {
	ofstream file;
	file.open(path, ios_base::app);
	if (file.is_open()) {
		file << value << endl;
	}
	else {
		cout << "Error";
	}
	file.close();
}

void fileClear(string path) {
	ofstream file;
	file.open(path);
	if (file.is_open()) {
		file << "";
	}
	else {
		cout << "Error happened clearing";
	}
}