#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int S;
    cin >> S;
    vector<long long int> Q(S), N(S);
    for (int i = 0; i < S; i++)
    {
        cin >> Q[i];
    }
    sort(Q.begin(), Q.end());
    for (int i = 0; i < S; i++)
    {
        cin >> N[i];
    }
    sort(N.begin(), N.end());
    int count = 0;
    for (int i = 0; i < S; i++)
    {
        int aux = Q[i];
        auto it = upper_bound(N.begin(), N.end(), aux);
        if (it != N.end())
        {
            count++;
            *it = 0;
        }
    }
    cout << count << "\n";
}