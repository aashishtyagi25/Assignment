#include <iostream>
using namespace std;

int main() {
    int n = 29;
    bool isPrime = true;
    
    if (n <= 1) isPrime = false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    cout << n << (isPrime ? " is a prime number." : " is not a prime number.") << endl;
    return 0;
}