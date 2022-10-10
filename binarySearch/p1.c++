// Searching element using binarySearch.

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0, e = n - 1, mid;
    mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {

            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {3, 5, 11, 14, 16};

    cout << "The index of the number 12 is: " << binarySearch(even, 6, 12) << endl;
    cout << "The index of the number 16 is: " << binarySearch(odd, 5, 16) << endl;

    return 0;
}
