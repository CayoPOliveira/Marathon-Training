#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int p;
    cin >> p;
    int n = p / 2;
    int i = 1, count = 0;
    do
    {
        // cout << i << " ";
        if (i <= n)
            i *= 2;
        else
            i = ((i - (n + 1)) * 2) + 1;
        count++;

    } while (i != 1);
    // cout << "\n";
    cout << count << "\n";
}
