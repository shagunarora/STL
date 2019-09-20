/*

stacks is container which follows LIFO order. elements are inserted and
deleted from one end only.

Some member functions of stack are:
1. push() : pushes the element in stack
2. pop()  : pop or remove the top element from stack
3. top()  : displays the top element of the stack
4. empty(): checks if the stack is empty or not. returns true
            if empty else false
5. size() : returns the size or number of elements in stack

*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{

    stack<int> s;
    for (int i = 0; i < 5; i++)
        s.push(i);
    cout << "size of stack"
         << " " << s.size() << "\n";
    cout << "top element " << s.top() << "\n";
    for (int i = 0; i < 5; i++)
        s.pop();

    if (s.empty())
        cout << "stack is empty"
             << "\n";
    else
    {
        cout << "stack is not empty"
             << "\n";
    }

    return 0;
}