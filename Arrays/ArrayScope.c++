#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    arr[0] = {9};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    cout << "Going to the main function.\n";
}

int main()
{

    int arr[3] = {2, 5, 56};

    update(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    return 0;
}