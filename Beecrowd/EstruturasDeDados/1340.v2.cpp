#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    while (cin >> N)
    {
        stack<int> st;
        queue<int> qu;
        priority_queue<int> pq;
        int f1 = 1, f2 = 1, f3 = 1;
        int cmd, x, aux;
        while (N--)
        {
            cin >> cmd >> x;
            if (cmd - 1)
            {
                aux = st.top();
                st.pop();
                if (aux != x)
                    f1 = 0;
                aux = qu.front();
                qu.pop();
                if (aux != x)
                    f2 = 0;
                aux = pq.top();
                pq.pop();
                if (aux != x)
                    f3 = 0;
            }
            else
            {
                st.push(x);
                qu.push(x);
                pq.push(x);
            }
        }

        if (!(f1 + f2 + f3))
        {
            cout << "impossible\n";
        }
        else if (f1 + f2 + f3 != 1)
        {
            cout << "not sure\n";
        }
        else if (f1)
        {
            cout << "stack\n";
        }
        else if (f2)
        {
            cout << "queue\n";
        }
        else if (f3)
        {
            cout << "priority queue\n";
        }
    }
    return 0;
}
