#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n>0){
        long long int div=0;
        int ans=0, x=0;
        for(int i=0; i<n; i++){
            cin>>x;
            div+=x;
            if(div%100==0) {
                ans++;
                div=0;
            }
        }

        cout<<ans<<"\n";
        cin>>n;
    }
    return 0;
}