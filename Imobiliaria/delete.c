#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
#include "delete.h"
#include "cadastro.h"
#include "verificacao.h"
#include <conio.h>


void deLocal(Timovel d[],int i){

    memset(&d[i].cidade,0,sizeof(d[i].cidade));
    memset(&d[i].rua,0,sizeof(d[i].rua));
    memset(&d[i].cep,0,sizeof(d[i].cep));
    memset(&d[i].valor,0,sizeof(d[i].valor));
    memset(&d[i].bairro,0,sizeof(d[i].bairro));
    memset(&d[i].venda,0,sizeof(d[i].venda));
}
void deCasa(Timovel d[],int i){
    memset(&d[i].casa.pavimentosC,0,sizeof(d[i].casa.pavimentosC));
    memset(&d[i].casa.quartosC,0,sizeof(d[i].casa.quartosC));
    memset(&d[i].casa.areaT,0,sizeof(d[i].casa.areaT));
    memset(&d[i].casa.areaC,0,sizeof(d[i].casa.areaC));
    memset(&d[i].numero,0,sizeof(d[i].numero));
}
void deTer(Timovel d[],int i){
    memset(&d[i].Ter.areaT,0,sizeof(d[i].Ter.areaT));
}
void deAP(Timovel d[],int i){
    memset(&d[i].AP.andarAP,0,sizeof(d[i].AP.andarAP));
    memset(&d[i].AP.areaP,0,sizeof(d[i].AP.areaP));
    memset(&d[i].AP.posicaoP,0,sizeof(d[i].AP.posicaoP));
    memset(&d[i].AP.quartosAP,0,sizeof(d[i].AP.quartosAP));
    memset(&d[i].AP.vagasG,0,sizeof(d[i].AP.vagasG));
}

void deFlat(Timovel d[],int i){
    memset(&d[i].Flat.areaFL,0,sizeof(d[i].Flat.areaFL));
    memset(&d[i].Flat.arFL,0,sizeof(d[i].Flat.arFL));
    memset(&d[i].Flat.internet_tvFL,0,sizeof(d[i].Flat.internet_tvFL));
    memset(&d[i].Flat.lavanderiaFL,0,sizeof(d[i].Flat.lavanderiaFL));
    memset(&d[i].Flat.limpezaFL,0,sizeof(d[i].Flat.limpezaFL));
    memset(&d[i].Flat.posicaoFL,0,sizeof(d[i].Flat.posicaoFL));
    memset(&d[i].Flat.quartosFL,0,sizeof(d[i].Flat.quartosFL));
    memset(&d[i].Flat.recepcaoFL,0,sizeof(d[i].Flat.recepcaoFL));
    memset(&d[i].Flat.vagasFl,0,sizeof(d[i].Flat.vagasFl));
}

void deStudio(Timovel d[],int i){
    memset(&d[i].Studio.areaST,0,sizeof(d[i].Studio.areaST));
    memset(&d[i].Studio.arST,0,sizeof(d[i].Studio.arST));
    memset(&d[i].Studio.ginasticaST,0,sizeof(d[i].Studio.ginasticaST));
    memset(&d[i].Studio.internet_tvST,0,sizeof(d[i].Studio.internet_tvST));
    memset(&d[i].Studio.lavanderiaST,0,sizeof(d[i].Studio.lavanderiaST));
    memset(&d[i].Studio.limpezaST,0,sizeof(d[i].Studio.limpezaST));
    memset(&d[i].Studio.piscinaST,0,sizeof(d[i].Studio.piscinaST));
    memset(&d[i].Studio.posicaoST,0,sizeof(d[i].Studio.posicaoST));
    memset(&d[i].Studio.quartosST,0,sizeof(d[i].Studio.quartosST));
    memset(&d[i].Studio.recepcaoST,0,sizeof(d[i].Studio.recepcaoST));
    memset(&d[i].Studio.saunaST,0,sizeof(d[i].Studio.saunaST));
    memset(&d[i].Studio.vagasST,0,sizeof(d[i].Studio.vagasST));

}
void deletarImovel(Timovel x[]){
    int i;
    int n;
    int p;
 do{
    for(i=0;i<MAX;i++){//listando imoveis e numeros de cadastro

        if(x[i].tipoTimovel==1){
            printf("***************************************\n");
            printf("CASA 00%d\n",i);
            exibirLocal(x[i]);
            printf("***************************************\n");
        }
        else if(x[i].tipoTimovel==2){
            printf("***************************************\n");
            printf("AP 00%d\n",i);
            exibirLocal(x[i]);
            printf("***************************************\n");
        }
        else if(x[i].tipoTimovel==3){
            printf("***************************************\n");
            printf("TERRENO 00%d\n",i);
            exibirLocal(x[i]);
            printf("***************************************\n");
        }
        else if(x[i].tipoTimovel==4){
            printf("***************************************\n");
            printf("FLAT 00%d\n",i);
            exibirLocal(x[i]);
            printf("***************************************\n");
        }
        else if(x[i].tipoTimovel==5){
            printf("***************************************\n");
            printf("STUDIO 00%d\n",i);
            exibirLocal(x[i]);
            printf("***************************************\n");
        }
    }


    printf("Insira a numeracao do imovel que deseja deletar:\n");
    scanf("%d",&n);
    if(x[n].tipoTimovel!=0){
            deLocal(x,n);
            deCasa(x,n);
            deFlat(x,n);
            deStudio(x,n);
            deTer(x,n);
            deAP(x,n);
            x[n].tipoTimovel=0;

        printf("Imovel deletado com sucesso!\n");
    }else {
        printf("Erro ao deletar o imovel correspondente!\n");
    }

    printf("Deseja Sair?(SIM - 1 ou qualquer numero para deletar outro imovel)\n");
    scanf("%d",&p);
    system("cls");
    }while(p!=1);


}






