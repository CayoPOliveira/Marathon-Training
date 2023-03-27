#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

struct paciente{
    int hora;
    int espera;
};

int main(){
    int p;
    while(cin>>p){
        int cont=0;
        int horario = 7*60;
        queue< pair<int, int> > fila;
        for(int i=0; i<p; i++){
            int h, m, r;
            cin>>h>>m>>r;

            fila.push({h*60+m, r});
        }
        while(!fila.empty()){
            int hora_chegada, temp_espera;
            tie(hora_chegada, temp_espera) = fila.front();

            if(horario < hora_chegada){
                if(hora_chegada%30 == 0)
                    horario = hora_chegada;
                else
                    horario = hora_chegada + 30 - ( hora_chegada%30 );
            }
            if(hora_chegada + temp_espera < horario)
                cont++;

            horario+=30;
            fila.pop();
        }
        cout<<cont<<endl;
    }
}
