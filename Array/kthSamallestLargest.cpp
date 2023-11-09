#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void kthSmallestLargest(vector<int> arr, int n, int k)
{
    sort(arr, arr + n);

    set<int> ans;

    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] != arr[i + 1])
        {

            ans.insert(arr[i]);
        }
    }

    ans.insert(arr[n - 1]);

    n = ans.size();

    if (k > n)
        cout << -1;

    else
    {

        int t = n - k;

        auto it = ans.begin();

        for (int i = 0; i < t; i++)

        {

            it++;
        }

        cout << *it << " ";

        k--;

        it = ans.begin();

        for (int i = 0; i < k; i++)

        {

            it++;
        }

        cout << *it << "\n";
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    kthSmallestLargest(arr, 3);
    return 0;
}