#include <stdio.h>
#define LOWER 0
#define UPPER 500
#define STEP 10
/* Outputs long table of Fahrenheit to Celsius conversions plus heading. */
int main() {
  float fahr, cel;
  /* The heading */
  printf("FAHR TO CEL TABLE:\n");
  for (fahr = LOWER; fahr < UPPER; fahr += STEP) {
    cel = 5.0/9.0 * (fahr - 32);
    printf("%-9.1f %8.2f\n", fahr, cel);
  }
}
