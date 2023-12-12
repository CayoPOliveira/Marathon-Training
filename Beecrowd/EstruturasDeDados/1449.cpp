#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d\n", &T);
    while (T--)
    {
        int M, N;
        scanf("%d%d\n", &M, &N);
        map<string, string> dicionario;
        string jap, port;
        while (M--)
        {
            getline(cin, jap);
            getline(cin, port);
            dicionario.insert(make_pair(jap, port));
        }
        while (N--)
        {
            getline(cin, jap);
            istringstream iss(jap);
            int flag = 0;
            while (iss >> port)
            {
                if (flag)
                    cout << " ";
                flag++;
                auto it = dicionario.find(port);
                if (it != dicionario.end())
                    cout << dicionario[port];
                else
                    cout << port;
            }
            cout << "\n";
        }
        cout << "\n";
    }
}