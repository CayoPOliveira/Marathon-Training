#include <iostream>
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);

   int a, b, c;
   cin>>a>>b>>c;
   while(!cin.eof()){
      if(a==b and b==c) cout<<"*\n";
      else if(b==c and b!=a) cout<<"A\n";
      else if(a==c and c!=b) cout<<"B\n";
      else cout<<"C\n";


      cin>>a>>b>>c;
   }
}
