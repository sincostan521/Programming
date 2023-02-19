#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> split(string text)
{
    stringstream ss(text);
    string item;
    vector<int> tokens;
    while (getline(ss, item, ' '))
    {
        tokens.push_back(stoi(item));
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

        vector<int> splittedIntegers = split(a);
        cout << "Output:" << endl;
        // --- Write your code here ---
        if (splittedIntegers[0] != splittedIntegers[1])
        {
            cout << "NOT EQUAL" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }

        if (splittedIntegers[0] * -1 <= 0 == splittedIntegers[1] * -1 <= 0)
        {
            cout << "SaME SIGN" << endl;
        } else {
            cout << "DIFFERENT SIGN" << endl;
        }
    }

}