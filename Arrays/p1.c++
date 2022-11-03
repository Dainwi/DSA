/*
--> what is arrya ?
--> It is a type of list which can carry only same type of data.
--> It stores the data in contigues memomry locations.
--> We can access it's element using their index.
--> In the indexing starts from 0(zero) and it goes upto (sizeOfArray - 1).


--> Why array ?
--> When we want to store same type of multiple values in a single variable.
*/

// Implementation
#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[3] = {5, 7};
    // int length = 
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    return 0;
}
