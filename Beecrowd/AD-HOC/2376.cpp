#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v;
    for (int i = 0; i < 16; i++)
    {
        v.push_back('A' + i);
    }
    int i = 0;
    int a, b;
    for (int j = 0; j < 16; j++)
    {
        cin >> a >> b;
        if (a > b)
            v.push_back(v[i]);
        else
            v.push_back(v[i + 1]);

        i += 2;
    }
    // cout << v.size() << "\n";
    cout << v[30] << "\n";
    return 0;
}
