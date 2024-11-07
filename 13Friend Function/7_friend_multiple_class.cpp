#include <iostream>
using namespace std;

class ClassB;  // Forward declaration of ClassB to use it in ClassA's friend declaration

class ClassA {
private:
    int valueA;
public:
    ClassA(int a) : valueA(a) {}
    
    // Declare the friend function, which can access private members of both ClassA and ClassB
    friend void displayValues(const ClassA& objA, const ClassB& objB);
};

class ClassB {
private:
    int valueB;
public:
    ClassB(int b) : valueB(b) {}
    
    // Declare the same friend function here to access ClassB's private members
    friend void displayValues(const ClassA& objA, const ClassB& objB);
};

// Definition of the friend function that can access private members of both ClassA and ClassB
void displayValues(const ClassA& objA, const ClassB& objB) {
    cout << "Value in ClassA: " << objA.valueA << endl;
    cout << "Value in ClassB: " << objB.valueB << endl;
}

int main() {
    ClassA objA(10);  // Create an object of ClassA with value 10
    ClassB objB(20);  // Create an object of ClassB with value 20

    displayValues(objA, objB);  // Call the friend function to display both values

    return 0;
}
