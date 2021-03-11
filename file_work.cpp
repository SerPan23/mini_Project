#include "funcs.h"

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
	file.close();
}