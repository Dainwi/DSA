// Time Complexcity = O(n2)
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int minIdx;
    for (int i = 0; i < n - 1; i++)
    {
        minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }
}

void display(int arr[], int n)
{
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[9] = {29, 72, 98, 13, 87, 66, 52, 51, 36};
    display(arr, 9);
    return 0;
}