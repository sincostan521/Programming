#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
#include <climits>
#include <limits>
#include <time.h>
#include <iomanip>
#include <numeric>
#include <string>
using namespace std;

class Alien
{
    private:
        int life;
        int attack;

    public:
    Alien() {}
    Alien(int i, int j)
    {
        life = i;
        attack = j;
    }
    void setLife(int i) { life = i; }
    int getLife() { return life; }

    void setAttack(int i) { attack = i; }
    int getAttack() { return attack; }

};

class Zombie
{
private:
    int life;
    int attack;
    int range;

public:
    Zombie(){}
    Zombie(int i, int j, int k)
    {
        life = i;
        attack = j;
        range = k;
    }

    void setLife(int i) { life = i; }
    int getLife() { return life; }

    void setAttack(int i) { attack = i; }
    int getAttack() { return attack; }

    void setRange(int i) { range = i; }
    int getRange() { return range; }
};

string randomBlock()
{
    string possibleBlocks[8] = {"h", "p", "r", " ", "^", "v", "<", ">"};
    return possibleBlocks[rand() % 8];
}

int main()
{
    cout << "Default Game Settings" << endl;
    cout << "------------------------------------------" << endl;

    srand(time(NULL));

    int dsg1 = 3;
    dsg1 = rand() % 3 + 3;
    while (dsg1 % 2 == 0)
    {
        dsg1 = rand() % 3 + 3;
    }
    cout << "Board Rows    : " << dsg1 << endl;

    int dsg2 = 9;
    dsg2 = rand() % 13 + 7;
    while (dsg2 % 2 == 0)
    {
        dsg2 = rand() % 13 + 7;
    }
    cout << "Board Columns : " << dsg2 << endl;

    int dsg3;
    dsg3 = rand() % 3 + 1;

    cout << "Zombie Count  : " << dsg3 << endl
         << endl;

    string dsg4;
    cout << "Do you wish to change the game settings (y/n): ";
    cin >> dsg4;
    system("CLS");

    if (dsg4 == "y")
    {
        cout << "Board Setting" << endl;
        cout << "---------------------------" << endl;
        cout << "Enter Rows => ";
        cin >> dsg1;
        while (dsg1 % 2 == 0 || dsg1 > 5)
        {
            cout << "Please re-enter an ODD NUMBER (<=5): ";
            cin >> dsg1;
        }
        cout << endl
             << endl;

        cout << "Board Setting" << endl;
        cout << "---------------------------" << endl;
        cout << "Enter Columns => ";
        cin >> dsg2;
        while (dsg2 % 2 == 0 || dsg2 > 20)
        {
            cout << "Please re-enter an ODD NUMBER (<=19): ";
            cin >> dsg2;
        }
        cout << endl
             << endl;

        cout << "Zombie Settings" << endl;
        cout << "---------------------------" << endl;
        cout << "Enter number of zombies => ";
        while (true)
        {

            cin >> dsg3;
            if (dsg3 > 3)
            {
                cout << "Please re-enter the Zombie count (<=3): ";
            }
            else
            {
                break;
            }
        }

        cout << endl
             << endl;
        cout << "Settings Updated." << endl;

        cout << "Press any key to Continue ";
        getch();
    }

    string blocks[dsg1][dsg2];

    for (int i = 0; i < dsg1; i++)
    {
        for (int j = 0; j < dsg2; j++)
        {
            blocks[i][j] = randomBlock();
        }
    }

    // int Xcoordinate =
    // int Ycoordinate =
    blocks[(dsg1 + 1) / 2 - 1][(dsg2 + 1) / 2 - 1] = "A"; // Alien

    Alien a = Alien(100 , 0);

    Zombie zombies[dsg3];


    for (int i = 1; i <= dsg3; i++)
    {
        int xc = rand() % dsg2;
        int yc = rand() % dsg1;

        while (blocks[yc][xc] == "A" || blocks[yc][xc] == "1" || blocks[yc][xc] == "2")
        {
            xc = rand() % dsg2;
            yc = rand() % dsg1;
        }

        blocks[yc][xc] = to_string(i);

        zombies[i - 1] = Zombie( (rand() % 4 + 2) *50, (rand() % 4 + 2) *5, (rand() % 3 + 1 ) );
    }

//whie starts here
    system("CLS");

    string title1;
    string title2;
    cout << " ||| Alien vs Zombie ||| " << endl;

    cout << endl;
    cout << "    ";

    for (int col = 0; col < dsg2; col++)
    {
        cout << "+-";
    }
    cout << "+";
    cout << endl;

    for (int i = 1; i <= dsg1; i++) // row
    {
        if (i < 10)
        {
            cout << "  ";
        }
        else
        {
            cout << " ";
        }
        cout << i << " ";

        for (int j = 0; j < dsg2; j++) // column
        {
            cout << "|" << blocks[i - 1][j];
        }
        cout << "|" << endl;
        cout << "    ";

        for (int k = 0; k < dsg2; k++) // column
        {
            cout << "+-";
        }

        cout << "+" << endl;
    }

    if (dsg2 >= 10)
    {
        cout << "     ";
        for (int i = 0; i < dsg2; i++)
        {
            if (i < 9)
            {
                cout << "  ";
            }

            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }

    cout << "     ";

    for (int i = 1; i <= dsg2; i++)
    {
        cout << i % 10;
        cout << " ";
    }

    cout << endl << endl;


    cout << "Alien   : Life " << a.getLife() << ", Attack   " << a.getAttack() << endl;

    for(int i = 0; i < dsg3;  i++)
    {
        cout << "Zombie " << i + 1 << ": Life " << zombies[i].getLife() << ", Attack  " << zombies[i].getAttack() <<  ", Range  " << zombies[i].getRange() << endl;
    }


    


    



    int lllll;
    cin >> lllll;
}

