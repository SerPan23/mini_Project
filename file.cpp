#include "funcs.h"
void fileRead(string path, vector <string>& commands) {

	int pathSize = path.size();
	if (path[pathSize - 2] != 'i' && path[pathSize - 1] != 'i]t')
	{
		cout << "Error: Operation file has not correct extension" << endl;
		return;
	}
	if (path[pathSize - 12] != 'o' && path[pathSize - 11] != 'p' && path[pathSize - 10] != 'e' && path[pathSize - 9] != 'r' && path[pathSize - 8] != 'a' && path[pathSize - 7] != 't' && path[pathSize - 6] != 'i' && path[pathSize - 5] != 'o' && path[pathSize - 4] != 'n')
	{
		cout << "Error: name file" << endl;
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
		cout << "Error: Operation file corrupted" << endl;
	}
	file.close();
}
