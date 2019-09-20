/*
 maps are containers which store elements in key value pair.
 data in map are in sorted order depending upon the key value.
 
 map <char,int> mp;
 
 some of the member functions
 1. at()     : returns the mapped value identified with key
 2. count()  : searches a map for given key value and return number of matches
               since there is only unique key to each element so it will return 1 if 
               forund else 0.
 3. clear()  : clears the map by removing all the elements of map so map size = 0
 4. begin()  : returns an iterator referencing to first element of map
 5. end()    : returns an iterator preceding to last element of map
 6. empty()  : checks whether map is empty or not. true:-- empty ; else false
 7. erase()  : removes a single element or range of element in map
 8. find()   : searches for the element in map and returns the iterator to it if not
               present then returns the iterator which we got at end().
 9. insert() : inserts a single element or range of element in map.

*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mp;
    map<char, int> mymap, mymap1;

    //insert values in map in combination of key value pairs

    mp.insert(pair<char, int>('a', 2));
    mp.insert(pair<char, int>('b', 3));
    mp.insert(pair<char, int>('c', 7));

    //insert elements in range

    mymap.insert(mp.begin(), mp.end());

    map<char, int>::iterator it;
    it = mp.find('b');
    cout << "key and element found are"
         << "\n";
    cout << it->first << " " << it->second << "\n";
    //alternative way to insert elements

    mymap['x'] = 23;
    mymap['y'] = 30;
    cout << mp.at('b') << "\n";

    mymap.swap(mymap1);

    for (it = mymap.begin(); it != mymap.end(); it++)
        cout << it->first << " " << it->second << "\n";
    cout << "********************************"
         << "\n";
    for (it = mymap1.begin(); it != mymap1.end(); it++)
        cout << it->first << " " << it->second << "\n";

    mymap1.erase('c');
    cout << "********************************"
         << "\n";
    for (it = mymap1.begin(); it != mymap1.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << "find if map is empty " << mymap1.empty() << endl;
    cout << "Number of elements with key = 'a' in map mp are : " << mp.count('a') << endl;
    return 0;
}
