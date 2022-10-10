// Find the peack of the array mountain.

#include <iostream>
using namespace std;

int idxOfPeack(int arr[], int n)
{
    int s = 0, e = n - 1, mid;

    mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    int arr[10] = {12, 13, 14, 15, 16, 17, 18, 3, 2, 1};
    cout <<"The index of the peack mountain array is: "<< idxOfPeack(arr, 10);
    return 0;
}
