/* Funcoes de cadastro*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 100
#include "cadastro.h"

void Fendereco(int i,Timovel local[]){

    int x;

    do {
        printf("**************************************\n");
        printf("Insira as informacoes gerais do imovel:\n");
        printf("**************************************\n");
        printf("1-Insira a cidade do imovel:\n");
        scanf(" %[^\n]s",local[i].cidade);
        printf("2-Insira o bairro do imovel:\n");
        scanf(" %[^\n]s",local[i].bairro);
        printf("3-Informe o logradouro(rua) do imovel:\n");
        scanf(" %[^\n]s",local[i].rua);
        printf("4-Insira o numero do Imovel:\n");
        scanf("%d",&local[i].numero);
        printf("5-Insira o CEP:\n");
        scanf(" %[^\n]s",local[i].cep);
        printf("6-Informe o valor do Imovel:\n");
        scanf("%f",&local[i].valor);
        printf("7-Disponibilidade do imovel(1-Venda|2-Nao esta a Venda|3-Alugar):\n");
        scanf("%d",&local[i].venda);

        printf("Deseja salvar as alteracoes de LOCALIZACAO?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n");
        scanf("%d",&x);
        system("cls");
    }while(x!=1);

}


void Fcadastro(Timovel local[],int i, char *imov){
    system("cls");
    if(strcmp(imov,"CASA")==0){
        Fendereco(i,local);
        local[i].tipoTimovel=1;
        cadCasa(local,i);

    }else if(strcmp(imov,"APARTAMENTO")==0){
        Fendereco(i,local);
        local[i].tipoTimovel=2;
        cadAP(local,i);

    }else if(strcmp(imov,"TERRENO")==0){
        Fendereco(i,local);
        local[i].tipoTimovel=3;
        cadTerreno(local,i);
    }else if(strcmp(imov,"FLAT")==0){
        Fendereco(i,local);
        local[i].tipoTimovel=4;
        cadFlat(local,i);

    }else if(strcmp(imov,"STUDIO")==0){
        Fendereco(i,local);
        local[i].tipoTimovel=5;
        cadStudio(local,i);

    }
    system("cls");
}
void cadTerreno(Timovel local[],int i){
    int x;

    do{
        printf("******************************************\n");
        printf("Insira as informacoes especificas do Terreno:\n");
        printf("******************************************\n");
        printf("1-Insira a area do terreno(em metros quadrados):\n");
        scanf("%f",&local[i].Ter.areaT);
        printf("Deseja salvar as alteracoes de Terreno?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n");
        scanf("%d",&x);
        system("cls");
    }while(x!=1);
}
void cadCasa(Timovel local[],int i){
    int x;
    do{
        printf("******************************************\n");
        printf("Insira as informacoes especificas da casa:\n");
        printf("******************************************\n");
        printf("1-Insira o numero de pavimentos:\n");
        scanf("%d",&local[i].casa.pavimentosC);
        printf("2-Insira o numero de quartos da casa:\n");
        scanf("%d",&local[i].casa.quartosC);
        printf("3-Area do terreno(em metros quadrados:\n");
        scanf("%f",&local[i].casa.areaT);
        printf("4-Area do terreno construida(em metros quadrados):\n");
        scanf("%f",&local[i].casa.areaC);

        printf("Deseja salvar as alteracoes do Imovel CASA?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n");
        scanf("%d",&x);
        system("cls");

    }while(x!=1);
}
void cadAP(Timovel local[],int i){
    int x;

    do {
        printf("******************************************\n");
        printf("Insira as informacoes especificas do AP:\n");
        printf("******************************************\n");
        printf("1-Informe a area ocupada pelo Apartamento(em metro quadrados):\n");
        scanf("%f",&local[i].AP.areaP);
        printf("2-Informe o numero de quartos do Apartamento:\n");
        scanf("%d",&local[i].AP.quartosAP);
        printf("3-Informe alguma referencia(posicao):\n");
        scanf(" %[^\n]s",local[i].AP.posicaoP);
        printf("4-Numeros de vagas na garagem:\n");
        scanf("%d",&local[i].AP.vagasG);
        printf("5-Numero de Andares:\n");
        scanf("%d",&local[i].AP.andarAP);

        printf("Deseja salvar as alteracoes do imovel APARTAMENTO?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n");
        scanf("%d",&x);
        system("cls");
    }while(x!=1);


}
void cadStudio(Timovel local[],int i){
    int x;

    do{
        printf("******************************************\n");
        printf("Insira as informacoes especificas do Studio:\n");
        printf("******************************************\n");
        printf("1-Informe a area ocupada pelo Studio(em metro quadrados):\n");
        scanf("%f",&local[i].Studio.areaST);
        printf("2-Informe o numero de quartos do Studio:\n");
        scanf("%d",&local[i].Studio.quartosST);
        printf("3-Informe alguma referencia(posicao):\n");
        scanf(" %[^\n]s",local[i].Studio.posicaoST);
        printf("4-Numeros de vagas na garagem?:\n");
        scanf("%d",&local[i].Studio.vagasST);
        printf("5-O Studio possui ar condicionado?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Studio.arST);
        printf("6-O Studio possui internet e TV a cabo?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Studio.internet_tvST);
        printf("7-O Studio possui servicos de lavanderia?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Studio.lavanderiaST);
        printf("8-O Studio possui arrumacao/limpeza?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Studio.limpezaST);
        printf("9-O Studio possui recepcao 24h?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Studio.recepcaoST);
        printf("10-O Studio possui piscina?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Studio.piscinaST);
        printf("11-O Studio possui sauna?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Studio.saunaST);
        printf("12-O Studio possui sala de ginastica?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Studio.ginasticaST);

        printf("Deseja salvar as alteracoes do imovel STUDIO?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n");
        scanf("%d",&x);
        system("cls");
    }while(x!=1);
}
void cadFlat(Timovel local[],int i){
    int x;

    do{
        printf("******************************************\n");
        printf("Insira as informacoes especificas do Flat:\n");
        printf("******************************************\n");
        printf("1-Informe a area ocupada pelo Flat(em metro quadrados):\n");
        scanf("%f",&local[i].Flat.areaFL);
        printf("2-Informe o numero de quartos do Flat:\n");
        scanf("%d",&local[i].Flat.quartosFL);
        printf("3-Informe alguma referencia(posicao):\n");
        scanf(" %[^\n]s",local[i].Flat.posicaoFL);
        printf("4-Numeros de vagas na garagem?:\n");
        scanf("%d",&local[i].Flat.vagasFl);
        printf("5-O Flat possui ar condicionado?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Flat.arFL);
        printf("6-O Flat possui internet e TV a cabo?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Flat.internet_tvFL);
        printf("7-O Flat possui serviços de lavanderia?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Flat.lavanderiaFL);
        printf("8-O Flat possui arrumacao/limpeza?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Flat.limpezaFL);
        printf("9-O Flat possui recepcao 24h?(Sim - 1/Nao - 0):\n");
        scanf("%d",&local[i].Flat.recepcaoFL);

        printf("Deseja salvar as alteracoes do imovel FLAT?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n");
        scanf("%d",&x);
        system("cls");
    }while(x!=1);
}
