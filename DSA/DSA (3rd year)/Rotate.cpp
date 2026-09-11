#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string s, letters = "";
    cin >> n >> s;
    int k = 0;
    for (char c : s) {
        if (c >= '0' && c <= '9')
            k += (c - '0') * (c - '0');
        else
            letters += c;
    }
    int len = letters.length();
    int r = k % len;
    if (k % 2 == 0) {
        cout << letters.substr(len - r) + letters.substr(0, len - r);
    } else {
        cout << letters.substr(r) + letters.substr(0, r);
    }
    return 0;
}