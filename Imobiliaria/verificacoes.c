#include<stdio.h>
#include<stdio.h>
#include<string.h>
#define MAX 100
#include "verificacoes.h"


void verificarquant(Timovel Local[]){
int i;
int casa;
int ap;
int terreno;


    for(i=0;i<MAX;i++){

        if(local[i].tipoTimovel == 1){

        casa+=1;

        }else if(local[i].tipoTimovel==2){

        ap+=1;

        }else{

        terreno+=1;

        }



    }

    printf("Sao %d, %d apartamentos %d Terrenos",casa,ap,terreno);
}
