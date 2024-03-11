#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

// Doubly linked list class
class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    // Constructor
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Destructor
    ~DoublyLinkedList()
    {
        clear();
    }

    // Method to insert a new node at the beginning of the list
    void insertBegin(int value)
    {
        Node *newNode = new Node(value);

        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Method to insert a new node at the end of the list
    void insertEnd(int value)
    {
        Node *newNode = new Node(value);

        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Method to remove a node from the beginning of the list
    void removeBegin()
    {
        if (!head)
        {
            cout << "List is empty. Nothing to remove." << endl;
            return;
        }

        Node *temp = head;

        if (head == tail)
        {
            head = tail = nullptr;
        }
        else
        {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
    }

    // Method to remove a node from the end of the list
    void removeEnd()
    {
        if (!head)
        {
            cout << "List is empty. Nothing to remove." << endl;
            return;
        }

        Node *temp = tail;

        if (head == tail)
        {
            head = tail = nullptr;
        }
        else
        {
            tail = tail->prev;
            tail->next = nullptr;
        }

        delete temp;
    }

    // Method to clear the entire list
    void clear()
    {
        Node *current = head;

        while (current)
        {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
        head = tail = nullptr;
    }

    // Method to display the elements of the list
    void display()
    {
        Node *current = head;

        while (current)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList dll;

    dll.insertBegin(1);
    dll.insertEnd(2);
    dll.insertEnd(3);
    dll.insertBegin(0);

    cout << "Original list: ";
    dll.display();

    dll.removeBegin();
    cout << "After removing the first element: ";
    dll.display();

    dll.removeEnd();
    cout << "After removing the last element: ";
    dll.display();

    dll.clear();
    cout << "After clearing the list: ";
    dll.display();

    return 0;
}