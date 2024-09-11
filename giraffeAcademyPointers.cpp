// Andrew Powell 9/11/2024
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

    // Create pointer? Idk why you do this if the first way works?
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    // Reference memory?
    cout << "pAge = " << pAge << endl;

    // De-reference memory?
    cout << "*pAge = " << *pAge << endl;


    return 0;
}
