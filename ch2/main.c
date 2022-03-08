#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"

void test_stack() {
    Stack_T stk;
    char *str = malloc(10);
    strcpy(str, "123456");
    char *ret;
    stk = Stack_new();
   
    Stack_push(stk, str);
    printf("push %s\n", str);


    str = malloc(10);
    strcpy(str, "abc");

    Stack_push(stk, str);
    printf("push %s\n", str);
    
    while(!Stack_empty(stk)) {
        ret = Stack_pop(stk);
        printf("pop %s\n",ret);
        free(ret);
    }

    Stack_free(&stk);
}


int main(void) {
    
    test_stack();
    return 0;
}