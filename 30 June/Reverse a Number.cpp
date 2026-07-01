#include <iostream>
using namespace std;

int main() {
    int num = 12345, reversedNum = 0, remainder;
    
    while(num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    cout << "Reversed Number = " << reversedNum << endl;
    return 0;
}