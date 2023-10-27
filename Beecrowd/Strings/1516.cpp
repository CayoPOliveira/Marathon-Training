#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    while (N and M)
    {
        char mat[N][M];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cin >> mat[i][j];
            }
        }
        int A, B;
        cin >> A >> B;
        A /= N;
        B /= M;
        for (int i = 0; i < N; i++)
        {
            for (int a = 0; a < A; a++)
            {
                for (int j = 0; j < M; j++)
                {
                    for (int b = 0; b < B; b++)
                        cout << mat[i][j];
                }
                cout << "\n";
            }
        }
        cout << "\n";
        cin >> N >> M;
    }
    return 0;
}
