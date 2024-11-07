#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Global Constructor called!" << endl;
    }
    ~MyClass() {
        cout << "Global Destructor called!" << endl;
    }
};

static MyClass globalObj;  // Static object at global scope

int main() {
    cout << "Inside main()" << endl;
    return 0;
}
