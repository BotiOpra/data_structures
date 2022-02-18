
#include "std_lib_facilities.h"
#include "StackClass.h"

//stack implementation using structs

void reverseNums(Stack& st)
{
    while(!st.isEmpty()){
        cout << st.peek();
        st.pop();
    }
}

using namespace std;

int main()
{
    Stack st;
    int items[MAX] = {1, 2, 5, 7, 9};
    st.setTop(5);
    st.setItems(items, st.getTop());
    reverseNums(st);
    

}