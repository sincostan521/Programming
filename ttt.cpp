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
    string nextMove;

public:
    Alien()
    {
        nextMove = "";
    }
    Alien(int i, int j)
    {
        life = i;
        attack = j;
        nextMove = "";
    }
    void setLife(int i) { life = i; }
    int getLife() { return life; }

    void setAttack(int i) { attack = i; }
    int getAttack() { return attack; }

    void setNextMove(string i) { nextMove = i; }
    string getNextMove() { return nextMove; }
};

string doSOmeething(Alien &niama) {
    // cout << "Atk is " << alien.getAttack();
    niama.setAttack(199);
    return "doesntmatter";
}

int main() 
{
    Alien hanwai = Alien(100,0);
    Alien hanyang = Alien(90,90);
    hanwai.setAttack(hanwai.getAttack() + 20);
    doSOmeething(hanwai);
    cout << "Atk is now " << hanwai.getAttack();
    int lllll;
    cin >> lllll;
}