#include "FuncStack.h"
#include "Constants.h"
#include <assert.h>

int main() {
    Stack_t stk = {};
    int err = STACK_CTOR(&stk)
    if (err) {
        assert(0);
    }
    
    stackElem_t x = 0;
    StackPush(&stk, 10);
    StackPush(&stk, 20);
    StackPush(&stk, 30);
    StackPush(&stk, 10);
    StackPush(&stk, 20);
    StackPush(&stk, 30);
    StackPush(&stk, 10);
    StackPush(&stk, 20);
    StackPush(&stk, 30);
    StackPush(&stk, 10);
    StackPush(&stk, 20);
    StackPush(&stk, 30);
    StackPop(&stk, &x);
    StackPop(&stk, &x);
    StackPop(&stk, &x);
    StackPop(&stk, &x);
    StackPop(&stk, &x);
    StackPop(&stk, &x);
    StackPop(&stk, &x);
    StackPop(&stk, &x);
    StackPop(&stk, &x);
    StackPop(&stk, &x);
    StackPop(&stk, &x);
    StackPop(&stk, &x);
    StackDtor(&stk);
    return 0;
}