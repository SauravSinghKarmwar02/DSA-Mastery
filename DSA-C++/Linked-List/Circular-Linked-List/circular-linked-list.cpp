#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

class circularLinkedList
{
private:
    Node *head;

public:
    circularLinkedList() : head(nullptr) {}

    // Function to add a node to the end of the list
    void insertAtTail(int value)
    {
        Node *newNode = new Node(value);

        if (!head)
        {
            head = newNode;
            head->next = head;
        }
        else
        {
            Node *temp = head;

            while (temp->next != head)
            {
                temp = temp->next;
            }

            temp->next = newNode;
            newNode->next = head;
        }
    }

    // Function to add a node at the head of the list
    void insertAtHead(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
            head->next = head;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    // Function to insert a node at a specific position in the list
    void insertAtPosition(int value, int position)
    {
        if (position <= 0)
        {
            cout << "Invalid position." << endl;
            return;
        }

        if (position == 1)
        {
            insertAtHead(value);
            return;
        }

        Node *newNode = new Node(value);
        Node *temp = head;
        int currentPosition = 1;

        while (currentPosition < position - 1 && temp->next != head)
        {
            temp = temp->next;
            currentPosition++;
        }

        if (temp->next == head && currentPosition != position - 1)
        {
            cout << "Positions exceeds the size of the list." << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Function to delete a node with a given value
    void deleteNode(int value)
    {
        if (!head)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head;
        Node *prev = nullptr;

        // Find the node to delete
        while (temp->data != value)
        {
            if (temp->next == head)
            {
                cout << "Node with value " << value << " not found." << endl;
                return;
            }

            prev = temp;
            temp = temp->next;
        }

        // If the node to delete is the head node
        if (temp == head)
        {
            prev = head;
            while (prev->next != head)
            {
                prev = prev->next;
            }
            head = head->next;
            prev->next = head;
            delete temp;
            return;
        }

        // If the node to delete is not the head node
        prev->next = temp->next;
        delete temp;
    }

    // Function to print the list
    void printList()
    {
        if (!head)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main()
{
    circularLinkedList myList;

    // Appending elements to the list
    myList.insertAtTail(1);
    myList.insertAtTail(2);
    myList.insertAtTail(3);
    myList.insertAtTail(4);
    myList.insertAtTail(5);

    // Printing the list
    cout << "Original Circular Linked List: ";
    myList.printList();

    // Prepending elements to the list
    myList.insertAtHead(0);
    cout << endl
         << "List after prepending: ";
    myList.printList();

    // Inserting at a specific position
    myList.insertAtPosition(6, 7);
    myList.insertAtPosition(6, 3);
    cout << endl
         << "List after insertion: ";
    myList.printList();

    // Deleting nodes from the list
    myList.deleteNode(3);
    myList.deleteNode(0);
    myList.deleteNode(5);
    cout << endl
         << "List after deletion: ";
    myList.printList();

    return 0;
}