
#ifndef STACK_H
#define STACK_H
typedef int valueT;

typedef struct nodeT {
    valueT value;
    struct nodeT *next;
} nodeT;

typedef struct {
    nodeT *head;
} stackT;

#endif //STACK_H
