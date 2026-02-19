/*
Concept: Find maximum element in array
Time Complexity: O(n)
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

    int max_element = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max_element)
        {
            max_element = arr[i];
        }
    }

    cout << "Maximum element: " << max_element;

    return 0;
}
