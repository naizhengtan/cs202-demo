#include <stdio.h>

int main () {
    char name[] = "yj682";
    printf("%s", name);
    int i;
    for (i = 0; i < 13-sizeof(name); i++) {
        putchar(0);
    }
    putchar(202);
    putchar(0);
    putchar(0);
    putchar(0);
    char hack[] = "cs202 rocks!";
    printf("%s", hack);
}
