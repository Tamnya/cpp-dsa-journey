/*
Concept: Sum of digits of each element in array
Time Complexity: O(n * d)  (d = number of digits)
Space Complexity: O(n)
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
    int tempArr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int sum = 0;

        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }

        tempArr[i] = sum;
    }

    cout << "Digit sums: ";
    for (int i = 0; i < n; i++)
    {
        cout << tempArr[i] << " ";
    }

    return 0;
}
