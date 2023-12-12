#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q, caso = 1, aux;
    cin >> N >> Q;
    while (N and Q)
    {
        cout << "CASE# " << caso << ":\n";
        vector<int> V(N);
        for (int i = 0; i < N; i++)
            cin >> V[i];
        sort(V.begin(), V.end());
        for (int i = 0; i < Q; i++)
        {
            cin >> aux;
            int flag = 0;
            for (int j = 0; j < N; j++)
            {
                if (V[j] == aux)
                {
                    cout << aux << " found at " << j + 1 << "\n";
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                cout << aux << " not found\n";
            }
        }
        cin >> N >> Q;
        caso++;
    }
}