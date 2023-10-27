#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c, n;
    cin >> c >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (c--)
    {
        pq.push(0);
    }
    int a, b, aux, count = 0;
    while (n--)
    {
        cin >> a >> b;
        aux = pq.top();
        pq.pop();
        if (a > aux)
            aux = a + b;
        else
        {
            if (aux - a > 20)
                count++;
            aux += b;
        }
        pq.push(aux);
    }
    cout << count << "\n";
    return 0;
}
