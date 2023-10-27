#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int16_t a, b, c;
    cin >>a>>b>>c;

    int64_t menor = 2*b + 4*c, aux1 = 2*a + 2*c, aux2 = 4*a + 2*b;
    if(menor > aux1) menor = aux1;
    if(menor > aux2) menor = aux2;

    cout<<menor<<"\n";


    return 0;
}
