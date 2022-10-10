// Panters partition problem.
/*
homeWork
*/

#include <iostream>
using namespace std;

bool isPossible(int arr[], int numOfPainter, int numOfBoard, int mid)
{
    int painterCount = 1;
    int boardSum = 0;

    for (int i = 0; i < numOfBoard; i++)
    {
        if (boardSum + arr[i] <= mid)
        {
            boardSum += arr[i];
        }
        else
        {
            painterCount++;

            if (painterCount > numOfPainter || arr[i] > mid)
            {
                return false;
            }
            // boardSum = 0;
            boardSum = arr[i];
        }
    }
    return true;
}

int allocate(int arr[], int numOfPainter, int numOfBoard)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < numOfBoard; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (isPossible(arr, numOfPainter, numOfBoard, mid))
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

int main(int argc, char const *argv[])
{
    int panter[4] = {5, 5, 5, 5};

    cout << "Minimum time is: " << allocate(panter, 2, 4);

    return 0;
}
