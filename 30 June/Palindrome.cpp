#include <iostream>
using namespace std;

int main() {
    int num = 121, reversedNum = 0, remainder, originalNum;
    originalNum = num;
    
    while(num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }
    return 0;
}