#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

string trim(string line)
{
    string newString;

    for (char ch : line)
    {
        if (ch == '\n' || ch == '\r')
            continue;
        newString += ch;
    }

    return newString;
}

vector<int> split(string text)
{
    stringstream ss(text);
    string item;
    vector<int> tokens;
    while (getline(ss, item, ' '))
    {
            tokens.push_back(stoi(item));
            cout<<item;
    }
    return tokens;
}

int main()
{
    int N;
    cout << "N -> ";
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        cout << "\nInput:" << endl;
        // --- Write your code here ---
        string a;
        cin >> a;
        a=trim(a);
        vector<int> g=split(a);
        for (int j = 0; j < g[0]; j++)
        {
        }

        cout << "Output:" << endl;
        // --- Write your code here ---
        srand(time(NULL))
        cout << rand() % 2 + 1;


    }
}
