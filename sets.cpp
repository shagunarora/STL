/*
 sets are containers that store only unique values 
 and allow easy lookups. In this we can only insert or 
 delete the elements without modifying it.

 here elements are stored in some specific order. we can access 
 and traverse the set just like in vector.
 
 some of the member function of sets are:
 1. begin()  : returns an iterators to the first elemenent of set
 2. clear()  : deletes all the element of set and set is empty
 3. count()  : returns 1 or 0 if element is in the set or not 
 4. empty()  : returns true if set is empty else false
 5. end()    : returns iterator pointing to the element preceding the last element.
 6. erase()  : delete a particular element or range of element
 7. find()   : searches for element if found then returns the iterator of that 
               element else returns the iterator that was achieved for end()
 8. insert() : insert a new element
 9. size()   : returns the size of set or number of elements in set

 */

#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;
    int a[] = {1, 8, 2, 6, 6, 9, 0};
    set<int>::iterator it;
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len; i++)
    {
        s.insert(a[i]);
    }

    for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}