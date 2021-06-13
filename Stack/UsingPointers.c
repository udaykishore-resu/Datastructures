#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct stack{
    int capacity;
    int top;
    int *items;
}stack;

stack* newStack(int cap){
    stack *st = (stack *) malloc(sizeof(stack));
    st->capacity = cap;
    st->top = -1;
    st->items = (int *) malloc(sizeof(int)*(st->capacity));
    return st;
}
bool isEmpty(stack *st){
    if(st->top==-1){
        return true;
    }
    return false;
}

bool isFull(stack *st){
    if(st->top == st->capacity){
        return true;
    }
    return false;
}

int  peek(stack *st){
    if (isEmpty(st))
    {
        printf("Stack is empty\n");
        exit(EXIT_FAILURE);
    }
    return st->items[st->top];
}

void push(stack *st, int val){
    if (isFull(st))
    {
        exit(EXIT_FAILURE);
    }
    st->items[++(st->top)]=val;
}

int pop(stack *st){
    if(isEmpty(st)){
        exit(EXIT_FAILURE);
    }
    int res = st->items[st->top];
    return res;
}

int main(){
    stack *st = newStack(5);
    push(st,10);
    push(st,20);
    push(st,30);
    printf("the top element of stack is:%d\n", peek(st));
    printf("the deleted element is: %d\n",pop(st));
    push(st,40);
    push(st,50);
    push(st,60);
   // push(st,70);
}