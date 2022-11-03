#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse(int arr[], int n)
{
    int start = 0, end = n - 1, tmp;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(int argc, char const *argv[])
{
    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};

    reverse(arr, 6);
    reverse(brr, 5);

    display(arr, 6);
    cout << endl;
    display(brr, 5);
    return 0;
}
