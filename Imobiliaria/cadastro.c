/* Funcoes de cadastro*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 100
#include "cadastro.h"

void Fendereco(int i,Timovel local[]){

    printf("**************************************\n");
    printf("Insira as informacoes gerais do imovel:\n");
    printf("**************************************\n");
    printf("1-Insira a cidade do imovel:\n");
    scanf(" %[^\n]s",local[i].cidade);
    printf("2-Insira o bairro do imovel:\n");
    scanf(" %[^\n]s",local[i].bairro);
    printf("3-Informe o logradouro(rua) do imovel:\n");
    scanf(" %[^\n]s",local[i].rua);
    printf("4-Insira o CEP:\n");
    scanf("%d",&local[i].cep);
    printf("4-Informe o valor do Imovel:\n");
    scanf("%f",&local[i].valor);
    printf("5-Disponibilidade do imovel(1-Venda|2-Nao esta a Venda|3-Alugar):\n");
    scanf("%d",&local[i].venda);


}



void Fcadastro(Timovel local[],int i, char *imov){

    system("cls");
    if(strcmp(imov,"CASA")==0){
        Fendereco(i,local);
        local[i].tipoTimovel=1;
        printf("******************************************\n");
        printf("Insira as informacoes especificas da casa:\n");
        printf("******************************************\n");
        printf("1-Insira o numero da casa:\n");
        scanf("%d",&local[i].numero);
        printf("2-Insira o numero de pavimentos:\n");
        scanf("%d",&local[i].casa.pavimentosC);
        printf("3-Insira o numero de quartos da casa:\n");
        scanf("%d",&local[i].casa.quartosC);
        printf("4-Area do terreno:\n");
        scanf("%f",&local[i].casa.areaT);
        printf("5-Area do terreno construida:\n");
        scanf("%f",&local[i].casa.areaC);



    }else if(strcmp(imov,"APARTAMENTO")==0){
        Fendereco(i,local);
        local[i].tipoTimovel=2;
        printf("1-Informe a area ocupada pelo Apartamento(em metro quadrados):\n");
        scanf("%f",&local[i].AP.areaP);
        printf("2-Informe o numero de quartos do Apartamento:\n");
        scanf("%d",&local[i].AP.quartosAP);
        printf("3-Informe alguma referencia(posicao):\n");
        scanf(" %[^\n]s",local[i].AP.posicao);
        printf("5-Numeros de vagas na garagem?:\n");
        scanf("%d",&local[i].AP.vagasG);

    }else if(strcmp(imov,"TERRENO")==0){
        Fendereco(i,local);
        local[i].tipoTimovel=3;
        printf("1-Insira a area do terreno:\n");
        scanf("%f",&local[i].Ter.areaT);

    }
    system("cls");
}
