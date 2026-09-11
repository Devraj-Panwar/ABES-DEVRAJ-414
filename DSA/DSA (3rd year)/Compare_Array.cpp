#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    if (!(cin >> N >> M) || N < 0 || M < 0) {
        cerr << "N and M must be non-negative integers.\n";
        return 1;
    }

    vector<int> A, B;
    try {
        A.resize(N);
        B.resize(M);
    } catch (const bad_alloc&) {
        cerr << "The requested arrays are too large.\n";
        return 1;
    }

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < M; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (A[j] > B[i]) {
                count++;
            }
        }
        cout << count << " ";
    }

    return 0;
}