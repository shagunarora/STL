/*
  
   queue is a container which follows fifo order.here elements rae inserted at 
   one end(rear) and rremoved from the other(front).

   some member functions of queues are:
   1. push() : inserts element in rear(end).
   2. pop()  : pops element from front
   3. front(): accesses the front element of queue
   4. empty(): returns true if queue is empty else false
   5. size() : returns the size of the queue  
*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;
    for (int i = 0; i < 5; i++)
        q.push(i % 2);
    cout << "size of queue " << q.size();
    cout << endl;
    cout << "front element of queue " << q.front() << "\n";
    for (int i = 0; i < 5; i++)
        q.pop();
    if (q.empty())
        cout << "empty queue "
             << "\n";
}