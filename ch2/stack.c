#include <stddef.h>
#include "assert.h"
#include "mem.h"
#include "stack.h"


struct Stack_T {
    int count;
    struct elem {
        void *x;
        struct elem *link;
    } *head;
};


Stack_T Stack_new(void) {
    Stack_T stk;
    NEW(stk);
    stk->count = 0;
    stk->head = NULL;
    return stk;
}

int Stack_empty(Stack_T stk) {
    assert(stk);
    return stk->count == 0;
}


void Stack_push(Stack_T stk, void *x) {
    struct elem *t;
    assert(stk);
    NEW(t);
    t->x = x;
    t->link = stk->head;
    stk->head = t;
    stk->count ++;
}

void *Stack_pop(Stack_T stk) {
    void *x;
    struct elem *t;

    assert(stk);
    if (stk->count <= 0) {
        return NULL;
    }

    t = stk->head;
    stk->head = t->link;
    stk->count --;

    x = t->x;

    FREE(t);
    return x;
}


void Stack_free(Stack_T *stk) {
    struct elem *t, *u;
    assert(stk && *stk);
    for(t = (*stk)->head; t; t = u) {
        u = t->link;
        FREE(t);
    }
    FREE(*stk);
}
