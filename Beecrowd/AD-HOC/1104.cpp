#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, aux;
    cin >> a >> b;
    while (a and b)
    {
        set<int> sa, sb;
        for (int i = 0; i < a; i++)
        {
            cin >> aux;
            sa.insert(aux);
        }
        for (int i = 0; i < b; i++)
        {
            cin >> aux;
            sb.insert(aux);
        }
        int trocasA = 0, trocasB = 0;
        for (auto it = sa.begin(); it != sa.end(); ++it)
        {
            if (sb.find(*it) == sb.end())
            {
                trocasA++;
            }
        }
        for (auto it = sb.begin(); it != sb.end(); ++it)
        {
            if (sa.find(*it) == sa.end())
            {
                trocasB++;
            }
        }
        if (trocasA < trocasB)
            cout << trocasA << "\n";
        else
            cout << trocasB << "\n";
        cin >> a >> b;
    }
}