#include <stdio.h>
int main() {
  printf("This counts whitespace until Ctrl-D is pressed after Enter (the last Enter doesn't count).\n");
  char g = getchar() != EOF;
  int count = 0;
  while (g != EOF) {
    if (g == ' ' || g == '\t' || g == '\n') {
      count++;
    }
    g = getchar();
  }
  if (count == 0)
    count = 1;
  printf("\nThere are %d whitespace characters in what you entered.\n", count-1);
  return 0;
}
