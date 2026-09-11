// WAP to input 5 numbers into a vector print all the elements then find the maximum value  
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    int value;

    // Input 5 numbers
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> value;
        numbers.push_back(value);
    }

    // Print all elements
    cout << "\nAll elements:\n";
    for(int n : numbers)
    {
        cout << n << " ";
    }

    // Find maximum value
    int max = numbers[0];
    for(int n : numbers)
    {
        if(n > max)
            max = n;
    }

    cout << "\nMaximum value: " << max;

    return 0;
}