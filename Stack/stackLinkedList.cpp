#include <iostream>
using namespace std;

// Define a Node struct for the linked list
struct Node
{
  int data;
  Node *next;
  Node(int val) : data(val), next(nullptr) {}
};

class Stack
{
private:
  Node *top;
  int size;

public:
  Stack() : top(nullptr), size(0) {}

  // Function to push an element onto the stack
  void push(int data)
  {
    Node *new_node = new Node(data);
    new_node->next = top;
    top = new_node;
    size++;
  }

  // Function to pop the top element from the stack
  int pop()
  {
    if (is_empty())
    {
      cout << "Stack is empty." << endl;
      return -1; // Stack is empty
    }

    int top_element = top->data;
    Node *temp = top;
    top = top->next;
    delete temp;
    size--;
    return top_element;
  }

  // Function to get the top element without removing it
  int peek()
  {
    if (is_empty())
    {
      cout << "Stack is empty." << endl;
      return -1; // Stack is empty
    }

    return top->data;
  }

  // Function to check if the stack is empty
  bool is_empty()
  {
    return size == 0;
  }

  // Function to get the size of the stack
  int get_size()
  {
    return size;
  }

  // Destructor to free memory when the stack is no longer needed
  ~Stack()
  {
    while (!is_empty())
    {
      pop();
    }
  }
};

int main()
{
  Stack st;

  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  cout << st.get_size() << endl;
  cout << "Top element: " << st.peek() << endl;

  // To demonstrate popping elements
  while (!st.is_empty())
  {
    cout << "Popped: " << st.pop() << endl;
  }

  return 0;
}
