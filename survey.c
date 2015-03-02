#include <stdlib.h>
#include "linked_list.h"
#include <stdio.h>
#include <string.h>

char readline(char *buf) {
    char c;
    while (1) {
        c = getchar();
        if (c == '\n' || c == EOF) break;
        *buf = c;
        buf++;
    }
    *buf = '\0';
    return c;
}
void use_linked_list() {
    list_t h;
    node_t n[3];
    list_init(&h);
    int i;
    for (i = 0; i < 3; i++) {
        n[i].id = i;
        strcpy(n[i].msg, "cs202 is too much work!");
        list_insert(&h, n+i);
        if (readline(n[i].name) == EOF) break;
    }
    print_list(&h);
}

int main () {
    use_linked_list();
    return 0;
}
