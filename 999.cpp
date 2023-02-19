#include <iostream>
using namespace std;
int main()
{
    int obs;
    cout << " -|-move to block ";
   
    int jibet;

    cin >> jibet;
    
    if (jibet < 7)
    {    
        cout << "-|- is in block " << jibet; 
        return 0;
    }
    
    else (jibet > 7);
    {
        cout << " -|- is out of the border" << endl;   
    }
    
}