#include <iostream>

using namespace std;

int main()
{
    int number;
    int multiply;

    cout << "Welcome to the multiplication software" << endl;
    cout << endl;

    cout << "Input a number: ";
    cin >> number;

    cout <<"Print the multiplication table of a number up to: ";
    cin >> multiply;

    //for loop
    for(int i = 1; i <= multiply; i++)
    {
        cout<< number << " X " << i << " = " << number*i << endl;
    }
}
