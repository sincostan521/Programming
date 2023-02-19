
#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

char grid[ROWS][COLS];
int alienPosX = 0;
int alienPosY = 0;

void initializeGrid() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = '.';
        }
    }
    grid[alienPosX][alienPosY] = 'A';
}

void printGrid() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

void moveAlien(int x, int y) {
    grid[alienPosX][alienPosY] = '.';
    alienPosX += x;
    alienPosY += y;
    grid[alienPosX][alienPosY] = 'A';
}

int main() {
    initializeGrid();
    printGrid();
    moveAlien(1, 1);
    cout << endl;
    printGrid();
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string jibai;

    jibai = "pussy"; 

    cout << jibai <<endl;

    string fuck;

    cout << "ur name:";

    cin >> fuck;

    cout << "Hello " << fuck;

}
