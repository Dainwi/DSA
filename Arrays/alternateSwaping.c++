#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void altSwap(int arr[], int n)
{
    for (int i = 0; i < n; i+=2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i+1]);
        }
        
    }
    
}
int main()
{
    int arr[8] = {5,2,9,4,6,1,0,7};
    altSwap(arr, 8);
    display(arr, 8);

    return 0;
}