#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < N; i++) {
        if (a[i] < a[minIndex]) {
            minIndex = i;
        }

        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }

    if (minIndex > maxIndex) {
        swap(minIndex, maxIndex);
    }

    vector<int> result;

    for (int i = minIndex; i < maxIndex; i++) {
        result.push_back(a[i]);
    }

    for (int i = 0; i < minIndex; i++) {
        result.push_back(a[i]);
    }

    for (int i = maxIndex; i < N; i++) {
        result.push_back(a[i]);
    }
    
    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }

    return 0;
}