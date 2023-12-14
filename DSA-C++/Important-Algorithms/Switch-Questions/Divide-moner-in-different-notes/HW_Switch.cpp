#include<iostream>
using namespace std;

int main()
{
    // Asking user to enter the amount
    int amount;
    cout << endl << "Enter a amount(Rs): ";
    cin >> amount;
    cout << endl;

    // Declaring variables which contains no. of notes
    int Huns=0, Fifts=0, Twens=0, Tens=0, Ones=0; 

    // Using Switch statement 
    while (amount > 0)
    {
        switch (amount >= 100 ? 100 : amount)
        {
        case 100:
            amount -= 100;
            Huns++;
            break;
        case 50:
            amount -= 50;
            Fifts++;
            break;
        case 20:
            amount -= 20;
            Twens++;
            break;
        case 10:
            amount -= 10;
            Tens++;
            break;
        default:
            amount--;
            Ones++;
            break;
        }
    }

    // Print the numbers of notes 
    cout << "Hundreds: " << Huns << endl; 
    cout << "Fifties: " << Fifts << endl; 
    cout << "Twenties: " << Twens << endl; 
    cout << "Tens: " << Tens << endl; 
    cout << "Ones: " << Ones << endl; 

    cout << endl;
}