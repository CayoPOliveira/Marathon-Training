#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int g;
    cin >> N;
    long double melhor = 123456789.00, p;
    while (N--)
    {
        cin >> p >> g;
        if (1000 * p / g < melhor)
            melhor = 1000 * p / g;
    }
    printf("%.2Lf\n", melhor);
}