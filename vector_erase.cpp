#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> vec;
    int size;
    cin >> size;
    for(int i=0;i<size;i++) {
        int element;
        cin >> element;
        vec.push_back(element);
    }
    int rem;
    cin >> rem;
   
    vec.erase(vec.begin()+rem-1);
    int upper,lower;
    cin >> upper >> lower;
    
    vec.erase((vec.begin()+upper-1),(vec.begin()+lower-1));
    cout << vec.size() << endl;
    for(auto c:vec) {
        cout << c;
        cout << " ";
    }

    return 0;
}
