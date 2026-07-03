#include "play_video.h"
#include "setup.h"
#include <bits/getopt_core.h>
#include <unistd.h>

int main(int argc, char **argv) {

    int opt;
    const char* options = "?h";
    while ((opt = getopt(argc, argv, options)) != -1) {
        switch (opt) {
        case '?':
            playVideo("./easteregg/virus.mp4");
            return 0;
        case 'h':
            printf("i dont know either man\n");
            break;
        }
    }

    printMarquee();
    introText();

    return 0;
}
