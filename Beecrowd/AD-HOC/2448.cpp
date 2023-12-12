#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> casas(N);
    for (int i = 0; i < N; i++)
    {
        cin >> casas[i];
    }
    int aux, tempo = 0;
    auto pos = casas.begin();
    for (int i = 0; i < M; i++)
    {
        cin >> aux;
        auto t = pos;
        pos = find(casas.begin(), casas.end(), aux);
        tempo += abs(t - pos);
    }
    cout << tempo << "\n";
}