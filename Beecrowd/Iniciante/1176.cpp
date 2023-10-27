#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    vector<long long int> Fib(65);
    Fib[0] = 0;
    Fib[1] = Fib[2] = 1;
    for(int i=3; i<61; i++){
        Fib[i] = Fib[i-2]+Fib[i-1];
    }

        int x;
    while(N--){
        cin>>x;
        cout<<"Fib("<<x<<") = "<<Fib[x]<<"\n";
    }

    return 0;  
}
