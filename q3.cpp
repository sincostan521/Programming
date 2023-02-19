#include <iostream>
#include <cctype>
using namespace std;

string getString(char x)
{
    string s(1, x);
 
    return s;  
}

int main()
{
    int N;
    cout << "N -> ";
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        string ll[5] = {"a", "e", "i", "o", "u"};
        cout << "\nInput:" << endl;
        int vowelCount=0;
        // --- Write your code here ---
        string text;
        cin >> text;
        for (int i =0; i < text.length() ;i++) {
            for(int j=0; j<5; j++){
                if(getString(text[i]) == ll[j]){
                    vowelCount++;
                    break;
                }
            }
        }
        


        cout << "Output:" << endl;
        // --- Write your code here ---
        

        cout << vowelCount;
    }

}