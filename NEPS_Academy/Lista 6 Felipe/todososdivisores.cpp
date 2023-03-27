#include <iostream>
using namespace std;

int main()
{
    int flag=0;
    int x;
    cin>>x;
    for(int i=1; i<=x; i++){
        if(x%i==0){
            if(flag) cout<<" ";
            flag++;
            cout<<i;
        }
    }
    cout<<endl;
}
