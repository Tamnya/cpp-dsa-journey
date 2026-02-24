/*
Problem: Remove Duplicates from Sorted Array

Concept:
- Two pointer technique
- In-place modification

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n == 0)
        return 0;

    int slow = 0;

    for (int fast = 1; fast < n; fast++)
    {
        if (arr[fast] != arr[slow])
        {
            slow++;
            arr[slow] = arr[fast];
        }
    }

    return slow + 1;
}

int main()
{
    int n;
    cin >> n;

    int arr[100000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int newLength = removeDuplicates(arr, n);

    for (int i = 0; i < newLength; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}