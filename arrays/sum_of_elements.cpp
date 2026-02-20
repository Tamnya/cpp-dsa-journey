/*
Concept: Sum of all elements
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;
int main()
{
    const int MAX_SIZE = 10000;
    int n;
    int arr[MAX_SIZE];
    long long sum = 0;

    cout << "Enter the no. of elements(max 10000): " << endl;
    cin >> n;
    cout << "Enter " << n << " elements:" << endl;

    if (n <= 0 || n > MAX_SIZE)
    {
        cout << "Invalid number of elements." << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of elements is: ";
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;

    return 0;
}