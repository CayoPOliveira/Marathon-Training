#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main(){

    int n;
    double ans_saq, ans_bloq, ans_atk, t_s, t_b, t_a, ts_s, ts_b, ts_a;
    ans_atk=ans_bloq=ans_saq=t_s=t_b=t_a=ts_s=ts_b=ts_a=0.0;
    cin>>n;
    for(int i=0; i<n; i++){
        string nome;
        double a, b, c, d, e, f;
        cin>>nome;
        cin>>a>>b>>c>>d>>e>>f;
        t_s+=a;
        t_b+=b;
        t_a+=c;
        ts_s+=d;
        ts_b+=e;
        ts_a+=f;
    }
    ans_saq = 100.0*ts_s/t_s;
    ans_bloq = 100.0*ts_b/t_b;
    ans_atk = 100.0*ts_a/t_a;

    printf("Pontos de Saque: %.2f ", ans_saq); cout<<"%.";
    printf("\nPontos de Bloqueio: %.2f ", ans_bloq); cout<<"%.";
    printf("\nPontos de Ataque: %.2f ", ans_atk); cout<<"%.";
    cout<<"\n";

    return 0;
}