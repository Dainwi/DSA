// Find the pivot in the rotated array.

#include <iostream>
using namespace std;

int pviot(int arr[], int n)
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

int main()
{
    int even[7] = {4, 5, 6, 7, 0, 1, 2};
    cout << "The pivot is present at index: " << pviot(even, 7);
    return 0;
}
