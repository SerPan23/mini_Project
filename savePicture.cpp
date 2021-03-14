#include "funcs.h"
void savePicture(vector<vector<char>>& field, string path)
{
	string folderpath, filename="result_operation_file.it";
	for (int i = 0; i < path.size() - 12; i++)
		folderpath += path[i];
	fileClear(folderpath + filename);
	for (int i = 0; i < field.size(); i++)
	{
		string value;
		vector <char> tmp = field[i];
		for (int j = 0; j < tmp.size(); j++)
			value += tmp[j];
		fileWrite(value, folderpath + filename);
	}
	printSuccess("File saved");
}