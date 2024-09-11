// Andrew Powell 9/11/2024 (added meaning of pointers)
// giraffeAcademyPointers.cpp


#include <iostream>
using namespace std;

int main() {

    int age = 19;
    double gpa = 2.7;
    string name = "Mike";
    // Stores physically in the memory of computer
    // Each Value is a container


    // Access Memory Address

    cout << "Age = " << &age <<  endl;
    cout << "GPA = " << &gpa << endl;
    cout << "Name = " << &name <<  endl;
    // & prints out or points to memory address for the following variable

    // Create pointer? I don't know why you do this if the first way works?
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    // Reference memory?
    cout << "pAge = " << pAge << endl;

    // De-reference memory?
    cout << "*pAge = " << *pAge << endl;

 /*
  *Examples of what the syntax means:
  *
    int * pX = &x;
    "Integer pointer named pX is set to the address of x"

    int y = *pX;
     "Integer named y is set to the thing pointed to by pX"
    */

    return 0;
}

