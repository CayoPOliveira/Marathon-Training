#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    stack<long long int> S;
    stack<long long int> min;
    long long int val;
    string op;
    while (N--)
    {
        cin >> op;
        if (op == "PUSH")
        {
            cin >> val;
            S.push(val);
            if (min.empty() or min.top() >= S.top())
                min.push(val);
        }
        else if (op == "POP")
        {
            if (S.empty())
            {
                cout << "EMPTY\n";
                continue;
            }
            if (min.top() == S.top())
                min.pop();
            S.pop();
        }
        else if (op == "MIN")
        {
            if (S.empty())
            {
                cout << "EMPTY\n";
                continue;
            }
            cout << min.top() << "\n";
        }
    }
}