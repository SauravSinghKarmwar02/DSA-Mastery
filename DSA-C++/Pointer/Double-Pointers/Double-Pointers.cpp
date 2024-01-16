#include <iostream>

using namespace std;

void update(int **p)
{
    **p = **p + 1;
}

int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    update(ptr2);
    cout << endl
         << ptr2 << endl;

    cout << endl;
    return 0;

}
