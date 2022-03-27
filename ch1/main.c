#include <stdio.h>

#include "strcpy.c"

int main(int argc, char **argv) {
    char *a = "Hello,world";
    char b[20] = {0};
    strcpy(b, a);
    printf("b = %s\n", b);
    return 0;
}