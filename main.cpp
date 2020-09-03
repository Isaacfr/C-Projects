#include <iostream>

using namespace std;

float InsertMoney(float x);
float SelectFood(float x);
float SelectDrink(float x);

int main()
{
    //1
    char answer;
    float money = 0;


    cout << "Please Choose your Dining Voucher: " << endl;
    money = InsertMoney(money);
    cout << "You have : $" << money << endl;
    cout << "Add more fund? (Y/N)" << endl;
    cin >> answer;

    while (answer == 'Y' || answer == 'y')
    {
        cout << "Please insert your coins/bills" << endl;
        money = InsertMoney(money);
        cout << "You have : $" << money << endl;
        cout << "Add more fund? (Y/N)" << endl;
        cin >> answer;
    }

    //2
        do {
        money = SelectFood(money);
        if (money < 2.5)
        {
            break;
        }
        cout << "Add more meals (Y/N)? : " << endl;
        cin >> answer;
        } while (answer == 'Y' || answer == 'y');
    //3
        if(money > 0)
        {
            do {
            money = SelectDrink(money);
            if(money < 1.5)
            {
                break;
            }
            cout << "Add more drinks (Y/N)? : " << endl;
            cin >> answer;
            } while (answer == 'Y' || answer == 'y');
        }
    //4

    if (money > 0)
    {
        cout << endl;
        cout << "Coins/bills: " << money << endl;
        cout << "Your changes: " << money << endl;
        cout << "Take your changes and enjoy your meals"<<endl;
    }

    else if (money == 0)
    {
        cout << endl;
        cout << "Coins/bills: " << money << endl;
        cout << "Enjoy your meals" << endl;
    }

}

float InsertMoney(float x)
{
    int choice1;
    cout << "(1)$10, (2)$20, (3)$50, (4)$100 : ";
    cin >> choice1;

    if (choice1 == 1)
    {
        cout << "You've inserted: $10" << endl;
        x += 10;
    }
    else if (choice1 == 2)
    {
        cout << "You've inserted: $20" << endl;
        x += 20;
    }
    else if (choice1 == 3)
    {
        cout << "You've inserted: $50" << endl;
        x += 50;
    }
    else if (choice1 == 4)
    {
        cout << "You've inserted: $100" << endl;
        x += 100;
    }
    return x;
    cout << endl;
}

float SelectFood(float x)
{
    char choice2;

    cout << endl;
    cout << "Please make a selection: " << endl;
    cout << "(P)otato Chip $2.50, (H)am Burger $5.50, (C)hicken Rice $5.50, (B)rooklyn Pizza ($4.50)" << endl;
    cin >> choice2;

    if (choice2 == 'P' || choice2 == 'p')
    {
        x = x - 2.5;
        if(x < 0)
        {
            x = x + 2.5;
            cout << "Insufficient funds" << endl;
        }
    }
    else if (choice2 == 'h' || choice2 == 'H'|| choice2 == 'c' || choice2 == 'C')
    {
        x = x - 5.5;
        if(x < 0)
        {
            x = x + 5.5;
            cout << "Insufficient funds" << endl;
        }
    }
    else if (choice2 == 'b' || choice2 == 'B')
    {
        x = x - 4.5;
        if(x < 0)
        {
            x = x + 4.5;
            cout << "Insufficient funds" << endl;
        }
    }
    else
    {
        cout << "Please try again"<< endl;
    }

    cout << "Coins/bills: " << x << endl;
    return x;
}

float SelectDrink(float x)
{
    char choice3;

    cout << endl;
    cout << "Select your beverages:"<<endl;
    cout << "(A)quaVeena $1.50, (B)epsi $2.00, (C)ool Cola $2.00, (G)atorade $2.25, (N)o Beverage"<<endl;
    cin >> choice3;

    if (choice3 == 'A' || choice3 == 'a')
    {
        x = x - 1.5;
        if(x < 0)
        {
            x = x + 1.5;
            cout << "Insufficient funds" << endl;
        }
    }
    else if (choice3 == 'b' || choice3 == 'B'|| choice3 == 'c' || choice3 == 'C')
    {
        x = x - 2.0;
        if(x < 0)
        {
            x = x + 2;
            cout << "Insufficient funds" << endl;
        }
    }
    else if (choice3 == 'g' || choice3 == 'G')
    {
        x = x - 2.25;
                if(x < 0)
        {
            x = x + 2.25;
            cout << "Insufficient funds" << endl;
        }
    }
    else if (choice3 == 'n' || choice3 == 'N')
    {
        x = x - 0;
    }
    else
    {
        cout << "Please try again"<< endl;
    }

    cout << "Coins/bills: " << x << endl;
    return x;
}
