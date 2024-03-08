#include <iostream>
using namespace std;

// Node class representing each element in the list
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // Constructor
    Node(int data)
    {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};

// DoubleLinkedList class representing the list itself
class DoubleLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    // Constructor
    DoubleLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    // Function to add a node at the head of the list
    void prepend(int data)
    {
        Node *newNode = new Node(data);

        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Function to add a node to the end of the list
    void append(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Function to print the elements of the list
    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Function to print the elements of the list in reverse order
    void printReverse()
    {
        Node *temp = tail;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main()
{
    DoubleLinkedList myList;

    // Appending elements to the list
    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.append(4);
    myList.append(5);

    // Prepending elements to the list
    myList.prepend(9);
    myList.prepend(7);

    // Printing the list
    cout << "Forward list: ";
    myList.printList();

    // Printing the list in reverse order
    cout << "Reverse list: ";
    myList.printReverse();

    return 0;
}