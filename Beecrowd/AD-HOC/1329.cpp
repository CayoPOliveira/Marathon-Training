#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int N;
    while(1){
        cin>>N;
        if(!N) break;

        int jo, ma;
        jo=ma=0;

        for(int i=0; i<N; i++){
            int a;
            cin>>a;
            if(a) jo++;
            else ma++;
        }

        cout<<"Mary won "<<ma<<" times and John won "<<jo<<" times\n";
    }
}
