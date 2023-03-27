#include <iostream>
using namespace std;

/**< Contagem de Algarismos */
void contagem(){
    int N;
    string Num;
    int Val[10];
    for(int i=0; i<10; i++) Val[i]=0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>Num;
        for(int j=0; j<Num.size(); j++){
            int k = Num[j]-'0';
            Val[k]++;
        }
    }
    for(int i=0; i<10; i++){
        cout<<i<<" - "<<Val[i]<<endl;
    }
}

/**< INT MAIN */
int main(){
    contagem();
    return 0;
}
