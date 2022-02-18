#include "StackClass.h"

void copyArray(int a[], int b[], int size)
{
    for(int i = 0; i<size; i++)
        a[i] = b[i];
}

int Stack::peek()
{
    return this->items[(this->getTop())-1];
}

void Stack::setItems(int items[], int size)
{
    copyArray(this->items, items, size);
}

bool Stack::isEmpty()
{
    return (this->top == -1) ? true : false;
}

bool Stack::isFull()
{
    return (this->top == MAX) ? true : false;
}

void Stack::push(int itemToBePushed)
{
    if(!isFull()){
    this->items[this->top] = itemToBePushed;
    this->top+=1;
    }
    else{
        error("Current stack is already full\n");
        return;
    }
}

void Stack::pop()
{
    if(!isEmpty()){
    int* ptr = &this->items[this->top];
    ptr = nullptr;
    this->top--;
    }
    else{
        error("Current stack is already empty\n");
        return;
    }
}

void Stack::showStack()
{
    for(int i = 0; i < this->top; i++){
        cout << "stack[" << i << "]=" << this->items[i] << endl;
    }
    cout << "----------\n";
}

void Stack::setTop(int top)
{
    this->top = top;
}

int Stack::getTop()
{
    return this->top;
}