#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "N -> ";
    cin >> N;

    int height = 7;
    cin >> height;
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height; col++)
        {
            if (row + col >= height / 2 && row + height / 2 >= col && col + height / 2 >= row)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << '\n';
    }
}