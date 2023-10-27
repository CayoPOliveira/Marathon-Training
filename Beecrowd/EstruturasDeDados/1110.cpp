#include <bits/stdc++.h>

using namespace std;

int vet[51];

int main()
{
    int i = 1, j;
    while (i)
    {
        cin >> i;
        deque<int> dq;
        if (i == 0)
            break;
        for (j = 1; j <= i; j++)
            dq.push_front(j);

        cout << "Discarded cards:";
        while (dq.size() > 1)
        {
            cout << " " << dq.back();
            dq.pop_back();
            dq.push_front(dq.back());
            dq.pop_back();
            i = dq.back();
            if (dq.size() > 1)
                cout << ",";
        }
        cout << "\nRemaining card: " << dq.front() << "\n";
    }
}
