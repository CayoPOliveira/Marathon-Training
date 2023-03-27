// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

/**
#include <vector>
#include <set>
//*/
struct primeFactorization {
    int Count; //Qtd de vezes que ele se repete
    int FatorPrimo; //Fator primo
};
set<int> Divisores;

//Função recursiva para gerar os divisores de N
void GeraDivisores(int PosAtual, int DivisorAtual, vector<primeFactorization>& Primos)
{

    //Saída da recursão, quando não tem mais primos na fatoração
    if (PosAtual == Primos.size()) {
        Divisores.insert(DivisorAtual);
        //cout << DivisorAtual << ' ';
        return;
    }

    for (int i = 0; i <= Primos[PosAtual].Count; ++i) {
        GeraDivisores(PosAtual + 1, DivisorAtual, Primos);
        DivisorAtual *= Primos[PosAtual].FatorPrimo;
    }
}

// Função para achar os divisores de N
void AchaDivisores(int n)
{
    // Guarda os fatores primos e sua potência
    vector<primeFactorization> Primos;

    // Acha a fatoração de N
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                count += 1;
            }
            // Para cada fator primo salvamos a potencia dele
            Primos.push_back({ count, i });
        }
    }

    // Se n for primo
    if (n > 1) {
        Primos.push_back({ 1, n });
    }

    int PosAtual = 0, DivisorAtual = 1;
    // Gera todos os divisores
    GeraDivisores(PosAtual, DivisorAtual, Primos);
}

void PrintDivisores(int n){
    //**
    AchaDivisores(n);
    //*/
    for(auto it = Divisores.begin(); it!=Divisores.end(); it++){
        cout<<*it<<" ";
    }
}


