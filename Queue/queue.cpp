#include <iostream>
using namespace std;

class Queue
{
  int *arr;
  int front;
  int back;
  int n;

public:
  Queue(int queueSize)
  {
    n = queueSize;
    arr = new int[n];
    front = -1;
    back = -1;
  }

  void push(int data)
  {
    if (back == n - 1)
    {
      cout << "Queue is overflow." << endl;
      return;
    }
    back++;
    arr[back] = data;

    if (front == -1)
    {
      front++;
    }
  }

  void pop()
  {
    if (front == -1 || front > back)
    {
      cout << "Queue is empty." << endl;
      return;
    }
    front++;
  }

  int peek()
  {
    if (front == -1 || front > back)
    {
      cout << "Queue is empty." << endl;
      return -1;
    }
    return arr[front];
  }

  bool empty()
  {
    if (front == -1 || front > back)
    {
      return true;
    }
    return false;
  }
};

int main()
{
  int queueSize = 5;
  // cout<<"Enter the size of the queue: ";
  // cin>>queueSize;
  Queue q(queueSize);

  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);

  cout << q.peek();

  return 0;
}