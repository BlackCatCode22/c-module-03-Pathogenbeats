#include <iostream>
#include <string>
#include <map>
#include <list>

using namespace std;

int main()
{
cout <<  "\nWelcome To My Hashmap Examples!\n" << endl;

    // create a new list or collection with 2 parts

    map<int, string> myMap;
    myMap.insert(pair<int, string>(1, "One"));
    myMap.insert(pair<int, string>(2, "Two"));
    myMap.insert(pair<int, string>(3, "Three"));
    myMap.insert(pair<int, string>(4, "Four"));
    myMap.insert(pair<int, string>(5, "Five"));

    // “Put the number 1 and the word ‘One’ together and store them in the list called myMap.”

    // Output the hashmap
    // This for loop was suggested by Clion code complete. (it changed to item)

    for (auto item = myMap.begin(); item != myMap.end(); item++) {
        cout << item->first << " " << item->second << endl;
        // Go through each item in the list one by one.
        // item = myMap.begin() sets up item to point to the very first item in the list.
        // item != myMap.end() checks if item has reached the end of the list.
        // (If not, it continues to the next step.)
        // item++ moves item to the next item in the list.

    }

    cout << endl;

    // this is for : each loop (a little easier to read?)
    for (auto pair : myMap) {
        cout << pair.first << " " << pair.second << endl;
        // Go through each item in the list one by one, and for each item, do something with it
    }

    return 0;
}
