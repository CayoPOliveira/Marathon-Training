#include<iostream>
#include<cstdio>
#include<bitset>
#include<algorithm>

using namespace std;

int main(){
    int inst;
    scanf("%d", &inst);
    //cin>>inst;
    while(inst--){
        int n;
        scanf("%d", &n);
        //cin>>n;
        bitset<61> vet[n+1];
        for(int i=1; i<=n; i++){
            int j;
            scanf("%d", &j);
            //cin>>j;
            while(j--){
                int x;
                scanf("%d", &x);
                //cin>>x;
                vet[i].set(x);
            }
        }

        int q;
        scanf("%d", &q);
        //cin>>q;
        while(q--){
            int op, a, b;
            scanf("%d%d%d", &op, &a, &b);
            //cin>>op>>a>>b;

            bitset<61> R;
            if(op==1){

                R=vet[a] & vet[b];
                printf("%d\n", R.count());
            }
            if(op==2){

                R=vet[a] | vet[b];
                printf("%d\n", R.count());
            }

        }
    }
}
