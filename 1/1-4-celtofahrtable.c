#include <stdio.h>
#define LOWER 0
#define UPPER 500
#define STEP 10
/*Outputs a long table of Celsius to Fahrenheit conversions plus heading.*/
int main() {
  float cel, fahr;
  /* The heading */
  printf("CEL TO FAHR TABLE:\n");
  for (cel = LOWER; cel < UPPER; cel += STEP) {
    fahr = (9.0*cel/5.0) + 32;
    printf("%-9.1f %8.2f\n", cel, fahr);
  }
}
