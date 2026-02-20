/*
Concept: To find Average of elements, avg = sum / no. of elementsdd
Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;

int main()
{
    int const MAX_SIZE = 100000;
    int n;
    int arr[MAX_SIZE];
    long long sum = 0;
    double average;

    cout << "Enter the number of elements: " << endl;
    cin >> n;

    if (n > MAX_SIZE || n <= 0)
    {
        cout << "Invalid number of inputs.";
        return 0;
    }

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    average = double(sum / n);
    cout << "The average of elements is: " << average;

    return 0;
}