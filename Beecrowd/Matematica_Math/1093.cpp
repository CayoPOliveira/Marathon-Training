#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   while(1){
      int Ev1, Ev2, At, D, tmp;
      cin>>Ev1>>Ev2>>At>>D;
      if(!Ev1 && !Ev2 && !At && !D) break;
      //cout<<"OI"<<endl;

      double d;
      double Pi;

      tmp = Ev1; Ev1 = 0;
      while(tmp > 0){ tmp -= D; Ev1++; }
      tmp = Ev2; Ev2 = 0;
      while(tmp > 0){ tmp -= D; Ev2++; }

      //cout<<"oi"<<endl;
      if(At == 3) {
         Pi= (double)Ev1/(double)(Ev1 + Ev2);
      }else{
         d = 1.0 - (6 - At)/6.0, d = (1 - d)/d;
         Pi= (1.0 - pow(d, Ev1))/(1.0 - pow(d, Ev1 + Ev2));
      }

      cout << fixed << setprecision(1);
      cout<<Pi*100<<"\n";

   }
}

