/* Assume we have to swap 2 variables of data type float 
 and 2 of data type int so instead of making two functions we will
use templates
*/

#include <iostream>
using namespace std;

template <class T>
void swap_num(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;

    cout << "swapped numbers " << a << " and " << b << "\n";
}
int main()
{
    int a = 3, b = 4;
    float c = 3.0, d = 4.3;

    swap_num(a, b);
    swap_num(c, d);
    return 0;
}