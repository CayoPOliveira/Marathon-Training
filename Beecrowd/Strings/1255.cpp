#include <bits/stdc++.h>

using namespace std;

int vet[51];

int main()
{
    int N;
    scanf("%d\n", &N);
    while (N--)
    {
        int vet[256];
        for (int i = 0; i < 256; i++)
        {
            vet[i] = 0;
        }
        string s;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < s.size(); i++)
        {
            vet[s[i]]++;
        }
        int max = 0;
        for (int i = 'a'; i <= 'z'; i++)
        {
            if (vet[i] >= max)
                max = vet[i];
        }
        for (int i = 'a'; i <= 'z'; i++)
        {
            if (vet[i] == max)
            {
                cout << char(i);
            }
        }
        cout << "\n";
    }
}
