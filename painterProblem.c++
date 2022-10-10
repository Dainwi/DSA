#include <iostream>
using namespace std;

bool isPossible(int arr[], int numOfPainters, int numOfBoards, int mid)
{
    int paintersCount = 1;
    int boardsSum = 0;

    for (int i = 0; i < numOfBoards; i++)
    {
        if (boardsSum + arr[i] <= mid)
        {
            boardsSum += arr[i];
        }
        else
        {
            paintersCount++;

            if (paintersCount > numOfPainters || arr[i] > mid)
            {
                return false;
            }
            boardsSum = arr[i];
        }
    }
    return true;
}

int allocate(int arr[], int numOfPainters, int numOfBoards)
{
    int start = 0, sum = 0;

    for (int i = 0; i < numOfBoards; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1, mid;

    mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(arr, numOfPainters, numOfBoards, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int painters[4] = {10, 20, 30, 40};

    cout << "Minimum time is: " << allocate(painters, 2, 4) << endl;

    return 0;
}