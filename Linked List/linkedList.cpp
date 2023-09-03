#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
};

// print linked list
void printList(Node *&head)
{
  Node *current = head;
  while (current != NULL)
  {
    cout << current->data << " ";
    current = current->next;
  }
}

// Insert at head
void insertAtHead(Node *&head, int data)
{
  Node *newNode = new Node(data);
  newNode->next = head;
  head = newNode;
}

// Insert at tail
void insertAtTail(Node *&head, int data)
{
  Node *newNode = new Node(data);
  Node *current = head;

  while (current != NULL)
  {
    current = current->next;
  }
  current->next = newNode;
}

int main()
{
  Node *head = new Node(20);

  insertAtTail(head, 50);

  printList(head);

  return 0;
}