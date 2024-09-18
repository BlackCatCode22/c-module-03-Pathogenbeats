//Andrew Powell 09/18/2024
//linkedListPractice.cpp

#include <iostream>
using namespace std;

// A node carries a Value and a pointer (pNext) which references and points to
// another box to create a list of linking values

struct Node {
    int value;
    Node* pNext;

};

// Accessing the list and allowing the user to see this list
// the "!" symbol normally means not (example != means "is not")
//

void printlist(Node* n)
{
    cout << "\n";
    // While the instructions of the box I am looking at is not empty: move to the next link in the list

    while (n!=nullptr) {
        cout << n->value << endl;
        n = n->pNext;
    }
}
int main()
{
    // This code is creating three separate boxes (or Nodes) to hold data in a linked list.

    Node* head = new Node(); // This creates the first box and names it head. This box will be the starting point of our list.
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1; // This is setting the value of da capo
    head->pNext = second; // This is pointing to which box to go to next
    second->value = 2;
    second->pNext = third;
    third->value = 3;
    third->pNext = nullptr; // null because this is the end of the list

    printlist(head);

    return 0;
}
