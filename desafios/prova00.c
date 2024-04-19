#include <stdio.h>
#define N 9

int main() {
  int rows, cols, i, j;

  rows = 2;
  cols = 3;

  while (cols <= N) {
    for (i = 1; i <= rows; i++) {
      for (j = 1; j <= cols; j++) {
        if (i + j == cols + 1 || i == j)
          printf("*");
        else
          printf(" ");
      }
      printf("\n");
    }

    printf("\n");
    if (rows <= cols / 2)
      rows++;
    cols++;
  }

  return 0;
}
