#include <iostream>
using namespace std;

// printing the array
void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

// search using linear search
void linearSearch(int arr[], int n, int k)
{
  int flag = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == k)
    {
      flag = 1;
    }
  }
  if (flag == 1)
  {
    cout << "Element is present in the array.";
  }
  else
  {
    cout << "Element is not present in the array.";
  }
}

// search using binary search
void binarySearch(int arr[], int n, int k)
{
  int start = 0, end = n - 1;
  bool found = false; // Add a boolean variable to track if the element is found or not

  while (start <= end)
  {
    int mid = start + ((end - start) / 2);

    if (arr[mid] == k)
    {
      cout << "Element is present in the array.";
      found = true; // Set found to true when the element is found
      break;        // No need to continue searching once the element is found
    }
    else if (arr[mid] < k)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }

  if (!found) // If the element is not found after the loop, print a message.
  {
    cout << "Element is not present in the array.";
  }
}

int main()
{
  int arr[6] = {1, 2, 3, 4, 5, 6};

  printArray(arr, 6);
  cout << endl;
  linearSearch(arr, 6, 5);
  cout << endl;
  binarySearch(arr, 6, 5);

  return 0;
}