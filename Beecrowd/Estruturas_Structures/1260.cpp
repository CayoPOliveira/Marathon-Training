#include <iostream>
#include <map>
using namespace std;

int main(){
    int flag=0;
    int n;
    double l=1.0;
    string nome;
    cin>>n;
    cin.ignore();
    cin.ignore();
    while(n--){
        int total=0;
        map<string, double> mapa;

        while(1){
            getline(cin, nome);
            //cout<<nome;
            if(nome=="")
                break;
            if(mapa.find(nome)!=mapa.end())
                mapa.at(nome)+=1.0;
            else
                mapa.insert(make_pair(nome, l));
            total++;
        }
        if(flag) cout<<endl;
        flag++;
        cout.precision(4);
        cout.setf(ios::fixed);
        for(map<string, double>::iterator it=mapa.begin(); it!=mapa.end(); it++){
            cout<<it->first<<" "<< (it->second*100) / total<<endl;
        }
    }
}
