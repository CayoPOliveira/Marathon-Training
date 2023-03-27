#include <iostream>
#include <set>
 using namespace std;

 int main(){
    int casos;
    cin>>casos;
    while(casos--){
        int in;
        cin>>in;
        int N_Vert, N_Arest;
        cin>>N_Vert>>N_Arest;
        set<int> vert[N_Vert+1];
        for(int i=0; i<N_Arest; i++){
            int a, b;
            cin>>a>>b;
            vert[a].insert(b);
            vert[b].insert(a);
        }
        int Arestas=0;
        for(int i=0; i<N_Vert; i++){
            /**cout<<"Vertice "<<i<<": "<<vert[i].size()<<endl;
            for(auto it=vert[i].begin(); it!=vert[i].end(); it++){
                cout<<*it<<" ";
            }
            cout<<endl;
            */
            Arestas+=vert[i].size();
        }
        cout<<Arestas<<endl;
    }
 }
