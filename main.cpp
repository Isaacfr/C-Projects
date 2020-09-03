#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    char answer;

    cout << "Compare the first number with second number: " << endl;
    cout << "(==, !=, <, >, <=, >=)" << endl;
    cout << endl;

    do
    {
        cout<< "Input the first integer: ";
        cin >> x;
        cout<< "Input the second integer: ";
        cin >> y;

        if (x == y)
        {
            cout << x << " == " << y << endl;
        }
        if (x != y)
        {
            cout << x << " != " << y << endl;
        }
        if (x < y)
        {
            cout << x << " < " << y << endl;
        }
        if (x > y)
        {
            cout << x << " > " << y << endl;
        }
        if (x <= y)
        {
            cout << x << " <= " << y << endl;
        }
        if (x >= y)
        {
            cout << x << " >= " << y << endl;
        }

        cout<<"Try again (Y/N)? ";
        cin >> answer;
        cout<<endl;

    }while(answer != 'n' && answer != 'N');
}
