#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {5, 2, 9, 1};
    
    vec.push_back(7);                  
    sort(vec.begin(), vec.end()); 
    vec.pop_back();                    
    
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}