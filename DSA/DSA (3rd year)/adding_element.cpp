#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> vec1 = {1, 2, 3 ,5};
    vector<int> vec2 = {6, 7, 8, 9};
    int index = 3;
    int val = 4;
    vec1.insert(vec1.begin() + index, val);
    for (int i = 0; i < vec1.size() ; i++){
        cout << vec1[i] << " "; 
    }
    vec1.insert(vec1.end(), vec2.begin(), vec2.end());
    for (int i = 0; i < vec1.size() ; i++){
        cout << vec1[i] << " "; 
    }

    return 0;
}