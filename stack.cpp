
#include "std_lib_facilities.h"

#define MAX 10

//stack implementation using structs

void copyArray(int a[], int b[], int size)
{
    for(int i = 0; i<size; i++)
        a[i] = b[i];
}

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

using namespace std;

int main()
{
    Stack st;
    int items[MAX] = {1, 2, 5, 7, 9};
    st.setTop(5);
    st.setItems(items, st.getTop());
    st.showStack();
    cout << st.peek() << endl;
}