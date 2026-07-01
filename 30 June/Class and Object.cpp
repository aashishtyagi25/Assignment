#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int id;
    
    void display() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Alice";
    s1.id = 101;
    s1.display();
    return 0;
}