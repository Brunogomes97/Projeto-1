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
           printf("Posicao(referencia)   - %s\n",local.AP.posicaoP);
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

        }else if(local.tipoTimovel == 4){
            printf("***************************\n");
            printf("Flat \n");
            printf("***************************\n");
            printf("Informacoes de localizacao:\n");
            printf("Cidade  - %s\n",local.cidade);
            printf("Bairro  - %s\n",local.bairro);
            printf("Rua     - %s\n",local.rua);
            printf("CEP     - %d\n",local.cep);
            printf("Valor   - R$ %.2f\n",local.valor);
            printf("***************************\n");
            printf("Informacoes especificas\n");
            printf("Area do Flat   - %.2f m^2:\n",local.Flat.areaFL);
            printf("Numero de Quartos     - %d\n",local.Flat.quartosFL);
            printf("Posicao(referencia)   - %s\n",local.Flat.posicaoFL);
            printf("N de vagas na garagem - %d\n",local.Flat.vagasFl);
            if((local.Flat.arFL[0]) == 'y' || (local.Flat.arFL[0]) == 'Y'){
                printf("O Flat tem ar condicionado\n");
            }else if((local.Flat.arFL[0]) == 'n' || (local.Flat.arFL[0]) == 'N'){
                printf("O Flat nao tem ar condicionado\n");
            }else{
                printf("Cadastro invalido\n");
            }
            if((local.Flat.internet_tvFL[0]) == 'y' || (local.Flat.internet_tvFL[0]) == 'Y'){
                printf("O Flat tem internet e TV a cabo\n");
            }else if((local.Flat.internet_tvFL[0]) == 'n' || (local.Flat.internet_tvFL[0]) == 'N'){
                printf("O Flat nao tem internet e TV a cabo\n");
            }else{
                printf("Cadastro invalido\n");
            }
            if((local.Flat.lavanderiaFL[0]) == 'y' || (local.Flat.lavanderiaFL[0]) == 'Y'){
                printf("O Flat tem servicos de lavanderia\n");
            }else if((local.Flat.lavanderiaFL[0]) == 'n' || (local.Flat.lavanderiaFL[0]) == 'N'){
                printf("O Flat nao tem servicos de lavanderia\n");
            }else{
                printf("Cadastro invalido\n");
            }
            if((local.Flat.limpezaFL[0]) == 'y' || (local.Flat.limpezaFL[0]) == 'Y'){
                printf("O Flat tem arrumacao/limpeza\n");
            }else if((local.Flat.limpezaFL[0]) == 'n' || (local.Flat.limpezaFL[0]) == 'N'){
                printf("O Flat nao tem arrumacao/limpeza\n");
            }else{
                printf("Cadastro invalido\n");
            }
            if((local.Flat.recepcaoFL[0]) == 'y' || (local.Flat.recepcaoFL[0]) == 'Y'){
                printf("O Flat tem recepcao 24h\n");
            }else if((local.Flat.recepcaoFL[0]) == 'n' || (local.Flat.recepcaoFL[0]) == 'N'){
                printf("O Flat nao tem recepcao 24h\n");
            }else{
                printf("Cadastro invalido\n");
            }

             if(local.venda==1)
                printf("A Venda!\n");
           else if(local.venda==2)
                printf("Nao esta a venda!\n");
           else if(local.venda==3)
                printf("Para alugar!\n");
           printf("***************************\n");

    }else if(local.tipoTimovel == 5){
            printf("***************************\n");
            printf("Studio \n");
            printf("***************************\n");
            printf("Informacoes de localizacao:\n");
            printf("Cidade  - %s\n",local.cidade);
            printf("Bairro  - %s\n",local.bairro);
            printf("Rua     - %s\n",local.rua);
            printf("CEP     - %d\n",local.cep);
            printf("Valor   - R$ %.2f\n",local.valor);
            printf("***************************\n");
            printf("Informacoes especificas\n");
            printf("Area do Studio   - %.2f m^2:\n",local.Studio.areaST);
            printf("Numero de Quartos     - %d\n",local.Studio.quartosST);
            printf("Posicao(referencia)   - %s\n",local.Studio.posicaoST);
            printf("N de vagas na garagem - %d\n",local.Studio.vagasST);
            if((local.Studio.arST[0]) == 'y' || (local.Studio.arST[0]) == 'Y'){
                printf("O Studio tem ar condicionado\n");
            }else if((local.Studio.arST[0]) == 'n' || (local.Studio.arST[0]) == 'N'){
                printf("O Studio nao tem ar condicionado\n");
            }else{
                printf("Cadastro invalido\n");
            }
            if((local.Studio.internet_tvST[0]) == 'y' || (local.Studio.internet_tvST[0]) == 'Y'){
                printf("O Studio tem internet e TV a cabo\n");
            }else if((local.Studio.internet_tvST[0]) == 'n' || (local.Studio.internet_tvST[0]) == 'N'){
                printf("O Studio nao tem internet e TV a cabo\n");
            }else{
                printf("Cadastro invalido\n");
            }
            if((local.Studio.lavanderiaST[0]) == 'y' || (local.Studio.lavanderiaST[0]) == 'Y'){
                printf("O Studio tem servicos de lavanderia\n");
            }else if((local.Studio.lavanderiaST[0]) == 'n' || (local.Studio.lavanderiaST[0]) == 'N'){
                printf("O Studio nao tem servicos de lavanderia\n");
            }else{
                printf("Cadastro invalido\n");
            }
            if((local.Studio.limpezaST[0]) == 'y' || (local.Studio.limpezaST[0]) == 'Y'){
                printf("O Studio tem arrumacao/limpeza\n");
            }else if((local.Studio.limpezaST[0]) == 'n' || (local.Studio.limpezaST[0]) == 'N'){
                printf("O Studio nao tem arrumacao/limpeza\n");
            }else{
                printf("Cadastro invalido\n");
            }
            if((local.Studio.recepcaoST[0]) == 'y' || (local.Studio.recepcaoST[0]) == 'Y'){
                printf("O Studio tem recepcao 24h\n");
            }else if((local.Studio.recepcaoST[0]) == 'n' || (local.Studio.recepcaoST[0]) == 'N'){
                printf("O Studio nao tem recepcao 24h\n");
            }else{
                printf("Cadastro invalido\n");
            }
            if((local.Studio.piscinaST[0]) == 'y' || (local.Studio.piscinaST[0]) == 'Y'){
                printf("O Studio tem piscina\n");
            }else if((local.Studio.piscinaST[0]) == 'n' || (local.Studio.piscinaST[0]) == 'N'){
                printf("O Studio nao tem piscina\n");
            }else{
                printf("Cadastro invalido\n");
            }
            if((local.Studio.saunaST[0]) == 'y' || (local.Studio.saunaST[0]) == 'Y'){
                printf("O Studio tem sauna\n");
            }else if((local.Studio.saunaST[0]) == 'n' || (local.Studio.saunaST[0]) == 'N'){
                printf("O Studio nao tem sauna\n");
            }else{
                printf("Cadastro invalido\n");
            }
            if((local.Studio.ginasticaST[0]) == 'y' || (local.Studio.ginasticaST[0]) == 'Y'){
                printf("O Studio tem sala de ginastica\n");
            }else if((local.Studio.ginasticaST[0]) == 'n' || (local.Studio.ginasticaST[0]) == 'N'){
                printf("O Studio nao tem sala de ginastica\n");
            }else{
                printf("Cadastro invalido\n");
            }

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

    printf("%d Casa(s)\n%d apartamento(s)\n%d Terrenos\n%d Flat(s)\n%d Studio(s)\n",casa,ap,terreno,flat,studio);
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














