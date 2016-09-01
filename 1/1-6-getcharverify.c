#include <stdio.h>
#include <stdlib.h>
int main() {
  int f = getchar() != EOF;
  while (f) {
    printf("%d\n", f);
    f = getchar() != EOF;
  }
}
