/*
Concept: Find minimum element
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
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

    int minElement = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }

    cout << "Minimum element: " << minElement;

    return 0;
}
