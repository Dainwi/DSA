// Search in rotated sorted array.

#include <iostream>
using namespace std;

int getpivot(int arr[], int n)
{
    int s = 0, e = n - 1, mid;
    mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    return s;
}

int binarySearch(int arr[], int n, int s, int e, int key)
{
    int start = s, end = e, mid;

    mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}

int getIndex(int arr[], int n, int key)
{
    int pivot = getpivot(arr, n);

    if (key > arr[pivot])
    {
        return binarySearch(arr, n, pivot, n - 1, key);
    }
    else
    {
        return binarySearch(arr, n, 0, pivot - 1, key);
    }
}

int main(int argc, char const *argv[])
{
    int even[5] = {7, 8, 1, 3, 5};
    cout << getIndex(even, 5, 1);
    return 0;
}
