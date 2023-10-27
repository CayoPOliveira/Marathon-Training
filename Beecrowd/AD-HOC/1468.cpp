#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, n, c;
    cin >> p >> n >> c;
    while (p && n && c)
    {
        int mat[n][p];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < p; j++)
            {
                cin >> mat[i][j];
            }
        }
        long long int palitos = 0;

        for (int j = 0; j < p; j++)
        {
            for (int i = 0; i < n; i++)
            {
                int flag = 0;
                while (i < n && mat[i][j])
                {
                    flag++;
                    i++;
                }
                if (flag >= c)
                    palitos++;
            }
        }
        cout << palitos << "\n";
        cin >> p >> n >> c;
    }
    return 0;
}
