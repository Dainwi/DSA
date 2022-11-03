#include <iostream>
using namespace std;

int findUniqe(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[9] = {1, 3, 1, 3, 6, 6, 7, 10, 7};

    int ans = findUniqe(arr, 9);
    cout << ans;
    return 0;
}