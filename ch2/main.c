#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"

int main(void) {
    Stack_T stk;
    char *str = malloc(10);
    strcpy(str, "123456");
    char *ret;
    stk = Stack_new();
    Stack_push(stk, str);
    ret = Stack_pop(stk);
    Stack_free(&stk);

    printf("ret = %s\n",ret);

    return 0;
}