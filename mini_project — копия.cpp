#include "funcs.h"


int main(int argc, char *argv[])
{
    int fieldWidth, fieldHeight;
    bool needSave = false;
    string path;
    vector <string> commands, bgargs;
    if (onStart(argc, argv, path, commands, bgargs, needSave) == -1)
        return -1;
    int pathSize = path.size();
    if (pathSizeHandler(pathSize, path) == -1) return -1;
    else fileRead(path, commands);
    if (commands.size() == 0) {   printError("Error: No commands");    return 0;    }
    string bg = commands[0];
    command_parser(bgargs, bg);
    if (!checkCommandForCorrect(bgargs))
        return -1;
    int w = str_to_int(bgargs[0]), h = str_to_int(bgargs[1]);
    char bgc = bgargs[2][0];
    if ((w <= 0 || w > 300) || (h <= 0 || h > 300)) {printError("Error: Incorrect background size");return -1;}
    vector<vector<char>> field(h, vector<char>(w));
    vector<vector<int>> colorsfield(h, vector<int>(w));
    background(field, w, h, bgc, colorsfield);
    fieldWidth = w; fieldHeight = h;
    if (commands.size() > 1) { for (int i = 1; i < commands.size(); i++) { string command = commands[i];vector <string> args; command_parser(args, command);
            if (command[0] == 'r')
                if (make_r(args, command, bgc, fieldWidth, fieldHeight, field, colorsfield) == -1) return -1;
            else if (command[0] == 'R')
                if (make_R(args, command, bgc, fieldWidth, fieldHeight, field, colorsfield) == -1) return -1;
            else if (command[0] == 'c')
                if (make_c(args, command, bgc, fieldWidth, fieldHeight, field, colorsfield) == -1) return -1;
            else if (command[0] == 'C')
                if (make_C(args, command, bgc, fieldWidth, fieldHeight, field, colorsfield) == -1) return -1;
            else if (command[0] == 'L')
            {   if (make_L(args, command, bgc, fieldWidth, fieldHeight, field, colorsfield) == -1)
                return -1; }
            else{   printError("Error: Incorrect command");return -1; }}}
    output(h, w, field, colorsfield);
    if (needSave) savePicture(field, path);
}
