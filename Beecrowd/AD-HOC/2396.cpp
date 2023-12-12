#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> V(N);
    for (int i = 0; i < N; i++)
    {
        V[i].second = i + 1;
        int count = 0, aux = 0;
        for (int j = 0; j < M; j++)
        {
            cin >> aux;
            count += aux;
        }
        V[i].first = count;
    }
    sort(V.begin(), V.end());
    auto it = V.begin();
    for (int i = 0; i < 3; i++)
    {
        cout << (*it).second << "\n";
        ++it;
    }
    return 0;
}