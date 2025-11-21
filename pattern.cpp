#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// programs for the pattern
void print0(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void print1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print3char(char n)
{
    for (char i = 'A'; i <= n; i++)
    {

        for (char j = 'A'; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print4(int n)
{
    for (int i = 0; i < n; i++)
    {

        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // star
        for (int j = 1; j <= i * 2; j++)
        {
            cout << " ";
        }
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }



     for (int i = 1; i <= n; i++)
    {//12345

        // space
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        // star
        for (int j = 1; j <= n*2-i*2; j++)
        {
            cout << " ";
        }
        // space
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    char n;
    cout << "entr the number of row you wanted in your pattern " << endl;
    cin >> n;
    print3char(n);
    return 0;
}
