#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    char c;
    scanf("%d\n", &N);
    while (N--)
    {
        string S;
        getline(cin, S);
        // cout << S << "\n";
        for (int i = 0; i < S.size(); i++)
        {
            if (('a' <= S[i] and S[i] <= 'z') or ('A' <= S[i] and S[i] <= 'Z'))
                S[i] += 3;
        }
        // cout << S << "\n";
        string newS(S.rbegin(), S.rend());
        S = newS;
        // cout << S << "\n";
        int i = S.size() / 2;
        for (i; i < S.size(); i++)
        {
            S[i] -= 1;
        }
        cout << S << "\n";
    }

    return 0;
}