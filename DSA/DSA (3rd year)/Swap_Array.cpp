#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < N; i += 2 * K) {
        for (int j = 0; j < K; j++) {
            swap(a[i + j], a[i + K + j]);
        }
    }

    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }

    return 0;
}