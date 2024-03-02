#include <iostream>
using namespace std;

// Define the Node class
class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

// Define the LinkedList class
class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    // Constructor
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    // Insert a new node at the head of the linked list
    void insertAtHead(int data)
    {
        Node *newNode = new Node(data);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    // Insert a new node at the tail of the linked list
    void insertAtTail(int data)
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
            tail = tail->next;
        }
    }

    // Insert a new node in the middle of the linked list
    void insertInMiddle(int data, int position)
    {
        Node *newNode = new Node(data);
        if (position <= 0 || head == nullptr)
        {
            insertAtHead(data);
            return;
        }

        int count = 0;

        Node *current = head;
        Node *previous = nullptr;

        while (current != nullptr && count < position)
        {
            previous = current;
            current = current->next;
            count++;
        }

        if (previous == nullptr)
        {
            insertAtHead(data);
        }
        else
        {
            previous->next = newNode;
            newNode->next = current;

            if (current == nullptr)
            {
                tail = newNode;
            }
        }
    }

    // Display the elements of the list
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Delete a node with given data from the list
    void DeleteNode(int data)
    {
        if (head == nullptr)
            return;

        if (head->data == data)
        {
            Node *temp = head;
            head = head->next;
            delete temp;

            if (head == nullptr)
                tail = nullptr;

            return;
        }

        Node *prev = head;
        Node *curr = head->next;
        while (curr != nullptr && curr->data != data)
        {
            prev = curr;
            curr = curr->next;
        }

        if (curr != nullptr)
        {
            prev->next = curr->next;
            delete curr;

            if (prev->next == nullptr)
                tail = prev;
        }
    }

    // Destructor to delete all the nodes when LinkedList is destroyed
    ~LinkedList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main()
{
    LinkedList list;

    // Insert elements into linked list
    list.insertAtHead(5);
    list.insertAtHead(10);
    list.insertAtHead(15);
    list.insertAtTail(50);
    list.insertAtTail(45);
    list.insertAtTail(40);

    // Insert element in the middle
    list.insertInMiddle(8, 3);

    // Display the list
    cout << "Linked List: ";
    list.display();

    // Delete a node
    list.DeleteNode(10);

    // Display the updated list
    cout << "Update Linked List: ";
    list.display();

    return 0;
}
