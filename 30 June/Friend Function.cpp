#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
public:
    Distance() : meters(0) {}
    friend int addFive(Distance); 
};

int addFive(Distance d) {
    d.meters += 5; 
    return d.meters;
}

int main() {
    Distance dist;
    cout << "Distance after adding 5: " << addFive(dist) << endl;
    return 0;
}