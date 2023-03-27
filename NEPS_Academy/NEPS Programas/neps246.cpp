#include <iostream>
#include <algorithm>
using namespace std;

/**< Matryoshka */
 void matryoshka(){
    int N, i, cont=0;
    cin>>N;
    int VetIN[N], VetEND[N], VetCHANGED[N];
    for(i=0; i<N; i++){
        cin>>VetIN[i];
        VetEND[i]=VetIN[i];
    }
    sort(VetEND, VetEND+N);
    for(i=0; i<N; i++){
        if(VetIN[i]!=VetEND[i]){
            cont++;
            VetCHANGED[cont-1]=VetIN[i];
        }
    }
    if(cont==0) cout<<cont<<endl;
    else{
        cout<<cont<<endl;
        sort(VetCHANGED, VetCHANGED+cont);
        for(i=0; i<cont; i++) cout<<VetCHANGED[i]<<" ";
    }
}
/**< INT MAIN */
int main()
{
    matryoshka();
    return 0;
}


