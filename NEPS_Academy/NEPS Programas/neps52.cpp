#include <iostream>
using namespace std;

int muda(int i)
{
    if(i==0) return 1;
    else return 0;
}
int main()
{
    int x,in,a=0,b=0;

    cin >> x;
    for(int i=0; i<x; i++)
    {
        a=muda(a);

        cin >> in;
        if(in == 1) continue;

        b=muda(b);
    }
    cout << a << endl << b;
}

