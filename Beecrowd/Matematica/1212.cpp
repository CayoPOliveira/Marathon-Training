#include <iostream>

using namespace std;

int main(){
    string a, b;
    while(1){
        cin>>a>>b;
        if(a[0]=='0' and b[0]=='0') break;
        int cont=0;

        int i=a.size()-1, j=b.size()-1;
        int x, y;

        bool flag=false;
        while(i>-1 or j>-1)
        {
            if(i>-1) x=a[i]-'0';
            else x=0;
            if(j>-1)y=b[j]-'0';
            else y=0;
            if(flag){
                x++;
                flag=false;
            }
            if(x+y>9){
                cont++;
                flag=true;
            }
            i--;
            j--;
        }
        if(cont==0)
            cout<<"No carry operation."<<endl;
        else if(cont==1)
           cout<<cont<<" carry operation."<<endl;
        else
            cout<<cont<<" carry operations."<<endl;
    }
}
