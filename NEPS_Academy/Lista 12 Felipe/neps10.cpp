#include <bits/stdc++.h>
using namespace std;
set<int> s;
set<size_t> all_primes(long long int n){

    bool *B = (bool*) malloc((n+1)*sizeof(bool));
    for(size_t i=0; i <= n; i++) B[i]=0;

    for(auto it=s.begin(); it!=s.end(); it++){
        int k=*it;
        for(int i=1; k*i<=n; i++){
            B[k*i]=1;
        }
    }

    set<size_t> primes;
    for(size_t i=2; i <= n; i++){
        if(B[i]==0){
            primes.insert(i);
            for(size_t j=2; j*i<=n; j++){
                if(!B[j*i])primes.insert(j*i);
                B[j*i]=1;
            }
        }
    }
    free(B);
    return primes;
}

int main(){
    ios_base::sync_with_stdio(false);

    long long int N;
    int k;
    cin>>N>>k;

    for(int i=0; i<k; i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    set<size_t> primes = all_primes(N);

    cout<<primes.size()+1<<"\n";
}

