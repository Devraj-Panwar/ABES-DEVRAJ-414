#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec1 = {10, 20, 20, 50};

    int freq = count(vec1.begin(), vec1.end(), 20);
    cout << "Frequency: " << freq << endl;

    vec1.erase(vec1.begin() + 2);

    cout << "After erase: ";
    for (int x : vec1) {
        cout << x << " ";
    }

    return 0;
}