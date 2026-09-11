#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i=0; i<N ;i++) cin >> vec[i];
    int freq= count(vec.begin(),vec.end(),1);
    vec.erase(vec.begin()+freq);
    for (int i=0; i<vec.size() ;i++) 
    cout << vec[i] << " ";
        

}
