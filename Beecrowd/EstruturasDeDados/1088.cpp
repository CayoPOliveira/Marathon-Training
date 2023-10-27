#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int x, N;
            while(true){
            cin>>N;
            if(!N) break;

            vector<int> Vet(N+1);
            for(int i=1; i<=N; i++){
                  cin>>Vet[i];
            }
            int cont=0;
            for(int i=1; i<=N; i++){
                  while(Vet[i]!=i){
                        int k=Vet[i];
                        int tmp = Vet[k];
                        Vet[k]=Vet[i];
                        Vet[i]=tmp;


                        cont+=2*abs(k-i) - 1;
                  }
            }

            if(cont%2) cout<<"Marcelo\n";
            else cout<<"Carlos\n";
      }
}
