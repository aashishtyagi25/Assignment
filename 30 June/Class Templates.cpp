#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Container {
private:
    T data;
public:
    Container(T d) : data(d) {}
    T getData() { return data; }
};

int main() {
    Container<int> intObj(42);
    Container<string> strObj("Hello Generic Programming!");
    
    cout << intObj.getData() << "\n" << strObj.getData() << endl;
    return 0;
}