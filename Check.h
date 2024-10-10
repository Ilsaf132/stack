#ifndef CHECK_
#define CHECK_

#include "Error.h"

Error_t StackError(struct Stack_t* stk);
void StackDump(struct Stack_t* stk);
void StackAssertFunc(struct Stack_t* stk);

#define DEBUG 

#ifdef DEBUG
    #define ON_DEBUG(...) __VA_ARGS__
    #define StackAssert(stk); StackAssertFunc(stk);
    #define STACK_CTOR(stk) StackCtor(stk, #stk, __FILE__, __LINE__);
#else 
    #define ON_DEBUG(...) 
    #define StackAssert(stk); 
    #define STACK_CTOR(stk) StackCtor(stk);
#endif

unsigned long Hash(char* data, size_t size);

struct HashStruct {
    unsigned long hash_stack;
    unsigned long hash_data;
};

#endif