#include <iostream>
using namespace std;

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

int main()
{
    Node *node1 = new Node(10);
    cout << "Data: " << node1->data << endl;
    cout << "Next: " << node1->next << endl;

    delete node1;

    return 0;
}
