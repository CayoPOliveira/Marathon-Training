#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        int aux;

        aux = N / K;
        N -= aux * K;
        N += aux;
        cout << N << "\n";
    }
}
