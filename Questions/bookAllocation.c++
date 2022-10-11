#include <iostream>
using namespace std;

bool isPossible(int arr[], int numOfStudents, int numOfBooks, int mid)
{
    int studentsCount = 1;
    int pageSum = 0;

    for (int i = 0; i < numOfBooks; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentsCount++;
            if (studentsCount > numOfStudents || arr[i] > mid)
            {
                return false;
            }
        pageSum=arr[i];
        }
    }
    return true;
}

int allocate(int arr[], int numOfBooks, int numOfStudents)
{
    int start = 0, sum = 0;
    for (int i = 0; i < numOfBooks; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int mid, ans = -1;
    mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(arr, numOfStudents, numOfBooks, mid))
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
    int books[4] = {10, 20, 30, 40};
    cout << "Books allocated: " << allocate(books, 4, 2);

    return 0;
}