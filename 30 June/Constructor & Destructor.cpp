#include <iostream>
using namespace std;

class Box {
private:
    int width;
public:
    Box() { width = 0; cout << "Default Constructor called." << endl; }
    Box(int w) { width = w; cout << "Parameterized Constructor called." << endl; }
    Box(const Box &b) { width = b.width; cout << "Copy Constructor called." << endl; }
    ~Box() { cout << "Destructor called." << endl; }
};

int main() {
    Box b1;
    Box b2(10);
    Box b3 = b2;
    return 0;
}