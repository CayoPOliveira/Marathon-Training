#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int k, n;
    cin>>k>>n;
    while(!cin.eof()){
        int vet[k];
        bitset<100001> bs;
        bs.reset();

        for(int i=0; i<k; i++){
            int a;
            cin>>a;
            if(!bs[a]){
                vet[i]=a;
                bs.set(a);
            }
            else{
                vet[i]=0;
            }
        }
        int teste=0;
        for(int i=0; i<k; i++){
            if(vet[i]){
                if(teste) cout<<" ";
                teste++;
                cout<<vet[i];
            }
        }
        cout<<endl;
        cin>>k>>n;
    }
}
