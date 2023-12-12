#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n, aux;
    while (cin >> str)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> aux;
            cout << str[aux - 1];
        }
        cout << "\n";
    }
}