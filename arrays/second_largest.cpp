/*
Concept: To find the second largest element in an array.
Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 2)
    {
        cout << "Not enough elements";
        return 0;
    }

    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
    }

    if (second_largest == INT_MIN)
    {
        cout << "No second largest element";
    }
    else
    {
        cout << second_largest;
    }

    return 0;
}