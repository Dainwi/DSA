#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int start = 0, end = n - 1, mid;

    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main(int argc, char const *argv[])
{
    int even[7] = {4, 5, 6, 7, 0, 1, 2};
    cout << getPivot(even, 7);
    return 0;
}
