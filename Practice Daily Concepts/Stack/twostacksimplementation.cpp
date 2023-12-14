// NOTES: IMPLEMENTATION OF 2 STACKS IN AN ARRAY
#include <iostream>
// #include<stack>

using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    // const
    Stack(int size)
    {
        // define array
        arr = new int[size];
        this->size = size;
        // initialize top1,top2;
        top1 = -1;
        top2 = size;
    }

    // writing 4 functions
    // push1()
    void push1(int data)
    {
        top1++;
        arr[top1] = data;
    }
    // push2()
    void push2(int data)
    {
        top2--;
        arr[top2] = data;
    }

    // pop1()
    void pop1()
    {
        arr[top1] = 0;
        top1--;
    }
    // pop2()
    void pop2()
    {
        arr[top2] = 0;
        top2++;
    }

    // top1()
    void Top1()
    {
        cout << arr[top1];
    }
    // top2()
    void Top2()
    {
        cout << arr[top2];
    }
};

void checkunderflow(Stack &st)
{

    if (st.top1 == -1)
    {
        cout << "stack 1 is empty" << endl;
    }
    else if (st.top2 == st.size)
    {
        cout << "stack 2 is empty" << endl;
    }
    else
    {
        cout << "---------------------" << endl;
        cout << "You can performe stack functions" << endl;
    }
}

void checkoverflow(Stack &st)
{
    if (st.top2 - st.top1 == 1)
    {
        cout << "stack 1 and stack 2 is full" << endl;
    }
    else
    {
        cout << "---------------------" << endl;
        cout << "Space Available" << endl;
        cout << "---------------------" << endl;
    }
}

void printstack(Stack &st)
{
    cout << "Stack is: ";
    for (int i = 0; i < st.size; i++)
    {
        cout << "[" << st.arr[i] << "]";
    }
}

int main()
{

    // make a stack
    Stack st(8);

    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(40);
    st.push1(50);

    st.push2(60);
    // st.push2(70);
    // st.push2(80);

    cout << endl;
    printstack(st);
    cout << endl;

    checkunderflow(st);
    checkoverflow(st);
}