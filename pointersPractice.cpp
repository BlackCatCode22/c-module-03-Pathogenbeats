// Andrew Powell 9/11/2024 (from video in class)
// pointersPractice.cpp

#include <iostream>
using namespace std;

int main() {

    // Pointers hold a memory address
    int n = 5;
    cout << &n << endl;

    // Give the address a value for future reference
    int* ptr = &n;
    cout << *ptr << endl;

    *ptr = 10;
    cout << *ptr << endl;

    //changes value of n.
    cout << n << endl;

    //Creating pointer and giving it a value?
    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v = " << v << endl;

    // Used to point at data structures

    return 0;
}
