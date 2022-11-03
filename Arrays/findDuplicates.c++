#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    int arr[7] = {6, 3, 1, 5, 4, 3, 2};

    cout << findDuplicate(arr, 7);

    return 0;
}