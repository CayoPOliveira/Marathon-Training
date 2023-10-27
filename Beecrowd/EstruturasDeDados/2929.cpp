#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    long long int Vet[N];
    int i=0;
    for(int k=0; k<N; k++){
        char op[5];
        scanf("%s", op);
        if(op[0]=='P' and op[1]=='U'){
            scanf("%lld", &Vet[i]);
            i++;
        }
        else if(op[0]=='P' and op[1]=='O'){
            if(i==0) cout<<"EMPTY"<<endl;
            if(i>0) i--;
        }
        else{
            if(i==0){
                cout<<"EMPTY"<<endl;
            }
            else{
                cout<<*min_element(Vet, Vet+i)<<endl;
            }
        }
    }
}

