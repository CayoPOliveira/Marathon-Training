#include <bits/stdc++.h>
using namespace std;

int main()
{

    int A, L;
    cin >> A;
    string s;
    while (A--)
    {
        int hash = 0;
        cin >> L;
        for (int i = 0; i < L; i++)
        {
            cin >> s;
            for (int j = 0; j < s.size(); j++)
            {
                hash += (s[j] - 'A') + i + j;
            }
        }
        cout << hash << "\n";
    }
}
