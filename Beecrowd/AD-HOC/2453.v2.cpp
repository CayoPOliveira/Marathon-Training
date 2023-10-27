#include <bits/stdc++.h>
using namespace std;

int main()
{
    string c;
    getline(cin, c);
    for (int i = 0; i < c.length(); i++)
    {
        if (c[i] == 'p')
            i++;
        cout << c[i];
    }
    cout << "\n";
    return 0;
}
