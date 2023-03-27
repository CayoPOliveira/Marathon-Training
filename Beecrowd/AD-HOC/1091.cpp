#include <bits/stdc++.h>

using namespace std;

void print_coord(int n, int m, int x, int y){

   if(x>n) //Leste
   {
      if(y>m) //norte
      {
         cout<<"NE\n";
      }
      else if(y<m) //sul
      {
         cout<<"SE\n";
      }
      else cout<<"divisa\n";
   }
   else if(x<n) //oeste
   {
      if(y>m) //norte
      {
         cout<<"NO\n";
      }
      else if(y<m) //sul
      {
         cout<<"SO\n";
      }
      else cout<<"divisa\n";
   }
   else cout<<"divisa\n";

}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   while(true){
      int K, N, M;
      cin>>K;
      if(!K) break;

      cin>>N>>M;

      for(int i=0; i<K; i++){

         int x, y;
         cin>>x>>y;

         print_coord(N, M, x, y);
      }

   }
}
