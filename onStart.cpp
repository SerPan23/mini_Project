#include "funcs.h"

int onStart(int argc, char *argv[], string& path, vector <string>& commands, vector <string>& bgargs, bool& needSave) {
    if (argc == 3 && (argv[2][0] == '-' && argv[2][1] == '-' && argv[2][2] == 's' && argv[2][3] == 'a' && argv[2][4] == 'v' && argv[2][5] == 'e'))
    {
        path = argv[1];
        needSave = true;
    }
    else if (argc > 2 && argv[2] != "--save")
    {
        printError("Error: a lot of arguments");
        return -1;
    }
    else if (argc == 2)
        path = argv[1];
    else
    {
        cout << "Write the path to the file:" << endl;
        cin >> path;
        string answer = "";
        while (answer[0] != 'y' && answer[0] != 'n')
        {
            cout << "Do you want save file?\nPrint yes or no: ";
            cin >> answer;
            cout << endl;
        }
        if (answer[0] == 'y')
            needSave = true;
    }
    return 1;
}