#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n;i++) {
        int sum=0;
        for (int j=0;j<m;j++) {
            sum += a[i][j];
        }
        int maxi = *max_element(a[i].begin(),a[i].end());
        int mini = *min_element(a[i].begin(),a[i].end());
        cout << sum << " " << maxi << " " << mini << endl;
    }
}