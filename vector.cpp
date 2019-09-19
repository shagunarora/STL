#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator it;
    cout << v.size() << endl;
    v.push_back(5);

    while (v.back() > 0)
        v.push_back(v.back() - 1);
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << "\n";
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;

    while (!v.empty())
    {
        cout << v.back() << " ";
        v.pop_back();
    }
    cout << endl;
    return 0;
}