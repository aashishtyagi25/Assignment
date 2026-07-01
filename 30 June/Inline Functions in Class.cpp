#include <iostream>
using namespace std;

class Operation {
public:
    inline int square(int x) {
        return x * x;
    }
};

int main() {
    Operation op;
    cout << "Square of 5: " << op.square(5) << endl;
    return 0;
}