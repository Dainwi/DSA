#include <iostream>
using namespace std;

bool search(int arr[], int n, int sElement)
{
    for (int i = 0; i < n; i++)
    {
        if (sElement == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1}, sElement;

    cin >> sElement;

    if (search(arr, 10, sElement))
    {
        cout << "Element present";
    }
    else
    {
        cout << "Element is not found.";
    }
    return 0;
}