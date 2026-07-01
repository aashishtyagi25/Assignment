#include <iostream>
using namespace std;

int main() {
    int* ptr = new int[5]; 
    
    for (int i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10;
    }
    
    cout << "Dynamic array items: ";
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    
    delete[] ptr; 
    return 0;
}