#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks;
    int n, value;

    // Input number of marks
    cout << "Enter number of students: ";
    cin >> n;

    // Add marks using push_back()
    for(int i = 0; i < n; i++)
    {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> value;
        marks.push_back(value);
    }

    // Display marks
    cout << "\nMarks before removing last element:\n";
    for(int m : marks)
    {
        cout << m << " ";
    }

    // Remove last mark
    marks.pop_back();

    // Display marks again
    cout << "\n\nMarks after removing last element:\n";
    for(int m : marks)
    {
        cout << m << " ";
    }

    return 0;
}