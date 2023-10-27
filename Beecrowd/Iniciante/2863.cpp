#include <iostream>

using namespace std;

int main()
{
    int T;
    double menor, a;
    cin>>T;
    while(!cin.eof())
    {
        menor=12.0;
        for(int i=0; i<T; i++){
            cin>>a;
            if(a<menor and a>=9.00) menor = a;
        }
        cout.precision(2);
        cout.setf(ios::fixed);
        cout<<menor<<endl;
        cin>>T;
    }
    return 0;
}


