#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool flag = true;
    int N;
    cin >> N;
    int c, a;
    cin >> c;
    for (int i = 1; i < N; i++)
    {
        cin >> a;
        if (a > c)
        {
            flag = false;
        }
    }
    if (flag)
        cout << "S\n";
    else
        cout << "N\n";
}
