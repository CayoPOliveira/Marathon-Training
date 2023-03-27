#include <bits/stdc++.h>
using namespace std;

int BFS(vector<int> G[], int N, int x, int Pes[], int idade[]){
   int visit[N+1], menor=110;
   for(int i=0; i<=N; i++){
      visit[i]=0;
   }
   visit[x]=1;

   queue<int> fila;
   fila.push(x);

   while(!fila.empty()){

      int v = fila.front();
      fila.pop();
      //cout<<"vizinhos de "<<v<<", vertice: "<<Pes[v]<<"\n";

      for(int i=0; i < G[v].size(); i++){
         int u = G[v][i];
         //cout<<u<<" "<<Pes[u]<<"\n";
         int k=idade[Pes[u]];
         if(menor > k) menor=k;

         if(visit[u]==0){
            visit[u]=visit[v];
            fila.push(u);
         }
      }
      //cout<<"\n";
   }
   if(menor==110) menor=-1;
   return menor;
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int N, M, I;
   cin>>N>>M>>I;
   while(!cin.eof()){
      int   Id[N+1], /**Id[i] = Pessoa de número i equivale ao ponto Id[i] no grafo*/
            Pes[N+1], /**Pes[i] = Ponto no grafo i equivale a pessoa Pes[i]*/
            idade[N+1]; /**idade[i] = Pessoa de número i tem idade igual a idade[i] */
      vector<int> G[N+1];

      for(int i=1; i<=N; i++){
         Id[i]=Pes[i]=i;
         cin>>idade[i];
      }
      for(int i=0; i<M; i++){
         int a, b;
         cin>>a>>b;
         G[b].push_back(a);
      }

      for(int i=0; i<I; i++){
         char op;
         cin>>op;
         if(op=='T'){
            int a, b;
            cin>>a>>b;
            //cout<<"Troca de "<<a<<" com "<<b<<"\n";
            int idtmp = Id[a];
            Id[a]=Id[b];
            Id[b]=idtmp;
            Pes[Id[a]] = a;
            Pes[Id[b]] = b;
         }
         else{
            int e;
            cin>>e;
            //cout<<"BFS do "<<e<<"\n";
            int jovem = BFS(G, N, Id[e], Pes, idade);
            if(jovem!=-1)cout<<jovem<<"\n";
            else cout<<"*\n";
         }

      }

      cin>>N>>M>>I;
      //if(!N) break;
   }

}
