//PERDI PARTE DO CÓDIGO, QUALQUER DIA EU REFAÇO A ENTRADA, ACREDITO QUE A LÓGICA DE RESOLUÇÃO AINDA ESTEJA CERTA

for(int i=0; i<N-1; i++)
{
    int compra_menor = vet[i];
    int pos_maior = i;
    while(vet[i+1]> compra_menor){
        i++;
        if(vet[pos_maior]<vet[i]) pos_maior=i;
    }
    //quando ele sair desse while, o vet[pos_maior] � maior valor no intervalo

    int vende_maior = vet[i];

    //Lucro � o vende_maior - compra_menor - C
    int lucro_da_acao = vende_maior - compra_menor - C;
    if(lucro > 0){
        Lucro_total = Lucro_total + lucro_da_acao;
    }
}
