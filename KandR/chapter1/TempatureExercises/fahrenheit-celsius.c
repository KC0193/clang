#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
int main() {
  float fahr, celsius;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  /* lower limit of temperature table */
  /* upper limit */
  /* step size */
  fahr = lower;
  printf("Fahr Celsius\n");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%4.0f %7.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}