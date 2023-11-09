#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateArray(vector<int> arr, int k)
{
    int n = arr.size();
    k = k % n;
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        ans[(i + k) % n] = arr[i];
    }

    return ans;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;

    vector<int> ans = rotateArray(arr, k);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}