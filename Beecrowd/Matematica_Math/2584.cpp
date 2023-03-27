#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int N;
    cin>>N;
    while(N--){
        int L;
        cin>>L;
        L=L*L;
         double pi = 2 * acos(0.0);
        float area = L/(4.0*tan((36*pi)/180));
        area*=5;
        printf("%.3f\n", area);
    }
}
