#include <iostream>
using namespace std;

/**
Strings são mais um tipo de dados, como int e double, mas armazenam palavras ou frases.
A maioria dos operadores comuns aos outros tipos também funcionam com string. Você pode:

Declarar uma variável do tipo string: string A;
Fazer uma variável receber uma palavra ou frase: A = “frase para a variavel A”;
Ler uma palavra da entrada padrão: cin>>A;
Ler uma linha completa da entrada padrão: getline(cin, A);
Adicionar uma frase ao final de uma string: A += “outra frase”;
Saber quantos caracteres tem uma determinada string: A.size()
*/

/**< Operações */
void operacoes(){
    double a, b;
    char o;
    cin>>o>>a>>b;

    cout.precision(2);
    cout.setf(ios::fixed);

    if(o=='M') cout<<a*b;
    if(o=='D') cout<<a/b;

}

/**< Overflow */
void overflow(){
    int N, a, b;
    char op;
    cin>>N>>a>>op>>b;
    if(op=='+')
        if(a+b<=N) cout<<"OK";
        else cout<<"OVERFLOW";
    if(op=='*')
        if(a*b<=N) cout<<"OK";
        else cout<<"OVERFLOW";
}

/**< Vestibular */
void vest(){
    int NumQuestoes, cont=0;
    string gab,resp;
    cin>>NumQuestoes>>gab>>resp;
    for(int i=0; i<gab.size(); i++)
    {
        if(gab[i]==resp[i]) cont++;
    }
    cout<<cont;
}

/**< Huaauhahhuahau */
void hua(){
    int cont=0;
    string Risada, RisVog, RisInv;
    cin>>Risada;
    for(int i=0; i<Risada.size(); i++){
        if(Risada[i]=='a' or Risada[i]=='e' or Risada[i]=='i' or Risada[i]=='o' or Risada[i]=='u')
            RisVog+=Risada[i];
    }
    for(int i=RisVog.size()-1; i>=0; i--)
        RisInv+=RisVog[i];
    for(int i=0; i<RisVog.size(); i++){
        if(RisVog[i]==RisInv[i]) cont++;
    }
    if(RisVog==RisInv) cout<<"S";
    else cout<<"N";
}

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
            if(Num[j]=='0') Val[0]++;
            else if(Num[j]=='1') Val[1]++;
            else if(Num[j]=='2') Val[2]++;
            else if(Num[j]=='3') Val[3]++;
            else if(Num[j]=='4') Val[4]++;
            else if(Num[j]=='5') Val[5]++;
            else if(Num[j]=='6') Val[6]++;
            else if(Num[j]=='7') Val[7]++;
            else if(Num[j]=='8') Val[8]++;
            else if(Num[j]=='9') Val[9]++;
        }
    }
    cout<<"0 - "<<Val[0]<<endl<<"1 - "<<Val[1]<<endl<<"2 - "<<Val[2]<<endl<<"3 - "<<Val[3]<<endl<<"4 - "<<Val[4]<<endl<<"5 - "<<Val[5]<<endl<<"6 - "<<Val[6]<<endl<<"7 - "<<Val[7]<<endl<<"8 - "<<Val[8]<<endl<<"9 - "<<Val[9];
}

/**< INT MAIN */
int main(){
    hua();
    return 0;
}
