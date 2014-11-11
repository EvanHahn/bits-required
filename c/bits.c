#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
  printf("%d\n", 1 + (int) (log(strtod(argv[1], NULL)) / log(2)));
}
