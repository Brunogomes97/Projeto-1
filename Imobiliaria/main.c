#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 100
#include "cadastro.h"

Timovel imo[MAX];

int main(){
    int caso;
    int j=0;
    char imovel[10];


    do{
        printf("*************************************************\n");
        printf("*******************BEM VINDO!********************\n");
        printf("*************************************************\n");
        printf("1-Cadastrar imoveis\n\n");
        printf("2-Verificar todos os imoveis disponiveis\n\n");
        printf("3-Consulte todos os atributos de um imovel\n\n");
        printf("4-Verificar os imoveis disponiveis para venda\n\n");
        printf("5-Verificar os imoveis para alugar por bairro\n\n");
        printf("6-Verificar os imoveis para vender por bairro\n\n");
        printf("7-Verificar os imoveis disponiveis por cidade\n\n");
        printf("8-Sair do Programa\n\n");
        printf("*************************************************\n");
        printf("Insira a opcao desejada:\n");
        scanf("%d",&caso);


        switch (caso){

        case 1:
            printf("O que deseja cadastrar?(Casa,apartamento ou terreno):\n");
            scanf(" %[^\n]s",imovel);
            strupr(imovel);
            system("cls");
            Fcadastro(imo,j,imovel);
            j++;

            break;

        case 2:

            break;
        case 3:
            system("cls");
            verificarImoveis(imo);
            break;


        case 4:
            //ConsultaVendaTipo
            break;

        case 5:
            verificarAlugarBairro(imo);
            break;
        case 6:
            verificarVendaBairro(imo);
            break;
        case 7:
            verificarCidade(imo);
            break;
        case 8:
            break;

        default:
            system("cls");
            printf("Insira uma entrada valida!\n");
            break;
        }

    }while(caso!=8);

        return 0;
    }
