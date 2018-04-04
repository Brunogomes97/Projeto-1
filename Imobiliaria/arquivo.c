#include<stdio.h>
#include "cadastro.h"
#include "arquivo.h"

int x;

int puxarArquivo(Timovel local[], int i){

    FILE *endereco;
    FILE *casa;
    FILE *apartamento;
    FILE *terreno;
    FILE *flat;
    FILE *studio;

    endereco = fopen("endereco.txt", "r");
    casa = fopen("casa.txt", "r");
    apartamento = fopen("apartamento.txt", "r");
    terreno = fopen("terreno.txt", "r");
    flat = fopen("flat.txt", "r");
    studio = fopen("studio.txt", "r");
    printf("inicio\n");
    if(endereco == NULL ){
            return 0;
    }
    printf("entrou no if\n");
    while(!feof(endereco)){

        fscanf(endereco," %[^\n]s",local[i].cidade);
        fscanf(endereco," %[^\n]s",local[i].bairro);
        fscanf(endereco," %[^\n]s",local[i].rua);
        fscanf(endereco,"%d",&local[i].numero);
        fscanf(endereco,"%s",local[i].cep);
        fscanf(endereco,"%f",&local[i].valor);
        fscanf(endereco,"%d",&local[i].venda);
        fscanf(endereco,"%d",&local[i].tipoTimovel);

        if(local[i].tipoTimovel==1){
            fscanf(casa,"%d",&local[i].casa.pavimentosC);
            fscanf(casa,"%d",&local[i].casa.quartosC);
            fscanf(casa,"%f",&local[i].casa.areaT);
            fscanf(casa,"%f",&local[i].casa.areaC);
        }
        if(local[i].tipoTimovel==2){
            fscanf(apartamento,"%f",&local[i].AP.areaP);
            fscanf(apartamento,"%d",&local[i].AP.quartosAP);
            fscanf(apartamento," %[^\n]s",local[i].AP.posicaoP);
            fscanf(apartamento,"%d",&local[i].AP.vagasG);
            fscanf(apartamento,"%d",&local[i].AP.andarAP);
        }
        if(local[i].tipoTimovel==3){
            fscanf(terreno,"%f",&local[i].Ter.areaT);
        }
        if(local[i].tipoTimovel==4){
            fscanf(flat,"%f",&local[i].Flat.areaFL);
            fscanf(flat,"%d",&local[i].Flat.quartosFL);
            fscanf(flat," %[^\n]s",local[i].Flat.posicaoFL);
            fscanf(flat,"%d",&local[i].Flat.vagasFl);
            fscanf(flat,"%d",&local[i].Flat.arFL);
            fscanf(flat,"%d",&local[i].Flat.internet_tvFL);
            fscanf(flat,"%d",&local[i].Flat.lavanderiaFL);
            fscanf(flat,"%d",&local[i].Flat.limpezaFL);
            fscanf(flat,"%d",&local[i].Flat.recepcaoFL);
        }
        if(local[i].tipoTimovel==5){
            fscanf(studio,"%f",&local[i].Studio.areaST);
            fscanf(studio,"%d",&local[i].Studio.quartosST);
            fscanf(studio," %[^\n]s",local[i].Studio.posicaoST);
            fscanf(studio,"%d",&local[i].Studio.vagasST);
            fscanf(studio,"%d",&local[i].Studio.arST);
            fscanf(studio,"%d",&local[i].Studio.internet_tvST);
            fscanf(studio,"%d",&local[i].Studio.lavanderiaST);
            fscanf(studio,"%d",&local[i].Studio.limpezaST);
            fscanf(studio,"%d",&local[i].Studio.recepcaoST);
            fscanf(studio,"%d",&local[i].Studio.piscinaST);
            fscanf(studio,"%d",&local[i].Studio.saunaST);
            fscanf(studio,"%d",&local[i].Studio.ginasticaST);
        }
        if(local[i].tipoTimovel!=0){
            ++i;
        }
    }

    fclose(endereco);
    fclose(casa);
    fclose(apartamento);
    fclose(terreno);
    fclose(flat);
    fclose(studio);
    return i;
}

void salvarArquivo(Timovel local[],int j){

    FILE *endereco;
    FILE *casa;
    FILE *apartamento;
    FILE *terreno;
    FILE *flat;
    FILE *studio;

    endereco = fopen("endereco.txt", "w");
    casa = fopen("casa.txt", "w");
    apartamento = fopen("apartamento.txt", "w");
    terreno = fopen("terreno.txt", "w");
    flat = fopen("flat.txt", "w");
    studio = fopen("studio.txt", "w");

    for(x=0; x<j;x++){
        if(local[x].tipoTimovel!=0){
            fprintf(endereco,"%s\n",local[x].cidade);
            fprintf(endereco,"%s\n",local[x].bairro);
            fprintf(endereco,"%s\n",local[x].rua);
            fprintf(endereco,"%d\n",local[x].numero);
            fprintf(endereco,"%s\n",local[x].cep);
            fprintf(endereco,"%.2f\n",local[x].valor);
            fprintf(endereco,"%d\n",local[x].venda);
            fprintf(endereco,"%d\n",local[x].tipoTimovel);

            if(local[x].tipoTimovel==1){
                fprintf(casa,"%d\n",local[x].casa.pavimentosC);
                fprintf(casa,"%d\n",local[x].casa.quartosC);
                fprintf(casa,"%.2f\n",local[x].casa.areaT);
                fprintf(casa,"%.2f\n",local[x].casa.areaC);
            }
            if(local[x].tipoTimovel==2){
                fprintf(apartamento,"%.2f\n",local[x].AP.areaP);
                fprintf(apartamento,"%d\n",local[x].AP.quartosAP);
                fprintf(apartamento,"%s\n",local[x].AP.posicaoP);
                fprintf(apartamento,"%d\n",local[x].AP.vagasG);
                fprintf(apartamento,"%d\n",local[x].AP.andarAP);
            }
            if(local[x].tipoTimovel==3){
                fprintf(terreno,"%f\n",local[x].Ter.areaT);
            }
            if(local[x].tipoTimovel==4){
                fprintf(flat,"%.2f\n",local[x].Flat.areaFL);
                fprintf(flat,"%d\n",local[x].Flat.quartosFL);
                fprintf(flat,"%s\n",local[x].Flat.posicaoFL);
                fprintf(flat,"%d\n",local[x].Flat.vagasFl);
                fprintf(flat,"%d\n",local[x].Flat.arFL);
                fprintf(flat,"%d\n",local[x].Flat.internet_tvFL);
                fprintf(flat,"%d\n",local[x].Flat.lavanderiaFL);
                fprintf(flat,"%d\n",local[x].Flat.limpezaFL);
                fprintf(flat,"%d\n",local[x].Flat.recepcaoFL);
            }
            if(local[x].tipoTimovel==5){
                fprintf(studio,"%.2f\n",local[x].Studio.areaST);
                fprintf(studio,"%d\n",local[x].Studio.quartosST);
                fprintf(studio,"%s\n",local[x].Studio.posicaoST);
                fprintf(studio,"%d\n",local[x].Studio.vagasST);
                fprintf(studio,"%d\n",local[x].Studio.arST);
                fprintf(studio,"%d\n",local[x].Studio.internet_tvST);
                fprintf(studio,"%d\n",local[x].Studio.lavanderiaST);
                fprintf(studio,"%d\n",local[x].Studio.limpezaST);
                fprintf(studio,"%d\n",local[x].Studio.recepcaoST);
                fprintf(studio,"%d\n",local[x].Studio.piscinaST);
                fprintf(studio,"%d\n",local[x].Studio.saunaST);
                fprintf(studio,"%d\n",local[x].Studio.ginasticaST);
            }
        }
    }

    fclose(endereco);
    fclose(casa);
    fclose(apartamento);
    fclose(terreno);
    fclose(flat);
    fclose(studio);
}
//
//
