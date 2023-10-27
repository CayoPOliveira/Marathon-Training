#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N)
    {
        vector<int> vet(N);
        iota(vet.begin(), vet.end(), 1);
        int m;
        cin >> m;
        while (m)
        {
            bool flag = 1;
            vector<int> v(N);
            v[0] = m;
            for (int i = 1; i < N; i++)
            {
                cin >> v[i];
            }
            stack<int> st;
            int i = 0, j = 0;
            while (i < N)
            {
                if (j != N)
                    while (v[i] >= vet[j])
                    {
                        st.push(vet[j]);
                        j++;
                        if (j == N)
                            break;
                    }
                if (!st.empty())
                    if (v[i] == st.top())
                    {
                        st.pop();
                        i++;
                        continue;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                if (v[i] < vet[j])
                {
                    if (st.empty() or st.top() != v[i])
                    {
                        flag = 0;
                        break;
                    }
                    else
                    {
                        st.pop();
                        i++;
                        continue;
                    }
                }
            }
            if (!st.empty())
                flag = 0;
            if (flag)
                cout << "Yes\n";
            else
                cout << "No\n";

            cin >> m;
        }
        cin >> N;
        cout << "\n";
    }
    return 0;
}
