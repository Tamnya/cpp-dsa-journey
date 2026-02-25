/*
Problem: Binary Search

Concept:
- Divide and Conquer
- Works only on sorted arrays
- Repeatedly divides the search space into halves

Time Complexity: O(log n)

Space Complexity: O(1)
*/
#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {12, 15, 18, 23, 28, 32, 39, 45};
    int target = 18;
    int low = 0;
    int high = 7;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            cout << "Element found at index: " << mid << endl;
            return 0;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "Element not found" << endl;
    return -1;
}