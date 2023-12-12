#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x, aux;
    int k;
    getline(cin, x);
    scanf("%d\n", &k);
    int menor = 100000000;
    int idx = -1;
    for (int i = 0; i < 5; i++)
    {
        getline(cin, aux);
        int dist = 0;
        for (int j = 0; j < x.length(); j++)
        {
            if (x[j] != aux[j])
                dist++;
        }
        if (dist < menor)
        {
            idx = i + 1;
            menor = dist;
        }
    }
    if (menor > k)
        cout << -1 << "\n";
    else
        cout << idx << "\n"
             << menor << "\n";
}