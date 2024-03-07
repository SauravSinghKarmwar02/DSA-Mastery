#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {}

    // Function to add a node at the end of the linked list
    void append(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }

    // Function to find the length of the linked list
    int findLength()
    {
        int length = 0;
        Node *current = head;
        while (current != nullptr)
        {
            length++;
            current = current->next;
        }
        return length;
    }

    // Function to print the linked list
    void printList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;

    // Appending elements to the linked list
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    // Printing the linked list
    cout << "LinkedList: ";
    list.printList();

    // Finding the length of the linked list
    cout << "Length of the linked list: " << list.findLength() << endl;

    return 0;
}