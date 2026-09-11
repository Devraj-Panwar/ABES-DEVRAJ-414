#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[50], n, element, first, last, middle;
    cout << "Enter number of elements in array: ";
    cin >> n;
    cout << "Enter " << n << " integers in ascending order:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> element;
    
    first = 0;
    last = n - 1;
    bool found = false;

    while(first <= last) {
        middle = (first + last) / 2;
        if(arr[middle] == element) {
            found = true;
            cout << "Element found at index " << middle << endl;
            break;
        } else if(arr[middle] < element) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }
    }

    if(!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
    
    
    
    