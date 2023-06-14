#include <stdio.h>
#include <stack>
#include <bits/stdc++.h>

using namespace std;
/*
void PrintStack(stack<int> s)
{
    // If stack is empty then return
    if (s.empty())
        return;

    int x = s.top();

    // Pop the top element of the stack
    s.pop();

    // Recursively call the function PrintStack
    PrintStack(s);

    // Print the stack element starting
    // from the bottom
    cout << x << " ";

    // Push the same element onto the stack
    // to preserve the order
    s.push(x);
}
*/
//    use stack withod using standard template library
class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
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
};

int main()
{
    Stack s(5);
    s.push(52);
    s.push(50);
    s.push(48);
    s.push(30);

    cout << s.peek() << endl;

    s.pop();

    cout << s.peek() << endl;

    s.pop();

    cout << s.peek() << endl;

    s.pop();

    cout << s.peek() << endl;

    s.pop();

    cout << s.peek() << endl;
    //  STL standard template library s
    /*
    stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    s.pop();
    s.pop();

    PrintStack(s);

    cout << endl
         << "print the size of stack " << s.size() << endl;

    cout << "print the top element " << s.top() << endl;
    */

    return 0;
}