#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef pair<int, int> pii;

int main(){
    //ios_base::sync_with_stdio(false);

    int N, x, y, total =0, i, j, k, a;
    scanf("%d", &N);
    pair<int, int> vet[N];
    i=0;
    while(i<N){
        scanf("%d%d", &x,&y);
        vet[i] = make_pair(x, y);
        i++;
    }

    sort(vet, vet+N);

    i=0;
    while(i<N-1){
        int ref_quad = vet[i].second;
        int ref1=0, ref2=0;
        j=i+1;
        while(j<N){
            if(vet[j].second > ref_quad){
                if(ref1==0){ ref1 = vet[j].second; total++; }
                else if(vet[j].second < ref1){
                    ref1 = vet[j].second;
                    total++;
                }
            }
            else{
                if(ref2==0){ ref2 = vet[j].second; total++; }
                else if(vet[j].second > ref2) {
                    ref2 = vet[j].second;
                    total++;
                }
            }
            j++;
        }
        i++;
    }

    printf("%d\n", total);
}


