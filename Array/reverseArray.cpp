#include <iostream>

using namespace std;

void reverseArray(int arr[], int n)
{
    int array[n];

    for (int i = 0; i < n; i++)
    {
        array[i] = arr[n - i - 1];
        cout << array[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    return 0;
}