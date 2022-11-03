#include <iostream>
using namespace std;

int intersaction(int arr[], int ar1[], int n, int m)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i] == ar1[j])
            {
                ans = arr[i];
                ar1[j] = -112231;
            }
        }
    }
    return ans;
}

int main()
{
    int a[9] = { 1, 2, 5, 6, 2, 3, 5, 7, 3 };
    int b[10] = { 2, 4, 5, 6, 8, 9, 4, 6, 7, 4 };

    cout<< intersaction(a, b, 9, 10);

    return 0;
}