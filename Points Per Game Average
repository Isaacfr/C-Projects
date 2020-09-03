#include <iostream>

using namespace std;

//This code asks for input for the amount of games and points per game and adds them all up

float points;
float ppg;

int numberOfGames;
int gamesPlayed = 0;

int main()
{
    cout<<"Please enter the player's data: "<<endl;

    do
    {
        cout<<"How many games have been played? (Please enter a number above 0): ";
        cin>>numberOfGames;
    }while (numberOfGames <= 0);

    cout<<endl;
    float totalGames[numberOfGames] = {};

    do
    {
        int gameNumber = gamesPlayed + 1;
        cout<<"Game ";
        cout<<gameNumber;
        cout<<"(Enter an amount of points earned): "<<endl;
        cin>>points;
        totalGames[gamesPlayed] = points;
        gamesPlayed++;
        cout<<endl;
    }while (gamesPlayed != numberOfGames);

    for(int i = 0; i <= numberOfGames; i++)
    {
        ppg = ppg + totalGames[i];
    }

    ppg = ppg/numberOfGames;

    cout<<"Points Per Game (PPG) : "<<ppg;
}
