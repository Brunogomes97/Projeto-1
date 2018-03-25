#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
#include "verificacao.h"
#include <conio.h>


void exibir(Timovel local){

        if(local.tipoTimovel == 1){
           printf("***************************\n");
           printf("CASA  \n");
           printf("***************************\n");
           printf("Informacoes de localizacao:\n");
           printf("Cidade  - %s\n",local.cidade);
           printf("Bairro  - %s\n",local.bairro);
           printf("Rua     - %s\n",local.rua);
           printf("CEP     - %d\n",local.cep);
           printf("Valor   - R$ %.2f\n",local.valor);
           printf("***************************\n");
           printf("Informacoes especificas\n");
           printf("Numero da Casa       - %d \n",local.numero);
           printf("Numero de Pavimentos - %d \n",local.casa.pavimentosC);
           printf("Numero de Quartos    - %d \n",local.casa.quartosC);
           printf("Area do terreno      - %.2f m^2 \n",local.casa.areaT);
           printf("Area construida      - %.2f m^2\n",local.casa.areaC);
           if(local.venda==1)
                printf("A Venda!\n");
           else if(local.venda==2)
                printf("Nao esta a venda!\n");
           else if(local.venda==3)
                printf("Para alugar!\n");

        }else if(local.tipoTimovel == 2){
           printf("***************************\n");
           printf("AP \n");
           printf("***************************\n");
           printf("Informacoes de localizacao:\n");
           printf("Cidade  - %s\n",local.cidade);
           printf("Bairro  - %s\n",local.bairro);
           printf("Rua     - %s\n",local.rua);
           printf("CEP     - %d\n",local.cep);
           printf("Valor   - R$ %.2f\n",local.valor);
           printf("***************************\n");
           printf("Informacoes especificas\n");
           printf("Area do Apartamento   - %.2f m^2:\n",local.AP.areaP);
           printf("Numero de Quartos     - %d\n",local.AP.quartosAP);
           printf("Posicao(referencia)   - %s\n",local.AP.posicao);
           printf("N de vagas na garagem - %d\n",local.AP.vagasG);
             if(local.venda==1)
                printf("A Venda!\n");
           else if(local.venda==2)
                printf("Nao esta a venda!\n");
           else if(local.venda==3)
                printf("Para alugar!\n");
           printf("***************************\n");
        }else if(local.tipoTimovel == 3){
           printf("***************************\n");
           printf("TERRENO \n");
           printf("***************************\n");
           printf("Informacoes de localizacao:\n");
           printf("Cidade  - %s\n",local.cidade);
           printf("Bairro  - %s\n",local.bairro);
           printf("Rua     - %s\n",local.rua);
           printf("CEP     - %d\n",local.cep);
           printf("Valor   - R$ %.2f\n",local.valor);
           printf("***************************\n");
           printf("Informacoes especificas\n");
           printf("Area do  terreno  - %.2f m^2\n",local.Ter.areaT);

             if(local.venda==1)
                printf("A Venda!\n");
           else if(local.venda==2)
                printf("Nao esta a venda!\n");
           else if(local.venda==3)
                printf("Para alugar!\n");
           printf("***************************\n");
        }

    }


void verificarQuantidade(Timovel local[]){

    int i=0;
    int casa=0;
    int ap=0;
    int terreno=0;


    for(i=0;i<MAX;i++){
        if(local[i].tipoTimovel==1)
            casa++;
        if(local[i].tipoTimovel==2)
            ap++;
        if(local[i].tipoTimovel==3)
            terreno++;
    }

    printf("%d Casa(s)\n%d apartamento(s)\n%d Terrenos\n",casa,ap,terreno);
    system("pause");
    system("cls");
}




void verificarvenda(Timovel local[]){


int i;
    system("cls");
    for(i=0;i<MAX;i++){
            if(local[i].venda==1){
                exibir(local[i]);
            }
    }
    system("pause");
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
            system("cls");
            strupr(x);

            for(i=0;i<MAX;i++){
                strcpy(p,local[i].bairro);
                strupr(p);
                if(strcmp(x,p)==0){
                   exibir(local[i]);
                }
                else{
                    continue;
                }
            }

            printf("Digite 1 para sair ou qualquer numero para pesquisar novamente:\n");
            scanf("%d",&op);
            system("cls");
        }while(op!=1);


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
            system("cls");
            strupr(x);

            for(i=0;i<MAX;i++){
                strcpy(p,local[i].bairro);
                strupr(p);
                if(strcmp(x,p)==0){
                    exibir(local[i]);
                }
                else{
                    continue;
                }
            }

            printf("Digite 1 para sair ou qualquer numero para pesquisar novamente:\n");
            scanf("%d",&op);
            system("cls");
        }while(op!=1);


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
            system("cls");
            strupr(x);

            for(i=0;i<MAX;i++){
                strcpy(p,local[i].cidade);
                strupr(p);
                if(strcmp(x,p)==0){
                    exibir(local[i]);
                }
                else{
                    continue;
                }
            }

            printf("Digite 1 para sair ou qualquer numero para pesquisar novamente:\n");
            scanf("%d",&op);
            system("cls");
        }while(op!=1);


        system("cls");


}













