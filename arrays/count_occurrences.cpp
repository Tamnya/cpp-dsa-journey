/*
Concept: Find most frequent element (Brute Force)
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0 || n > 100)
    {
        cout << "Invalid input";
        return 0;
    }

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxCount = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    cout << "Most frequent element: " << maxElement;

    return 0;
}
