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
    float valor;
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
    TCasa casa;
    TApartamento AP;
    Terrenos Ter;
}Timovel;


void Flocal(int,Timovel[]);

void Fcadastro(Timovel [],int i, char *imov );


void verificarImoveis(Timovel[]);

#endif