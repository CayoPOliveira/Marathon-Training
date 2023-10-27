#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, j;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>j;
        cout<<(j*(j+1)/2) + 1<<endl;
    }
}
