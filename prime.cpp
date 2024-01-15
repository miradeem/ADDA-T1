#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    char a;
    cin >> a;

    if ((65 < (int)a) && ((int)a < 90))
    {
        cout<< 1;
        return 1;
    }
    else if ((97 < (int)a) && ((int)a < 122))
    {
        cout<< 0;
        return 0;
    }
        cout<<-1;
    
    return 5;
}