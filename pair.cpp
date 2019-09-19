/*
   pair is a container that can be used to bind two values that 
   are of different types. pair provides a way to store 2 hetrogeneous objects
   as single unit
   declaration of pair
   pair <int,char> p1;
   pair <int,char> p2(1,'a');
   
   p1 = make_pair(2,'b');
   //function to assign values pair

   p2.first :-- access the first element of pair
   p2.second :--- access the second element of pair
*/

#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, char> p1;
    pair<int, float> p(1, 1.4);

    p1 = make_pair(2, 'b');
    cout << p.first << " " << p.second << endl;
    cout << p1.first << " " << p1.second << endl;

    return 0;
}