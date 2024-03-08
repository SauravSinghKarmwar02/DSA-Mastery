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

    // Function to add a Node at a position
    void insertAtPosition(int data, int position)
    {
        // Check if the position is valid
        if (position <= 0)
        {
            cout << "Invalid position." << endl;
            return;
        }

        // If the position is 1 or the list is empty, add node at the head
        if (position == 1 || head == nullptr)
        {
            prepend(data);
            return;
        }

        // Create a new node
        Node *newNode = new Node(data);

        // Traverse the list to find the position
        Node *current = head;
        int currentPosition = 1;

        while (currentPosition < position - 1 && current != nullptr)
        {
            current = current->next;
            currentPosition++;
        }

        // If position exceeds the size of the list , insert node at the end
        if (current == nullptr)
        {
            append(data);
            return;
        }

        // Insert the new node at the specified position
        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != nullptr)
        {
            current->next->prev = newNode;
        }
        current->next = newNode;
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

    // Function to sort the elements of the list
    void bubbleSort()
    {
        if (!head || !head->next)
        {
            return;
        }

        bool swapped;
        Node *current;
        Node *last = nullptr;

        do
        {
            swapped = false;
            current = head;

            while (current->next != last)
            {
                if (current->data > current->next->data)
                {
                    int temp = current->data;
                    current->data = current->next->data;
                    current->next->data = temp;
                    swapped = true;
                }
                current = current->next;
            }
            last = current;
        } while (swapped);
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

    // Add elements in the middle of the list
    myList.insertAtPosition(10, 4);
    myList.insertAtPosition(15, 6);

    // Printing the list
    cout << "Forward list: ";
    myList.printList();

    // Printing the list in reverse order
    cout << "Reverse list: ";
    myList.printReverse();

    // Sorting the list
    myList.bubbleSort();

    // Printing the Sorted list
    cout << endl << "Sorted Forward list: ";
    myList.printList();

    // Printing the Sorted list in reverse order
    cout << "Sorted Reverse list: ";
    myList.printReverse();

    return 0;
}