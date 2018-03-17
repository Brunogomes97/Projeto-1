#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 100

struct TCasa{
    int pavimentosC;
    int quartosC;
    float areaT;
    float areaC;

};

struct TApartamento{
    float areaP;
    float valor;
    int quartosAP;
    int vagasG;
    char posicao[20];

};

struct Terrenos{
    float areaT;

};

typedef struct TImoveis{
    int tipoImovel;//1-casa 2-ap 3-terreno
    char rua[40];
    char bairro[20];
    char cidade[20];
    int numero;
    int cep;
    int venda;
    struct TCasa casa;
    struct TApartamento AP;
    struct Terrenos Ter;
}imovel;
imovel imo[MAX];

void Flocal(int i,imovel tipo[]){

    printf("**************************************\n");
    printf("Insira as informacoes gerais do imovel:\n");
    printf("**************************************\n");
    printf("1-Insira a cidade do imovel:\n");
    scanf(" %[^\n]s",tipo[i].cidade);
    printf("2-Insira o bairro do imovel:\n");
    scanf(" %[^\n]s",tipo[i].bairro);
    printf("3-Informe o logradouro(rua) do imovel:\n");
    scanf(" %[^\n]s",tipo[i].rua);
    printf("4-Insira o CEP:\n");
    scanf("%d",&tipo[i].cep);
    printf("5-Disponibilidade do imovel(1-Venda|2-Nao esta a Venda|3-Alugar):\n");
    scanf("%d",&tipo[i].venda);


}

void Fcadastro(imovel tipo[],int i, char *imov){


    Flocal(i,tipo);
    system("cls");
    if(stricmp(imov,"casa")==0){
        tipo[i].tipoImovel=1;
        printf("******************************************\n");
        printf("Insira as informacoes especificas da casa:\n");
        printf("******************************************\n");
        printf("1-Insira o numero da casa:\n");
        scanf("%d",&tipo[i].numero);
        printf("2-Insira o numero de pavimentos:\n");
        scanf("%d",&tipo[i].casa.pavimentosC);
        printf("3-Insira o numero de quartos da casa:\n");
        scanf("%d",&tipo[i].casa.quartosC);
        printf("4-Area do terreno:\n");
        scanf("%f",&tipo[i].casa.areaT);
        printf("5-Area do terreno construida:\n");
        scanf("%f",&tipo[i].casa.areaC);


    }else if(stricmp(imov,"apartamento")==0){
        tipo[i].tipoImovel=2;
        printf("1-Informe a area ocupada pelo Apartamento(em metro quadrados):\n");
        scanf("%f",&tipo[i].AP.areaP);
        printf("2-Informe o numero de quartos do Apartamento:\n");
        scanf("%d",&tipo[i].AP.quartosAP);
        printf("3-Informe alguma referencia(posicao):\n");
        scanf(" %[^\n]s",tipo[i].AP.posicao);
        printf("4-Informe o valor do condominio:\n");
        scanf("%f",&tipo[i].AP.valor);
        printf("5-Numeros de vagas na garagem?:\n");
        scanf("%d",&tipo[i].AP.vagasG);

    }else if(stricmp(imov,"terreno")==0){
        tipo[i].tipoImovel=3;
        printf("1-Insira a area do terreno:\n");
        scanf("%f",&tipo[i].Ter.areaT);

    }
    system("cls");
}

void verificarImoveis(imovel tipo[]){
    int i;

    printf("**************************\n");
    for(i=0;i<MAX;i++){
        if(tipo[i].tipoImovel == 1){
           printf("***************************\n");
           printf("CASA - %d\n",i);
           printf("***************************\n");
           printf("Informacoes de localizacao:\n");
           printf("Cidade  - %s\n",tipo[i].cidade);
           printf("Bairro  - %s\n",tipo[i].bairro);
           printf("Rua     - %s\n",tipo[i].rua);
           printf("CEP     - %d\n",tipo[i].cep);
           printf("***************************\n");
           printf("Informacoes especificas\n");
           printf("Numero da Casa       - %d \n",tipo[i].numero);
           printf("Numero de Pavimentos - %d \n",tipo[i].casa.pavimentosC);
           printf("Numero de Quartos    - %d \n",tipo[i].casa.quartosC);
           printf("Area do terreno      - %.2f m^2 \n",tipo[i].casa.areaT);
           printf("Area construida      - %.2f m^2\n",tipo[i].casa.areaC);
           if(tipo[i].venda==1)
                printf("A Venda!\n");
           else if(tipo[i].venda==2)
                printf("Nao esta a venda!\n");
           else if(tipo[i].venda==3)
                printf("Para alugar!\n");

        }else if(tipo[i].tipoImovel == 2){
           printf("***************************\n");
           printf("AP - %d\n",i);
           printf("***************************\n");
           printf("Informacoes de localizacao:\n");
           printf("Cidade  - %s\n",tipo[i].cidade);
           printf("Bairro  - %s\n",tipo[i].bairro);
           printf("Rua     - %s\n",tipo[i].rua);
           printf("CEP     - %d\n",tipo[i].cep);

           printf("***************************\n");
           printf("Informacoes especificas\n");
           printf("Area do Apartamento   - %.2f m^2:\n",tipo[i].AP.areaP);
           printf("Numero de Quartos     - %d\n",tipo[i].AP.quartosAP);
           printf("Posicao(referencia)   - %s\n",tipo[i].AP.posicao);
           printf("Valor do condominio   - R$ %.2f\n",tipo[i].AP.valor);
           printf("N de vagas na garagem - %d\n",tipo[i].AP.vagasG);
             if(tipo[i].venda==1)
                printf("A Venda!\n");
           else if(tipo[i].venda==2)
                printf("Nao esta a venda!\n");
           else if(tipo[i].venda==3)
                printf("Para alugar!\n");

        }else if(tipo[i].tipoImovel == 3){
           printf("***************************\n");
           printf("Informacoes de localizacao:\n");
           printf("Cidade  - %s\n",tipo[i].cidade);
           printf("Bairro  - %s\n",tipo[i].bairro);
           printf("Rua     - %s\n",tipo[i].rua);
           printf("CEP     - %d\n",tipo[i].cep);
           printf("***************************\n");
           printf("Informacoes especificas\n");
           printf("Area do  terreno  - %.2f m^2\n",tipo[i].Ter.areaT);

             if(tipo[i].venda==1)
                printf("A Venda!\n");
           else if(tipo[i].venda==2)
                printf("Nao esta a venda!\n");
           else if(tipo[i].venda==3)
                printf("Para alugar!\n");

        }

    }
}

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
            system("cls");
            Fcadastro(imo,j,imovel);
            j++;

            break;

        case 2:
            system("cls");
            verificarImoveis(imo);
            break;

        case 3:
            //ConsultAtributos
            break;

        case 4:
            //ConsultaVendaTipo
            break;

        case 5:
            //AlugaBairro
            break;
        case 6:
            //VendaBairro
            break;
        case 7:
            //AtributosCidade
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
