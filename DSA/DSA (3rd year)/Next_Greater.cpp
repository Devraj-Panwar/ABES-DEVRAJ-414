#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i=0;i<N;i++) {
        cin>>A[i];
    }
    for (int i=0;i<N;i++) {
        int next=0;
        for (int j=i+1;j<N;j++) {
            if (A[j]>A[i]) {
                next=A[j];
                break;
            }
        }
        cout << next << " ";
    }
    return 0;
}-