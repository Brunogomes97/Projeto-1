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

void verificarLocal(Timovel local[],int x){
    printf("***************************\n");
    printf("Informacoes de localizacao:\n");
    printf("Cidade  - %s\n",local[x].cidade);
    printf("Bairro  - %s\n",local[x].bairro);
    printf("Rua     - %s\n",local[x].rua);
    printf("CEP     - %d\n",local[x].cep);
    printf("Valor   - R$ %.2f\n",local[x].valor);
    printf("***************************\n");
    printf("\n");
}
void verificarVenda(Timovel local[],int x){
         if(local[x].venda==1)
            printf("A Venda!\n");
         else if(local[x].venda==2)
            printf("Nao esta a venda!\n");
         else if(local[x].venda==3)
            printf("Para alugar!\n");
    }

void verificarAlugarBairro(Timovel local[]){
    int i;
    int op;
    char x[20];
    char p[20];

        do {
    printf("Bairros onde ha imoveis para alugar:\n");
    for(i=0;i<MAX;i++){
        if(local[i].venda==3){
            printf("Numero de Cadastro: 00%d - Bairro: %s\n",i,local[i].bairro);
        }
    }
            printf("\n");
            printf("Insira o nome do bairro que deseja as as informacoes:\n");
            scanf(" %[^\n]s",x);
            strupr(x);

            for(i=0;i<MAX;i++){
                strcpy(p,local[i].bairro);
                strupr(p);
                if(strcmp(x,p)==0){
                    verificarEspecifico(local,i);
                }
                else{
                    continue;
                }
            }

            printf("Digite 1 para sair ou qualquer numero para pesquisar novamente:\n");
            scanf("%d",&op);
            system("cls");
        }while(op!=1);

        system("pause");
        system("cls");

}

void verificarVendaBairro(Timovel local[]){
     int i;
    int op;
    char x[20];
    char p[20];

        do {
    printf("Bairros onde ha imoveis para vender:\n");
    for(i=0;i<MAX;i++){
        if(local[i].venda==1){
            printf("Numero de Cadastro: 00%d - Bairro: %s\n",i,local[i].bairro);
        }
    }
            printf("\n");
            printf("Insira o nome do bairro que deseja as as informacoes:\n");
            scanf(" %[^\n]s",x);
            strupr(x);

            for(i=0;i<MAX;i++){
                strcpy(p,local[i].bairro);
                strupr(p);
                if(strcmp(x,p)==0){
                    verificarEspecifico(local,i);
                }
                else{
                    continue;
                }
            }

            printf("Digite 1 para sair ou qualquer numero para pesquisar novamente:\n");
            scanf("%d",&op);
            system("cls");
        }while(op!=1);

        system("pause");
        system("cls");

}

void verificarCidade(Timovel local[]){

    int i;
    int op;
    char x[20];
    char p[20];

        do {
    printf("Cidades onde ha imoveis cadastrados:\n");
    for(i=0;i<MAX;i++){
        if(local[i].tipoTimovel==1||local[i].tipoTimovel==2||local[i].tipoTimovel==3){
            printf("Numero de Cadastro: 00%d - Cidade: %s\n",i,local[i].cidade);
        }
    }
            printf("\n");
            printf("Insira o nome da cidade que deseja as informacoes:\n");
            scanf(" %[^\n]s",x);
            strupr(x);

            for(i=0;i<MAX;i++){
                strcpy(p,local[i].cidade);
                strupr(p);
                if(strcmp(x,p)==0){
                    verificarEspecifico(local,i);
                }
                else{
                    continue;
                }
            }

            printf("Digite 1 para sair ou qualquer numero para pesquisar novamente:\n");
            scanf("%d",&op);
            system("cls");
        }while(op!=1);

        system("pause");
        system("cls");


}

void verificarEspecifico(Timovel local[],int i){
     if(local[i].tipoTimovel == 1){
           printf("***************************\n");
           printf("CASA - 00%d\n",i);
           printf("**************************\n");
           verificarLocal(local,i);
           printf("***************************\n");
           printf("Informacoes especificas\n");
           printf("Numero da Casa       - %d \n",local[i].numero);
           printf("Numero de Pavimentos - %d \n",local[i].casa.pavimentosC);
           printf("Numero de Quartos    - %d \n",local[i].casa.quartosC);
           printf("Area do terreno      - %.2f m^2 \n",local[i].casa.areaT);
           printf("Area construida      - %.2f m^2\n",local[i].casa.areaC);
           verificarVenda(local,i);
           printf("\n");

        }else if(local[i].tipoTimovel == 2){
           printf("***************************\n");
           printf("AP - 00%d\n",i);
           printf("***************************\n");
           verificarLocal(local,i);
           printf("***************************\n");
           printf("Informacoes especificas\n");
           printf("Area do Apartamento   - %.2f m^2:\n",local[i].AP.areaP);
           printf("Numero de Quartos     - %d\n",local[i].AP.quartosAP);
           printf("Posicao(referencia)   - %s\n",local[i].AP.posicao);
           printf("N de vagas na garagem - %d\n",local[i].AP.vagasG);
           verificarVenda(local,i);
           printf("\n");
        }else if(local[i].tipoTimovel == 3){
           printf("***************************\n");
           printf("TERRENO - 00%d\n",i);
           printf("***************************\n");
           verificarLocal(local,i);
           printf("***************************\n");
           printf("Informacoes especificas\n");
           printf("Area do  terreno  - %.2f m^2\n",local[i].Ter.areaT);
           verificarVenda(local,i);
           printf("\n");

        }

}

void verificarImoveis(Timovel local[]){
    int i;
    for(i=0;i<MAX;i++){
        verificarEspecifico(local,i);
    }
    system("pause");
    system("cls");
}

