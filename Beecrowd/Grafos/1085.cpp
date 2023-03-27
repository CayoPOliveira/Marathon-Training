#include <bits/stdc++.h>

using namespace std;

const int INF = 99999999;
typedef pair<int, int> pii;
typedef vector< pair<int, int> > vpii;
map<string, int> chave;
map<int,string> relacao ;

int dijkstra(vpii G[], int N, int x, int y)
{//x->...->y

  bool visited[N+1]; int distance[N+1]; int pai [ N + 1 ] ; int contador ; int contador2 ;
  priority_queue<pii> PQ;//-peso, v (próximo vizinho)

  for(int i=0; i<N+1; i++){
    visited[i]=false;
    distance[i]=INF; //valor máximo (infinito)
    pai [ i ] = 0 ;
  }

  distance[x] = 0; //inicio em x
  PQ.push({0,x});

  while (!PQ.empty()) {
    int v = PQ.top().second; PQ.pop();

    if (visited[v]) continue;
    visited[v] = true;
    contador = 0 ; contador2 = 0 ;
    for (auto w: G[v])
      {
	int b = w.first, peso = w.second;
	if ( b != pai [ b ] )
	  {
	    if (distance[v]+peso < distance[b] )
	      {
		if ( pai [ v ] != 0 and relacao [ b ] [ 0 ] == 'P' )
		  {
		    if ( relacao [ pai [ v ] ] [ 1 ] != relacao [ b ] [ 1 ] )
		      {
			pai [ b ] = v ;
			distance[b] = distance[v]+peso;
			PQ.push({-distance[b], b}); //ordenação crescente em PQ
		      }
		    else contador = 1 ;
		  }
		else
		  {
		    pai [ b ] = v ;
		    distance[b] = distance[v]+peso;
		    PQ.push({-distance[b], b}); //ordenação crescente em PQ
		  }
	      }
	  }
      }
    if ( contador and v != y ) { visited [ v ] = false ; distance [ v ] = INF ; }
  }

  return distance[y]; //RETORNA A DISTANCIA EM Y
  /*
    return distance; //RETORNA O VETOR[INT] DE DISTANCIAS
  */
}

int main()
{
  ios_base::sync_with_stdio(false);
  int N , i;
  string O, D;
  while(1)
    {
      chave.clear () ;
      relacao.clear () ;
      cin >> N ;
      if( !N ) break ;
      cin >> O >> D ;
      O = "I" + O ; D = "I" + D ;
      chave[O] = 1; relacao [ 1 ] = O ;
      chave[D] = 2; relacao [ 2 ] = D ;
      int next_key=3;

      vpii G[10000];

      for(int i=0; i<N; i++){
	string a, b, word;
	cin>>a>>b>>word;
	a = "I" + a ; b = "I" + b ; word = "P" + word ;
	int Len_word = word.size() - 1 ;
	auto it1 = chave.find(a);
	if(it1==chave.end()) { chave[a]=next_key; relacao [ next_key++ ] = a ; }
	auto it2 = chave.find(b);
	if(it2==chave.end()) { chave[b]=next_key; relacao [ next_key ++ ] = b ; }
	chave[word] = next_key; relacao [ next_key ++ ] = word ;

	int n_a = chave[a], n_b = chave[b], n_word = chave[word];

	G[n_word].push_back(make_pair(n_a, 0)); G[n_word].push_back(make_pair(n_b, 0));
	G[n_a].push_back(make_pair(n_word, Len_word)); G[n_b].push_back(make_pair(n_word, Len_word));

      }
    int D = dijkstra(G, next_key, 1, 2);

    if(D!=INF) cout<<D<<"\n";
    else cout<<"impossivel\n";
  }
}

