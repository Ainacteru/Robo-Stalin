#include <stdlib.h>
#include <stdio.h>

int main()
{
    const char *virusfilepath = "virus.mp4";
    #ifdef _WIN32
        system("start \"\" \"%s\"", virusfilepath);
    #elif __APPLE__
        system("open \"%s\"", virusfilepath);
    #elif __linux__
        system("xdg-open \"%s\"", virusfilepath);
    #endif

    printf("lmao\n");
    return 0;
}