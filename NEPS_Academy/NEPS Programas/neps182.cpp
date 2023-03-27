#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    int cont=0, soma=0;
    cin>>x;
    vector<int> v;
    for(int i=1; i<=x; i++){
        if(x%i==0){
            cont++;
            soma+=i;
            v.push_back(i);
        }
    }
    cout<<cont<<" divisor(es):";
    for(int i=0; i<v.size(); i++) cout<<" "<<v[i];
    cout<<endl<<"Soma de divisores = "<<soma<<endl;
    if(cont==2) cout<<"Primo"<<endl;
    else cout<<"Nao primo"<<endl;
}

