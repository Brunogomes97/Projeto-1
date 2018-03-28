#ifndef cadastro_h
#define cadastro_h
#define DADO 2

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
    char arFL[DADO];
    char internet_tvFL[DADO];
    char lavanderiaFL[DADO];
    char limpezaFL[DADO];
    char recepcaoFL[DADO];

}TFlat;

typedef struct {
    float areaST;
    int quartosST;
    int vagasST;
    char posicaoST[20];
    char arST[DADO];
    char internet_tvST[DADO];
    char lavanderiaST[DADO];
    char limpezaST[DADO];
    char recepcaoST[DADO];
    char piscinaST[DADO];
    char saunaST[DADO];
    char ginasticaST[DADO];


}TStudio;

typedef struct {
    int tipoTimovel;//1-casa 2-ap 3-terreno 4-flat 5-studio
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
    TFlat Flat;
    TStudio Studio;
}Timovel;


void Fcadastro(Timovel[],int, char *);
void verificarImoveis(Timovel[]);

#endif
