#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
        int minprice = a[0];
        int maxprofit = 0;
        for(int i=0; i<n; i++){
            maxprofit =max(maxprofit, a[i] - minprice);
            minprice = min(minprice, a[i]);
}
    cout << maxprofit;
    return 0;
}