#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    while(!cin.eof()){
        map<string, int> dici;

        for(int i=0; i<n; i++){
            string x;1 2
            int a;
            cin>>x>>a;
            dici.insert(make_pair(x, a));
        }
        cin.ignore();
        int marc=0;
        long long int soma=0;
        while(1){

            string k;
            stringstream ss;
            cin>>k;
            if(k.size()==1 and k[0]=='.'){
                marc++;
                cout<<soma<<endl;
                soma=0;
                if(marc==m) break;
            }
            ss<<k;
            while(ss>>k){
                if(dici.find(k)!= dici.end()) soma+= dici[k];
            }
        }
        cin>>n>>m;
    }
}
