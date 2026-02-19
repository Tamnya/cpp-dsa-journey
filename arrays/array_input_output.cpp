/*
Concept: Array input and traversal
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main()
{

    const int MAX_SIZE = 100;
    int n;
    int arr[MAX_SIZE];

    cout << "Enter number of elements (max 100): ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE)
    {
        cout << "Invalid number of elements." << endl;
        return 0;
    }

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
