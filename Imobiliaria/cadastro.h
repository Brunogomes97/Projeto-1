#ifndef cadastro_h
#define cadastro_h


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
    int andarAP;
    char posicaoP[20];

}TApartamento;

typedef struct {
    float areaT;

}Terrenos;

typedef struct {
    float areaFL;
    int quartosFL;
    int vagasFl;
    char posicaoFL[20];
    int arFL;
    int internet_tvFL;
    int lavanderiaFL;
    int limpezaFL;
    int recepcaoFL;

}TFlat;

typedef struct {
    float areaST;
    int quartosST;
    int vagasST;
    char posicaoST[20];
    int arST;
    int internet_tvST;
    int lavanderiaST;
    int limpezaST;
    int recepcaoST;
    int piscinaST;
    int saunaST;
    int ginasticaST;


}TStudio;

typedef struct {
    int tipoTimovel;//1-casa 2-ap 3-terreno 4-flat 5-studio
    char rua[40];
    char bairro[20];
    char cidade[20];
    char cep[10];
    int venda;
    float valor;
    int numero;
    TCasa casa;
    TApartamento AP;
    Terrenos Ter;
    TFlat Flat;
    TStudio Studio;
}Timovel;


void Fcadastro(Timovel[],int, char *);
void verificarImoveis(Timovel[]);
void cadCasa(Timovel[],int);
void cadAP(Timovel[],int);
void cadTerreno(Timovel[],int);
void cadStudio(Timovel[],int);
void cadFlat(Timovel[],int);
#endif
