#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n!=0){
        string ans, plan;
        int Ano, tempo, ans_t=9999999;
        for(int i=0; i<n; i++){
            cin>>plan>>Ano>>tempo;
            Ano-=tempo;
            if(Ano<ans_t){
                ans_t=Ano;
                ans = plan;
            }
        }
        cout<<ans<<"\n";
        cin>>n;
    }


    return 0;
}