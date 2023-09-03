#include <iostream>
using namespace std;

#define n 100 // Define a constant 'n' for the maximum size of the stack

class Stack
{
  int *arr; // Dynamic array to store stack elements
  int top;  // Index to keep track of the top element

public:
  // Constructor to initialize the stack
  Stack()
  {
    arr = new int[n]; // Allocate memory for the stack
    top = -1;         // Initialize the top index to -1 (empty stack)
  }

  // Function to push an element onto the stack
  void push(int data)
  {
    if (top == n - 1)
    {
      cout << "Stack overflow"; // Check if the stack is full
      return;
    }
    top++;           // Increment the top index
    arr[top] = data; // Store the data in the stack
  }

  // Function to pop the top element from the stack
  void pop()
  {
    if (top == -1)
    {
      cout << "No element present in the stack"; // Check if the stack is empty
      return;
    }
    top--; // Decrement the top index to remove the top element
  }

  // Function to get the top element of the stack
  int Top()
  {
    if (top == -1)
    {
      cout << "No element present in the stack"; // Check if the stack is empty
      return -1;
    }
    return arr[top]; // Return the top element
  }

  // Function to check if the stack is empty
  bool empty()
  {
    return top == -1; // Return true if the top index is -1 (empty), otherwise false
  }
};

int main()
{
  Stack st;   // Create an instance of the Stack class
  st.push(1); // Push 1 onto the stack
  st.push(2); // Push 2 onto the stack
  st.push(3); // Push 3 onto the stack

  cout << st.Top(); // Print the top element of the stack (which is 3 in this case)
  return 0;
}
