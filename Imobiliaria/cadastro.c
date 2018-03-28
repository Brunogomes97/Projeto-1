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
        scanf(" %[^\n]s",local[i].AP.posicaoP);
        printf("4-Numeros de vagas na garagem?:\n");
        scanf("%d",&local[i].AP.vagasG);

    }else if(strcmp(imov,"TERRENO")==0){
        Fendereco(i,local);
        local[i].tipoTimovel=3;
        printf("1-Insira a area do terreno:\n");
        scanf("%f",&local[i].Ter.areaT);

    }else if(strcmp(imov,"FLAT")==0){
        Fendereco(i,local);
        local[i].tipoTimovel=4;
        printf("1-Informe a area ocupada pelo Flat(em metro quadrados):\n");
        scanf("%f",&local[i].Flat.areaFL);
        printf("2-Informe o numero de quartos do Flat:\n");
        scanf("%d",&local[i].Flat.quartosFL);
        printf("3-Informe alguma referencia(posicao):\n");
        scanf(" %[^\n]s",local[i].Flat.posicaoFL);
        printf("4-Numeros de vagas na garagem?:\n");
        scanf("%d",&local[i].Flat.vagasFl);
        printf("5-O Flat possui ar condicionado?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Flat.arFL);
        printf("6-O Flat possui internet e TV a cabo?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Flat.internet_tvFL);
        printf("7-O Flat possui serviços de lavanderia?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Flat.lavanderiaFL);
        printf("8-O Flat possui arrumação/limpeza?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Flat.limpezaFL);
        printf("9-O Flat possui recepção 24h?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Flat.recepcaoFL);

    }else if(strcmp(imov,"STUDIO")==0){
        Fendereco(i,local);
        local[i].tipoTimovel=5;
        printf("1-Informe a area ocupada pelo Studio(em metro quadrados):\n");
        scanf("%f",&local[i].Studio.areaST);
        printf("2-Informe o numero de quartos do Studio:\n");
        scanf("%d",&local[i].Studio.quartosST);
        printf("3-Informe alguma referencia(posicao):\n");
        scanf(" %[^\n]s",local[i].Studio.posicaoST);
        printf("4-Numeros de vagas na garagem?:\n");
        scanf("%d",&local[i].Studio.vagasST);
        printf("5-O Studio possui ar condicionado?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Studio.arST);
        printf("6-O Studio possui internet e TV a cabo?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Studio.internet_tvST);
        printf("7-O Studio possui serviços de lavanderia?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Studio.lavanderiaST);
        printf("8-O Studio possui arrumação/limpeza?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Studio.limpezaST);
        printf("9-O Studio possui recepção 24h?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Studio.recepcaoST);
        printf("10-O Studio possui piscina?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Studio.piscinaST);
        printf("11-O Studio possui sauna?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Studio.saunaST);
        printf("12-O Studio possui sala de ginastica?(responda com Y/N):\n");
        scanf(" %[^\n]s",&local[i].Studio.ginasticaST);

    }
    system("cls");
}
