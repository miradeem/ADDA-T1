#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    // Write your code here
    char a;
    cin >> a;

    if ((65 < a) && (a < 90))
    {
        cout<< "1";
    }
    else if ((97 < a) && (a < 122))
    {
        cout<< "0";
    }
    else {    cout<<"-1";}
    }