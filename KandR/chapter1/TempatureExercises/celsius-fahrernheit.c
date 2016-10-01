#include <stdio.h>
/* print Celsius Fahrenheit table */
int main() {
  float fahr, celsius;
  int lower, upper, step;
  lower = 0;
  upper = 200;
  step = 20;
  /* lower limit of temperature table */
  /* upper limit */
  /* step size */
  celsius = lower;
  printf("Celsius Fahr\n");
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%7.1f %4.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}