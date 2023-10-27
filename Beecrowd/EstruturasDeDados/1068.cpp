#include <bits/stdc++.h>
using namespace std;

int main()
{
    string c;
    while (cin >> c)
    {
        stack<int> S;
        bool flag = 1;
        for (int i = 0; i < c.length(); i++)
        {
            if (c[i] == '(')
            {
                S.push(1);
            }
            if (c[i] == ')')
            {
                if (S.empty())
                    flag = 0;
                else
                    S.pop();
            }
        }
        if (!S.empty())
            flag = 0;
        if (flag)
            cout << "correct\n";
        else
            cout << "incorrect\n";
    }
    return 0;
}
