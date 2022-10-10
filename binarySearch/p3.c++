// Find the repiting element in the sorted array and how many it present in the array.

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1, ans, mid;
    mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1, ans, mid;
    mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    int even[7] = {1, 3, 2, 3, 3, 3, 5};

    int first = firstOcc(even, 7, 3);
    int sec = lastOcc(even, 7, 3);

    cout << first << endl;
    cout << sec << endl;

    cout << (sec - first) + 1;
    return 0;
}
