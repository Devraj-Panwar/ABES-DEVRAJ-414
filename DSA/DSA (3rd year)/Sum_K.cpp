#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] + A[j] == K) {
                cout << A[i] << " " << A[j] << endl;
            }
        }
    }
    return 0;
}
    
    