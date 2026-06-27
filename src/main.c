#include "../include/play_video.h"
#include "../include/setup.h"
#include <bits/getopt_core.h>
#include <unistd.h>

int main(int argc, char **argv) {

  int opt;
  while ((opt = getopt(argc, argv, "?h")) != -1) {
    switch (opt) {
    case '?':
      playVideo("./easteregg/virus.mp4");
      break;
    case 'h':
      printf("i dont know either man\n");
      break;
    }
  }

  printMarquee();
  introText();

  return 0;
}
