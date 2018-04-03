#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
#include "verificacao.h"


void exibirLocal(Timovel x){
    printf("Informacoes de localizacao:\n");
    printf("Cidade  - %s\n",x.cidade);
    printf("Bairro  - %s\n",x.bairro);
    printf("Rua     - %s\n",x.rua);
    printf("CEP     - %s\n",x.cep);
    printf("Numero  - %d \n",x.numero);
    printf("Valor   - R$ %.2f\n",x.valor);
}

void vendaImovel(Timovel x){
    if(x.venda==1)
        printf("A Venda!\n");
    else if(x.venda==2)
        printf("Nao esta a venda!\n");
    else if(x.venda==3)
        printf("Para alugar!\n");

}

void exibirCasa(Timovel x){
    printf("Informacoes especificas\n");

    printf("Numero de Pavimentos - %d \n",x.casa.pavimentosC);
    printf("Numero de Quartos    - %d \n",x.casa.quartosC);
    printf("Area do terreno      - %.2f m^2 \n",x.casa.areaT);
    printf("Area construida      - %.2f m^2\n",x.casa.areaC);
}

void exibirAP(Timovel x){

    printf("Informacoes especificas\n");
    printf("Area do Apartamento   - %.2f m^2:\n",x.AP.areaP);
    printf("Numero de Quartos     - %d\n",x.AP.quartosAP);
    printf("Posicao(referencia)   - %s\n",x.AP.posicaoP);
    printf("N de vagas na garagem - %d\n",x.AP.vagasG);

}

void exibirFlat(Timovel x){
    printf("Informacoes especificas\n");
    printf("Area do Flat   - %.2f m^2:\n",x.Flat.areaFL);
    printf("Numero de Quartos     - %d\n",x.Flat.quartosFL);
    printf("Posicao(referencia)   - %s\n",x.Flat.posicaoFL);
    printf("N de vagas na garagem - %d\n",x.Flat.vagasFl);
    printf("***************************\n");
    printf("POSSUI:\n");
    if(x.Flat.arFL == 1)
        printf("Ar Condicionado   \n");
    if(x.Flat.internet_tvFL == 1)
        printf("Internet e TV     \n");
    if(x.Flat.lavanderiaFL == 1)
        printf("Lavanderia e Ser. \n");
    if(x.Flat.limpezaFL == 1)
        printf("Serv. de limpeza  \n");
    if(x.Flat.recepcaoFL == 1)
        printf("Recepcao 24h      \n");
    printf("***************************\n");
    printf("NAO POSSUI:\n");
    if(x.Flat.arFL == 0)
        printf("Ar Condicionado   \n");
    if(x.Flat.internet_tvFL == 0)
        printf("Internet e TV     \n");
    if(x.Flat.lavanderiaFL == 0)
        printf("Lavanderia e Ser. \n");
    if(x.Flat.limpezaFL == 0)
        printf("Serv. de limpeza  \n");
    if(x.Flat.recepcaoFL == 0)
        printf("Recepcao 24h      \n");
}

void exibirStudio(Timovel x){


    printf("Informacoes especificas\n");
    printf("Area do Studio        - %.2f m^2:\n",x.Studio.areaST);
    printf("Numero de Quartos     - %d\n",x.Studio.quartosST);
    printf("Posicao(referencia)   - %s\n",x.Studio.posicaoST);
    printf("N de vagas na garagem - %d\n",x.Studio.vagasST);
    printf("***************************\n");
    printf("POSSUI:\n");
    if(x.Studio.arST == 1)
        printf("Ar Condicionado   \n");
    if(x.Studio.internet_tvST == 1)
        printf("Internet e TV     \n");
    if(x.Studio.lavanderiaST == 1)
        printf("Lavanderia e Servicos \n");
    if(x.Studio.limpezaST == 1)
        printf("Serv. de limpeza  \n");
    if(x.Studio.recepcaoST == 1)
        printf("Recepcao 24h      \n");
    if(x.Studio.piscinaST == 1)
        printf("Piscina           \n");
    if(x.Studio.saunaST == 1)
        printf("Sauna             \n");
    if(x.Studio.ginasticaST == 1)
        printf("Sala de Ginast.   \n");
    printf("***************************\n");
    printf("NAO POSSUI:\n");
    if(x.Studio.arST == 0)
        printf("Ar Condicionado   \n");
    if(x.Studio.internet_tvST == 0)
        printf("Internet e TV     \n");
    if(x.Studio.lavanderiaST == 0)
        printf("Lavenderia e Ser. \n");
    if(x.Studio.limpezaST == 0)
        printf("Serv. de limpeza  \n");
    if(x.Studio.recepcaoST == 0)
        printf("Recepcao 24h      \n");
    if(x.Studio.piscinaST == 0)
        printf("Piscina           \n");
    if(x.Studio.saunaST == 0)
        printf("Sauna             \n");
    if(x.Studio.ginasticaST == 0)
        printf("Sala de Ginast.   \n");
}
void exibir(Timovel local){

        if(local.tipoTimovel == 1){

           printf("***************************************\n");
           printf("CASA  \n");
           printf("***************************************\n");
           exibirLocal(local);
           printf("***************************\n");
           exibirCasa(local);
           printf("***************************\n");
           vendaImovel(local);
           printf("***************************\n\n");
        }else if(local.tipoTimovel == 2){
           printf("***************************************\n");
           printf("AP \n");
           printf("***************************************\n");
           exibirLocal(local);
           printf("***************************\n");
           exibirAP(local);
           printf("***************************\n");
           vendaImovel(local);
           printf("***************************\n\n");
        }else if(local.tipoTimovel == 3){
           printf("****************************************\n");
           printf("TERRENO \n");
           printf("****************************************\n");
           exibirLocal(local);
           printf("***************************\n");
           printf("Informacoes especificas\n");
           printf("Area do  terreno  - %.2f m^2\n",local.Ter.areaT);
           printf("***************************\n");
           vendaImovel(local);
           printf("***************************\n\n");
        }else if(local.tipoTimovel == 4){
            printf("****************************************\n");
            printf("FLAT \n");
            printf("****************************************\n");
            exibirLocal(local);
            printf("***************************\n");
            exibirFlat(local);
            printf("***************************\n");
            vendaImovel(local);
            printf("***************************\n\n");
    }else if(local.tipoTimovel == 5){
            printf("****************************************\n");
            printf("STUDIO \n");
            printf("****************************************\n");
            exibirLocal(local);
            printf("***************************\n");
            exibirStudio(local);
            printf("***************************\n");
            vendaImovel(local);
            printf("***************************\n\n");
            }
        }

void verificarQuantidade(Timovel local[]){

    int i=0;
    int casa=0;
    int ap=0;
    int terreno=0;
    int flat=0;
    int studio=0;

    for(i=0;i<MAX;i++){
        if(local[i].tipoTimovel==1)
            casa++;
        if(local[i].tipoTimovel==2)
            ap++;
        if(local[i].tipoTimovel==3)
            terreno++;
        if(local[i].tipoTimovel==4)
            flat++;
        if(local[i].tipoTimovel==5)
            studio++;
    }

    printf("%d Casa(s)\n%d Apartamento(s)\n%d Terrenos\n%d Flat(s)\n%d Studio(s)\n",casa,ap,terreno,flat,studio);
    system("pause");
    system("cls");
}


void verificarVenda(Timovel local[]){

int i;
    system("cls");
    for(i=0;i<MAX;i++){
            if(local[i].venda==1){
                exibir(local[i]);
            }
    }
    system("pause");
}


void verificarAlugar(Timovel local[]){

int i;
    system("cls");
    for(i=0;i<MAX;i++){
            if(local[i].venda==3){
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
            printf("Insira o nome do bairro que deseja as informacoes:\n");
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
            printf("Insira o nome do bairro que deseja as informacoes:\n");
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
        if(local[i].tipoTimovel==1||local[i].tipoTimovel==2||local[i].tipoTimovel==3||local[i].tipoTimovel==4||local[i].tipoTimovel==5){
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














