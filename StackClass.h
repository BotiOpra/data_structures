#ifndef STACKCLASS
#define STACKCLASS

#include "std_lib_facilities.h"

#define MAX 10

class Stack
{
private:
    int items[MAX];
    int top;
public:
    Stack() : top(-1) {}
    void showStack();
    void setItems(int items[], int size);

    void setTop(int top);
    int getTop();

    //utilities
    bool isEmpty();
    bool isFull();

    void push(int itemToBePushed);
    void pop();

    int peek();
};

#endif