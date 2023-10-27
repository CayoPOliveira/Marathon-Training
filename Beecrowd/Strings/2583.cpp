#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        set<string> s;
        string a, b;
        int k;
        cin >> k;
        while (k--)
        {
            cin >> a >> b;
            if (b == "chirrin")
            {
                s.insert(a);
            }
            if (b == "chirrion")
            {
                auto it = s.find(a);
                if (it != s.end())
                    s.erase(it);
            }
        }
        cout << "TOTAL\n";
        for (auto it = s.begin(); it != s.end(); ++it)
        {
            cout << *it << "\n";
        }
    }
}
