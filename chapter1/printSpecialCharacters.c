#include <stdio.h>

//Show backspaces, tabs and backslashes in output
int main () {
  int c;

  while ((c = getchar()) != EOF) {
      switch (c) {
        case '\t':
          printf("\\t");
          break;
        case '\b':
          printf("\\b");
          break;
        case '\\':
          printf("\\\\");
          break;
        default:
          putchar(c);
      }
  }
}