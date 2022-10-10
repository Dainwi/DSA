// Finding the 1st and last occurence of the repeting element in the sorted array.

#include <iostream>
using namespace std;

int fristOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1, mid, ans;
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
    int s = 0, e = n - 1, mid, ans;
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
    int arr[6] = {1, 2, 3, 3, 4, 3};
    cout << "The 1st index is: " << fristOcc(arr, 6, 3) << endl;
    cout << "The last index is: " << lastOcc(arr, 6, 3);
    return 0;
}
