#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, P, F;
    cin >> H >> P >> F;
    while (H and P and F)
    {
        int mat[H][P];
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < P; j++)
            {
                cin >> mat[i][j];
            }
        }

        queue<int> q;
        int aux;
        while (F--)
        {
            cin >> aux;
            q.push(aux);
        }
        for (int j = P - 1; j >= 0; j--)
        {
            int i = 0;
            while (i < H and !mat[i][j])
                i++;
            if (mat[i][j])
                i--;
            while (i >= 0 and !q.empty())
            {
                mat[i][j] = q.front();
                q.pop();
                i--;
            }
        }
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < P; j++)
            {
                if (j != 0)
                    cout << " ";
                cout << mat[i][j];
            }
            cout << "\n";
        }

        cin >> H >> P >> F;
    }
}