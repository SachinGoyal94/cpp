#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called!" << endl;
    }
    ~MyClass() {
        cout << "Destructor called!" << endl;
    }
    void display() {
        cout << "Displaying static object!" << endl;
    }
};

void createStaticObject() {
    static MyClass obj;  // Static object
    obj.display();       // Function will reuse this object in subsequent calls
}

int main() {
    cout << "First call:" << endl;
    createStaticObject();  // Constructor will be called once
    cout << "Second call:" << endl;
    createStaticObject();  // Object is not re-created; same static object is used
    return 0;
}
