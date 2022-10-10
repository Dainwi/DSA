#include <iostream>
using namespace std;

void insertSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp, j;
        temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

void display(int arr[], int n)
{
    insertSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[8] = {10, 1, 7, 4, 8, 2, 11};

    display(arr, 8);
    // cout << insertSort(arr, 8);

    return 0;
}