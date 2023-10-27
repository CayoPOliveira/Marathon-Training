#include <bits/stdc++.h>

using namespace std;

int main(){
    long  long int a, b, c;
    cin>>a>>b>>c;
    char d;
    cin>>d;
    long long int k;
    if(d=='A'){
        k = floor(a+(1.5*b)+(2.5*c));
    }
    else if(d=='B'){
        k= floor((2.0*a/3.0)+b+(5.0*c/3.0));
    }
    else{
        k =floor((2.0*a/5.0)+(3.0*b/5.0)+c);
    }
    cout<<k<<"\n";
}


