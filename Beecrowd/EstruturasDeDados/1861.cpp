#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, int> murders;
    string a, b;
    while (cin >> a >> b)
    {
        murders[a]++;
        murders[b] = -1000;
    }

    cout << "HALL OF MURDERERS\n";
    for (auto it = murders.begin(); it != murders.end(); ++it)
    {
        if ((*it).second > 0)
            cout << (*it).first << " " << (*it).second << "\n";
    }
}
