/*
Problem: Passing Array to Function

Concept:
- Arrays decay to pointers when passed to functions
- Changes inside function reflect in original array

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printArray(const int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void incrementArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] += 1;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Original Array: ";
    printArray(arr, 5);

    incrementArray(arr, 5);

    cout << "After Increment: ";
    printArray(arr, 5);

    return 0;
}