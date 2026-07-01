#include <iostream>
using namespace std;

int main() {
    int numerator = 10;
    int denominator = 0;
    
    try {
        if (denominator == 0) {
            throw "Division by zero anomaly caught!";
        }
        cout << (numerator / denominator) << endl;
    }
    catch (const char* msg) {
        cerr << "Runtime Error: " << msg << endl;
    }
    return 0;
}