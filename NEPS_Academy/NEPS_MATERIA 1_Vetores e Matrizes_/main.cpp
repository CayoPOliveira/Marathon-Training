#include <iostream>
using namespace std;

/**< Bancos debentures (Sub-Prime) *//**< //////////////////// */

struct bank{
    int n_bank;
    int reserva;
};

void bancos(){
    int flag, //S=0 ou N=1
        nb=0,   //número de bancos
        nd=0,   //número de debentures
        bd=0,   //banco devedor
        bc=0,   //banco credor
        val=0;  //valor do debenture

    while(1){
        flag=1;
        cin >> nb >> nd;
        if(nb == 0) break;

        struct bank banco[nb];
        for(int i=0; i<nb; i++)
        {
            banco[i].n_bank = i+1;
            cin >> banco[i].reserva;
        }

        for(int i=0; i<nd; i++)
        {
            cin >> bd >> bc >> val;
            banco[bd-1].reserva-=val;
            banco[bc-1].reserva+=val;
        }

        for(int i=0; i<nb; i++)
        {
            if(banco[i].reserva<0) flag=0;
        }

        if(flag==0)
        {
            cout<<"N"<<endl;
            continue;
        }
        cout<<"S"<<endl;
    }
}

/**< Código (OBI 2015) */ /**< //////////////// */
void codigo()
{
    int n, cont=0;
    cin >> n;
    int vet[n];
    for(int i=0; i<n; i++){
        cin>>vet[i];
        if(i>1)
            if(vet[i-2]==1)
                if(vet[i-1]==0)
                    if(vet[i]==0)
                        cont++;
    }
    cout << cont;
}

/**< Campo minado */ /**< //////////////// */
void campominado()
{
    int n, x;
    cin >> n;
    int vetr[n];

    for(int i=0; i<n; i++) vetr[i]=0;

    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x==0) continue;

        if(i-1>=0)vetr[i-1]++;
        vetr[i]++;
        if(i+1<n)vetr[i+1]++;
    }

    for(int i=0; i<n; i++) cout<<vetr[i]<<endl;
}

/**< Fita Colorida */ /**< //////////////// */
int ZeroE(int vet[], int i)
{
    int cont=0, j;
    for(j=i; vet[j]!=0 and vet[j]!=10; j--, cont++);
    if(vet[j]==10 or cont>9) cont=9;
    return cont;
}
int ZeroD(int vet[], int i)
{
    int cont=0, j;
    for(j=i; vet[j]!=0 and vet[j]!=10; j++, cont++);
    if(vet[j]==10 or cont>9) cont=9;
    return cont;
}

void fita()
{
    int n, contE, contD;
    cin>>n;
    int vet[n+2];

    vet[0]=vet[n+1]=10;
    for(int i=1; i<=n; i++) cin>>vet[i];

    for(int i=1; i<n+1; i++)
    {
        if(vet[i]==0) continue;
        contE=ZeroE(vet, i);
        contD=ZeroD(vet, i);
        if(contE < contD) vet[i]=contE;
        else vet[i]=contD;
    }

    for(int i=1; i<n+1; i++) cout << vet[i] << " ";
}

/**< Quadrado Mágico *//**< //////////////////////////// */
void quadmag()
{
    /**< Quando flag == 0 sinifica q não é quadrado mágico */
    int i, j, L, soma=0, somaref=0, flag=1;
    cin>>L;
    int mat[L][L];

    for(i=0; i<L; i++) /**< Guardar as informações do quadrado */
        for(j=0; j<L; j++)
            cin>>mat[i][j];

    for(j=0; j<L; j++) /**< Primeira linha vai ser a referencia */
        somaref+=mat[0][j];

    for(i=0; i<j; i++) /**< Soma todas as linhas e compara a referencia */
    {
        for(j=0; j<L; j++)
        {
            if(j==0) soma = 0;
            soma += mat[i][j];
        }
        if(somaref!=soma)flag=0;
    }
    if(flag==1) /**< Todas as linhas tem mesmo valor */
    {
        for(j=0; j<L; j++) /**< Soma todas as colunas e compara a referencia */
        {
            for(i=0; i<L; i++)
            {
                 if(i==0) soma = 0;
                soma += mat[i][j];
            }
            if(somaref!=soma)flag=0;
        }
        if(flag==1) /**< Todas as colunas tem mesmo valor */
        {
            soma=0;
            for(i=0, j=0; i<L; i++, j++) /**< Diagonal a00 até aLL */
            {
                soma+=mat[i][j];
            }
            if(somaref!=soma)flag=0;
            if(flag==1)
            {
                soma=0;
                for(i=0, j=L-1; j>=0; i++, j--) /**< Diagonal a0L até aL0 */
                {
                    soma+=mat[i][j];
                }
                if(somaref!=soma)flag=0;
            }
        }
    }


    if(flag == 1) cout << soma;
    else cout << "-1";
}

/**< Torre */ /**< /////////////////////////////////// */
void torre()
{
    int n, somaref=0, soma=0;
    cin>>n;
    int matriz[n][n], lin[n], col[n];

    for(int i=0; i<n; i++) col[i]=0;
    for(int i=0; i<n; i++)
    {
        lin[i]=0;
        for(int j=0; j<n; j++){
            cin>>matriz[i][j];
            lin[i]+=matriz[i][j];
            col[j]+=matriz[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            soma = lin[i]+col[j]-(2*matriz[i][j]);
            if(soma>somaref) somaref=soma;
        }
    }

    cout<<somaref;
}
/**< Lari Sub-Prime programa */ /**< //////////////////////////// */
void larimain()
{
	int nb, nd, i, bc, marc=0, vdivi, bk;
	while(1)
	{
		marc=0;
		cin>>nb>>nd;
		if(nb==0 and nd==0) break;
		int vetor[nb]; // valor do caixa
		for(i=0; i<nb; i++) cin>>vetor[i];
		for(i=0; i<nd; i++)
		{
				cin>>bk>>bc>>vdivi;
				vetor[bk-1]= vetor[bk-1]-vdivi;
				vetor[bc-1]= vetor[bc-1]+vdivi;
		}
		for(i=0; i<nb; i++)
		{
			if (vetor[i]<0)
			{ 	marc=1;
				break;
			}
		}
		if(marc==0) cout<<"S"<<endl;
		else cout<<"N"<<endl;
	}
}

/**< INT MAIN *//**< ////////////// */
int main()
{
    torre();
}
