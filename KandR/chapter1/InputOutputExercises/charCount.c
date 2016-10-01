  #include <stdio.h>

/* count characters in input
 * Counts up all the characters previously entered
 */
int main() {
  double nc;

  for (nc=0; getchar() != EOF; ++nc);
  printf("%.0f\n", nc);
}