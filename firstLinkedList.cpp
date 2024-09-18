//Andrew Powell 09/16/2024
//firstLinkedList.cpp

#include <iostream>
using namespace std;

// Create a struct that will be

struct Node {
    string dataField;
    Node* pNext;
};

// Create a function that will print the linked list.
// The function will have one parameter that will be a pointer to a node

void printlist(Node* pNode)
{
    while (pNode != nullptr)
        {
        cout << "\n" << pNode->dataField;
        pNode = pNode->pNext;
    }
    cout << endl;
}

int main() {
    cout << "\n\n ***** This is my First Linked List Program! ***** " << endl;

    // Create a few pointers
    Node* pHead = new Node;
    Node* pSecond = new Node;
    Node* pThird = new Node;



    Node myNewNode;
    myNewNode.dataField = "Data used in my linklist";

    // Fill the data fields of the nodes.
    pHead->dataField = "z";
    pSecond->dataField = "b";
    pThird->dataField = "c";

    // Create the list by linking pointers
    pHead->pNext = pSecond;
    pSecond->pNext = pThird;
    pThird->pNext = nullptr;

    // Output the Linked List by Calling the print list function

    printlist(pHead);
    // Add a few nodes to my Linked List
    Node* pCurrent = new Node;
    Node* pNext = new Node;

    pCurrent->dataField = "d";
    pCurrent->pNext = pHead;

    // reposition head of the list
    pHead = pCurrent;

    cout << "\n Printing The New List\n";
    printlist(pHead);

    return 0;



}
