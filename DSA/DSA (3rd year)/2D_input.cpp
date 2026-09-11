#include <iostream>
#include <vector>
using namespace std;
int main () {
    int i,n, m;
    vector<vector<int>> vec(n, vector<int>(m));
    for (auto &row:vec) {
        for (auto &k:row) {
            cin >> k;
        }
    }
}