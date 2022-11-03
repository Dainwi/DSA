#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int ans = 0, i;
    for (i = 0; i < n; i++)
    {
        ans = ans + arr[i];
    }
    // ans = arr[i];
    return ans;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {2,7,1, -4,11};
    int ans = sum(arr, 5);
    cout<<ans;
    return 0;
}
