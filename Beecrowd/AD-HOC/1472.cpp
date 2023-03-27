#include <bits/stdc++.h>

using namespace std;

int main(){
   ios_base::sync_with_stdio(false);

   int N;
   cin>>N;
   while(!cin.eof()){
      int Vet[N], somaT=0;
      for(int i=0; i<N; i++){
         cin>>Vet[i];
         somaT+=Vet[i];
         if(i>0) Vet[i]+=Vet[i-1];
      }
      /*
      for(int i=0; i<N; i++){
         cout<<Vet[i]<<" ";
      }
      cout<<endl;
      //*/
      if(somaT%3!=0){
         cout<<"0\n";
      }
      else{
         int s_arc = somaT/3;
         int i, j, k;
         int Triang=0;
         i=j=k=0;
         bool flag;
         while(i!=N-1){
            flag=true;
            while( (Vet[N-1]-Vet[k])+Vet[i]>s_arc and k<N-1){ k++; flag = false;}
            while( Vet[k]-Vet[j]>s_arc and j<N-1){ j++; flag=false; }
            while( Vet[j]-Vet[i]>s_arc and i<N-1){ i++; flag=false; }
            if( (Vet[N-1]-Vet[k])+Vet[i] == Vet[j]-Vet[i] and Vet[j]-Vet[i] == Vet[k]-Vet[j] ){
               Triang++;
               i++;
               flag=false;
            }
            if(flag) break;
         }
         cout<<Triang<<"\n";
      }
      cin>>N;
   }
}
