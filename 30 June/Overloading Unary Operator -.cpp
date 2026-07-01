#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x1, int y1) : x(x1), y(y1) {}
    
    void operator - () {
        x = -x;
        y = -y;
    }
    
    void display() { cout << "X: " << x << ", Y: " << y << endl; }
};

int main() {
    Point p(5, -10);
    -p; 
    p.display();
    return 0;
}