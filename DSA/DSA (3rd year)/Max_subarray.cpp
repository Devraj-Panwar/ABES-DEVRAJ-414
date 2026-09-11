#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, max=0, sum;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        sum = 0;
        for (int j=i; j<n ; j++){
            sum += a[j];
        }
        if (sum > max) {
            max = sum;
        }
    }
    cout << max << endl;

}