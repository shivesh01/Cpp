// If else statement

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number" << endl;
    cin >> num;

    if (num >= 0)
    {
        cout << "You have entered a positive number: " << num << endl;
    }

    else
    {
        cout << "You have entered a negative number: " << num << endl;
    }
}