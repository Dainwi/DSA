#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int minDifference(vector<int> &a)
{
    std::sort(a.begin(), a.end()); // Sort the vector in ascending order

    int minDiff = INT_MAX; // Initialize minDiff to a large value

    for (int i = 1; i < a.size(); i++)
    {
        int diff = a[i] - a[i - 1];
        if (diff < minDiff)
        {
            minDiff = diff; // Update minDiff if a smaller difference is found
        }
    }

    return minDiff;
}

int main(){
    vector<int> arr = {23,46,12,3,71,4};

    cout<<minDifference(arr);

    return 0;
}