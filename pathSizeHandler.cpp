#include "funcs.h"

int pathSizeHandler(int pathSize, string path)
{
    if (pathSize < 12)
    {
        printError("Error: Operation file corrupted");
        return -1;
    }
    if (path[pathSize - 2] != 'i' || path[pathSize - 1] != 't')
    {
        printError("Error: Operation file has not correct extension");
        return -1;
    }
    else if (path[pathSize - 12] != 'o' || path[pathSize - 11] != 'p' || path[pathSize - 10] != 'e' || path[pathSize - 9] != 'r' || path[pathSize - 8] != 'a' || path[pathSize - 7] != 't' || path[pathSize - 6] != 'i' || path[pathSize - 5] != 'o' || path[pathSize - 4] != 'n')
    {
        printError("Error: name file");
        return -1;
    }
	return 1;
}