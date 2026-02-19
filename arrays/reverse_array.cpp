/*
Concept: Reverse array using two-pointer technique
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

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
