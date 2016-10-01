#include <stdio.h>


int main () {
int c;

//If there is more than 1 blank between input words then change it to 1 space.
while ((c = getchar()) != EOF) {
    if (c == ' ') {

        while ((c = getchar()) == ' ');
        putchar(' ');

        if (c == EOF){
          break;
        }
    }
    putchar(c);
}

}