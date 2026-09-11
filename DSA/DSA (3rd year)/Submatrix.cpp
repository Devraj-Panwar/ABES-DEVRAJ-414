#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    if(n<6||m<6){
        cout<<"Matrix size should be at least 6x6"<<endl;
        return 1;
    }
    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    

}