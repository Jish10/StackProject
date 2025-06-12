#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

nodeT *newNode(void);
stackT *newStack(void);
void push(stackT *stack, valueT processo);
valueT pop(stackT *stack);
void EmptyStack(stackT *stack);
void FreeStack(stackT *stack);
int isEmpty(stackT *stack);

int main(void) {

    return 0;
}

nodeT *newNode(void) {
    nodeT *node = (nodeT *)malloc(sizeof(nodeT));
    if (node == NULL) {
        printf("Erro: memória insuficiente para criar novo nó.\n");
        return NULL;
    }
    node->next = NULL;
    return node;
}

stackT *newStack(void) {
    stackT *stack = (stackT *)malloc(sizeof(stackT));
    if (stack == NULL) {
        printf("Erro: não foi possível alocar memória para a Stack.\n");
        return NULL;
    }
    stack->head = NULL;
    return stack;
}

void push(stackT *stack, valueT processo) {
    nodeT *node = newNode();
    if (node == NULL) return;

    node->value = processo;
    node->next = stack->head;
    stack->head = node;
}

valueT pop(stackT *stack) {
    valueT vazio = {0, ""};

    if (isEmpty(stack)) {
        printf("Erro: Stack vazia, impossível fazer pop.\n");
        return vazio;
    }

    nodeT *node = stack->head;
    valueT val = node->value;
    stack->head = node->next;
    free(node);

    return val;
}

void EmptyStack(stackT *stack) {
    nodeT *ptr = stack->head;
    while (ptr != NULL) {
        nodeT *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
    stack->head = NULL;
}

void FreeStack(stackT *stack) {
    if (!isEmpty(stack)) {
        printf("Erro: Stack ainda contém processos. Esvazie antes de liberar.\n");
        return;
    }
    free(stack);
}

int isEmpty(stackT *stack) {
    return (stack->head == NULL);
}
