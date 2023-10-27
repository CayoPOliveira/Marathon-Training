#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int boa = 0, mal = 0;
    char c;
    string s;
    set<string> ordem;
    while (n--)
    {
        cin >> c;
        if (c == '+')
            boa++;
        else
            mal++;
        cin >> s;
        ordem.insert(s);
    }
    for (auto it = ordem.begin(); it != ordem.end(); ++it)
    {
        cout << *it << "\n";
    }
    cout << "Se comportaram: " << boa << " | Nao se comportaram: " << mal << "\n";
    return 0;
}
