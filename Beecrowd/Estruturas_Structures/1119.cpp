#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int N, k, m;
    cin>>N>>k>>m;
    while(N && k && m){
        bitset<20> cand;
        cand.set(0);
        for(int i=N+1; i<20; i++){
            cand.set(i);
        }
        int i=0, j=N+1;
        int virg=0;
        while(!cand.all()){
            for(int cont=0; cont<k;){
                i++;
                if(i>N) i=1;
                if(!cand[i]){
                    cont++;
                }
            }
            for(int cont=0; cont<m;){
                j--;
                if(j<1) j=N;
                if(!cand[j]){
                    cont++;
                }
            }


            if(virg) cout<<",";
            virg++;

            if(i!=j){
                if(i>9)printf(" %d", i);
                else printf("  %d", i);
                if(j>9)printf(" %d", j);
                else printf("  %d", j);
                cand.set(i);
                cand.set(j);
            }
            if(i==j){
                if(i>9)printf(" %d", i);
                else printf("  %d", i);
                cand.set(i);
            }

        }
        cout<<endl;



        cin>>N>>k>>m;
    }
}
