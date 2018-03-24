#ifndef CADASTRO_H_INCLUDED
#define CADASTRO_H_INCLUDED

typedef struct {
    int pavimentosC;
    int quartosC;
    float areaT;
    float areaC;

}TCasa;

typedef struct {
    float areaP;
    int quartosAP;
    int vagasG;
    char posicao[20];

}TApartamento;

typedef struct {
    float areaT;

}Terrenos;



typedef struct {
    int tipoTimovel;//1-casa 2-ap 3-terreno
    char rua[40];
    char bairro[20];
    char cidade[20];
    int numero;
    int cep;
    int venda;
    float valor;
    TCasa casa;
    TApartamento AP;
    Terrenos Ter;
}Timovel;



void Fcadastro(Timovel [],int, char *);
void verificarImoveis(Timovel[]);
void verificarLocal(Timovel local[],int);
void verificarVenda(Timovel local[],int);
void verificarAlugarBairro(Timovel local[]);
void verificarVendaBairro(Timovel local[]);
void verificarCidade(Timovel local[]);
void verificarEspecifico(Timovel local[],int);
#endif

