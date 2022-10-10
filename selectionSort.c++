#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }
}

bool isPossible(int arr[], int mid, int numOfStudents, int numOfBooks)
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
            if (studentCount > numOfStudents || arr[i] > mid)
            {
                return false;
            }

            pageSum = arr[i];
        }
    }
    return true;
}

int allocate(int arr[], int numOfStudents, int numOfBooks)
{
    selectionSort(arr, numOfBooks);
    int start = 0, mid, sum = 0;
    for (int i = 0; i < numOfBooks; i++)
    {
        sum += arr[i];
    }
    int end = sum, ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (isPossible(arr, mid, numOfStudents, numOfBooks))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

void display(int arr[], int n)
{
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[4] = {30, 40, 10, 20};
    // sort(arr, 4);
    cout << allocate(arr, 2, 4);
    // display(arr, 4);

    return 0;
}