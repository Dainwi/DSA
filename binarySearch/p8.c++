// Book alocation problem
/* 1. Each student gets at least one book.
   2. Each book should be allocated to a student.
   3. Book allocation should be in a continguous manner.
*/
#include <iostream>
using namespace std;

bool isPossible(int arr[], int numOfBooks, int numOfstudent, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < numOfBooks; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;

            if (studentCount > numOfstudent || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int numOfBooks, int numOfStudent)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < numOfBooks; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, numOfBooks, numOfStudent, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int arr[4] = {5,5,5,5};
    cout << "Minimum is: " << allocateBooks(arr, 4, 2);
    return 0;
}
