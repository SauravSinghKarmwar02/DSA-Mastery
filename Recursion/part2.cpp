#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "Source: " << src << " Destination: " << dest << endl;

    // Base case
    if (src == dest)
    {
        cout << "Destination reached" << endl;
        return;
    }

    // Processing -> next step
    src++;

    // Recursive call
    reachHome(src, dest);
}

int main()
{
    int dest = 10;
    int src = 1;

    reachHome(src, dest);

    return 0;
}