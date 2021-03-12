#include "funcs.h"
void fileRead(string path, vector <string>& commands) {

	int pathSize = path.size();
	if (path[pathSize - 2] != 'i' && path[pathSize - 1] != 't')
	{
		SetColor(12, 0);
		cout << "Error: Operation file has not correct extension" << endl;
		SetColor(7, 0);
		return;
	}
	else if (path[pathSize - 12] != 'o' && path[pathSize - 11] != 'p' && path[pathSize - 10] != 'e' && path[pathSize - 9] != 'r' && path[pathSize - 8] != 'a' && path[pathSize - 7] != 't' && path[pathSize - 6] != 'i' && path[pathSize - 5] != 'o' && path[pathSize - 4] != 'n')
	{
		SetColor(12, 0);
		cout << "Error: name file" << endl;
		SetColor(7, 0);
		return;
	}
	string tmp;
	ifstream file;
	file.open(path, ios_base::in);
	if (file.is_open()) {
		while (getline(file, tmp))
		{
			commands.push_back(tmp);
		}
	}
	else {
		SetColor(12, 0);
		cout << "Error: Operation file corrupted" << endl;
		SetColor(7, 0);
	}
	file.close();
}
