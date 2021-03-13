#include "funcs.h"

int main(int argc, char *argv[])
{
    int fieldWidth, fieldHeight;
    string path;
    vector <string> commands, bgargs;
    if (argc > 2)
    {
        SetColor(12, 0);
        cout << "Error: a lot of arguments" << endl;
        SetColor(7, 0);
        return -1;
    }
    if (argc == 1)
    {
        //path = "H:\\Codes\\с++_school\\mini_Project\\operation.it";
        path = "D:\\Code\\CPP\\Hometask\\miniproject\\mini_Project\\operation.it"; 
        //cout << "Write the path to the file:" << endl;
        //cin >> path;
    }
    else
        path = argv[1];

    int pathSize = path.size();
    if (path[pathSize - 2] != 'i' || path[pathSize - 1] != 't')
    {
        SetColor(12, 0);
        cout << "Error: Operation file has not correct extension" << endl;
        SetColor(7, 0);
        return -1;
    }
    else if (path[pathSize - 12] != 'o' || path[pathSize - 11] != 'p' || path[pathSize - 10] != 'e' || path[pathSize - 9] != 'r' || path[pathSize - 8] != 'a' || path[pathSize - 7] != 't' || path[pathSize - 6] != 'i' || path[pathSize - 5] != 'o' || path[pathSize - 4] != 'n')
    {
        SetColor(12, 0);
        cout << "Error: name file" << endl;
        SetColor(7, 0);
        return -1;
    }
    else
        fileRead(path, commands);
    if (commands.size() == 0)
    {
        SetColor(12, 0);
        cout << "Error: No commands" << endl;
        SetColor(7, 0);
        return 0;
    }
    string bg = commands[0];
    command_parser(bgargs, bg);
    int w = str_to_int(bgargs[0]), h = str_to_int(bgargs[1]);
    char c = bgargs[2][0];
    vector<vector<char>> field(h, vector<char>(w));
    background(field, w, h, c);
    fieldWidth = w;
    fieldHeight = h;
    
    
    if(commands.size() > 1)
        for (int i = 1; i < commands.size(); i++)
        {
            string command = commands[i];
            vector <string> args;
            command_parser(args, command);
            cout << command << endl;
            if (command[0] == 'r')
            {
                // Empty Rectangular
                int x = str_to_int(args[1]), y = str_to_int(args[2]), width = str_to_int(args[3]), height = str_to_int(args[4]);
                char c = args[0][0];
                if (fitsField(fieldWidth, fieldHeight, x, y, width, height, c))
                    empty_rectangular(field, c, x, y, width, height);
                else
                {
                    SetColor(12, 0);
                    cout << "Error: Not enough space" << endl;
                    SetColor(7, 0);
                    return 0;
                }
            }
            else if (command[0] == 'R')
            {
                // Fileld Rectangular
                int x = str_to_int(args[1]), y = str_to_int(args[2]), width = str_to_int(args[3]), height = str_to_int(args[4]);
                char c = args[0][0];
                if (fitsField(fieldWidth, fieldHeight, x, y, width, height, c))
                    filled_rectangular(field, c, x, y, width, height);
                else
                {
                    SetColor(12, 0);
                    cout << "Error: Not enough space" << endl;
                    SetColor(7, 0);
                    return 0;
                }
            }
            else if (command[0] == 'c')
            {
                // Empty Circle
                int x = str_to_int(args[1]), y = str_to_int(args[2]), radius = str_to_int(args[3]);
                char c = args[0][0];
                if (fitsField(fieldWidth, fieldHeight, x, y, radius)) 
                    empty_circle(field, x, y, radius, c);
                else
                {
                    SetColor(12, 0);
                    cout << "Error: Not enough space" << endl;
                    SetColor(7, 0);
                    return 0;
                }
            }
            else if (command[0] == 'C')
            {
                // Filled Circle
                int x = str_to_int(args[1]), y = str_to_int(args[2]), radius = str_to_int(args[3]);
                char c = args[0][0];
                if (fitsField(fieldWidth, fieldHeight, x, y, radius))
                    filled_circle(field, x, y, radius, c);
                else
                {
                    SetColor(12, 0);
                    cout << "Error: Not enough space" << endl;
                    SetColor(7, 0);
                    return 0;
                }
            }
            else if (command[0] == 'L')
            {
                // Line
                int x = str_to_int(args[1]), y = str_to_int(args[2]), x1 = str_to_int(args[3]), y1 = str_to_int(args[4]);
                char c = args[0][0];
                if (fitsField(fieldWidth, fieldHeight, x, y, x1, y1))
                    line(field, x, y, y1, x1, c);
                else
                {
                    SetColor(12, 0);
                    cout << "Error: Not enough space" << endl;
                    SetColor(7, 0);
                    return 0;
                }  
            }
        }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
}
