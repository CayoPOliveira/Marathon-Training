#include <iostream>
using namespace std;

/**< Ar�a do triangulo retangulo */
void atin()
{
    int a, b;
    cin>>a>>b;
    cout<<a*b/2;
}

/**< �rea do ret�ngulo */
void aret()
{
    int a, b;
    cin>>a>>b;
    cout<<a*b;
}

/**< Subtra��o */
void subtracao()
{
    int a, b;
    cin>>a>>b;
    cout<<a-b;
}

/**< Rob� de fazenda */
void robo()
{
    int est, /**< n�mero de esta��es */
        comandos, /**< n�mero de comandos */
        prox, /**< esta��o refer�ncia */
        cont=0, /**< contador de vezes */
        x, /**< comando */
        p=1; /**< posi��o do rob� */
    cin>>est>>comandos>>prox;
    if(p==prox)cont++;
    for(int i=0; i<comandos; i++)
    {
        cin>>x;
        p+=x;
        if(p>est) p=1;
        if(p<1) p=est;

        if(p==prox) cont++;
    }
    cout<<cont;

}

/**< Robo de fazenda lari */

void robol()
{
	int ne, nc, comando ,estReferencia, i, cont=0, estAtual=1; //mudei o nome de algumas variaveis pra entender melhor

	cin>>ne>>nc>>estReferencia;
	if(estReferencia==1) cont++;

	for(i=0; i<nc; i++)
	{
		cin>>comando;
		if(comando==-1)
		{
			/*if(estAtual>1)*/ /**< se isso fosse condi��o na hora q ele est� na esta��o 2 ele volta a casa e vai pra ne por causa da proxima condi��o */
                estAtual-=1;
            if(estAtual<1) /**<mudei esse if de lugar, ele tava em baixo do q incrementa o cont, o sinal tbm botei < ao inves de == */
                estAtual=ne;
			if(estAtual==estReferencia /*and estReferencia!=1*/)
                cont++;

		}
		else
		{

			/*if(estAtual<ne and estReferencia!=1)*/ /**< se ele estivesse na ne-1, ele ia incrementar e voltar pra primeira */
                estAtual+=1;
            if(estAtual>ne) /**<  este if tava em ultimo, botei ele aqui */
                estAtual=1;
			if(estReferencia==estAtual /*and estReferencia!=1*/)
                cont++;
			/*if(estReferencia==1)
                estAtual+=1;  N�o precisa essa condi��o*/
		}
	}

	cout<<cont;
}

/**< Minutos Para Horas e Minutos */
void horamin()
{
    int V;
    cin>>V;
    cout<<V/60<<endl<<V%60;
}

/**< Mate o Lobisomem - Maratona de Programa��o da SBC 2016 - Fase Nacional */
struct people
{
    int v1;
    int v2;
    int flag;
};
void lobisomen()
{
    int N, perdedores=0, i, j;
    cin>>N;
    struct people voto[N];
    for(i=0; i<N; i++){
        voto[i].flag=0;
    }

}

/**< De Volta para o Futuro - Maratona de Programa��o da SBC 2016 - Fase Nacional */
void dvpf(){
    int M, N, A, B;

}

/**< INT MAIN */
int main()
{
    dvpf();
    return 0;
}
