#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, a;
    cin >> N >> M;
    set<int> fig;
    while (M--)
    {
        cin >> a;
        fig.insert(a);
    }
    cout << N - fig.size() << "\n";
}
