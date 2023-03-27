#include <iostream>
#include <algorithm>
using namespace std;

/**< Titulo */
string title(string F){
    int x = 32, y=F.size();
    if(F[0]>='a' and F[0]<='z') F[0]-=x;
	for(int i=1; i<y; i++){
        if(F[i-1]==' '){
            if(F[i]>='a' and F[i]<='z') F[i]-=x;
        }
        else if(F[i]>='A' and F[i]<='Z') F[i]+=x;
    }
    return F;
}

void titulo(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}

/**< Primo */
bool eh_primo(int x){
	if(x<=1) return false;
	for(int i=2; i<x; i++)
        if(x%i==0) return false;
    return true;
}

void primo(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}

/**< Soma do Vetor */
int soma_vetor(int n, int v[]){
	int cont=0;
	for(int i=0; i<n; i++) cont+=v[i];
	return cont;
}

void soma(){

	int n, v[100100];
	cin >> n;

	for(int i=0;i<n;i++)
		cin >> v[i];

	cout << soma_vetor(n,v) << "\n";
}

/**< Fibonacci */
int fib(int N){
    if(N==1 or N==0) return 1;
    return fib(N-1) + fib(N-2);
}
void fibonacci(){
    int N;
    cin>>N;
    cout<<fib(N);
}

/**< Torres de Hanói */
 void MoveH(int N, int orig[], int dest[], int temp[]){

 }
 void THanoi(){
    int N;
    while(1){
        cin>>N;
        if(N==0) break;
    }
 }

 /**< Ordenação Simples */
 void ord(){
    int N;
    cin>>N;
    int vet[N];
    for(int i=0; i<N; i++) cin>>vet[i];
    sort(vet, vet+N);
    for(int i=0; i<N; i++) cout<<vet[i]<<" ";
 }

 /**< Matryoshka */
 void matryoshka(){
    int N, i, cont=0;
    cin>>N;
    int VetIN[N], VetEND[N], VetCHANGED[N];
    for(i=0; i<N; i++){
        cin>>VetIN[i];
        VetEND[i]=VetIN[i];
    }
    sort(VetEND, VetEND+N);
    for(i=0; i<N; i++){
        if(VetIN[i]!=VetEND[i]){
            cont++;
            VetCHANGED[cont-1]=VetIN[i];
        }
    }
    if(cont==0) cout<<cont<<endl;
    else{
        cout<<cont<<endl;
        sort(VetCHANGED, VetCHANGED+cont);
        for(i=0; i<cont; i++) cout<<VetCHANGED[i]<<" ";
    }
}


/**< INT MAIN */
int main()
{
    matryoshka();
    return 0;
}

