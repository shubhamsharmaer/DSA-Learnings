#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    // 3 variable to be used
    int *arr;
    int top;
    int size;

    // constructor
    Stack(int size)
    {
        cout << "stack is initialized successfully!" << endl;
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }
    // funtions

    // push fun
    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "stack is full!" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = data;
            cout << "pushed successfully!" << endl;
        }
        print();
    }

    // pop fun
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty, nothing to pop!" << endl;
            return;
        }
        else
        {
            --top;
            cout << "poped successfully!" << endl;
        }
        print();
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // top fun
    int gettop()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    // size fun
    int getsize()
    {
        return top + 1;
    }

    void print()
    {
        cout << "stack is: ";
        for (int i = 0; i < getsize(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st(8);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);

    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
}