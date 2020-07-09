#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define PRODUTOS 10
#define ARQUIVO "arquivo.txt"

struct Produto{
    char descricao[50];
    int quantidade_atual, quantidade_minima, mes, ano;
};

char menu[];

void opcao(int, struct Produto *dados);

void entra_produto(struct Produto *dados);
void lista_podutos_na_tela(struct Produto *dados);
void pesquisa_descricao(struct Produto *dados);
void pesquisa_primeira_letra_descricao(struct Produto *dados);
void pesquisa_validade(struct Produto *dados);
void lista_abaixo_estoque_minimo(struct Produto *dados);

void entrada_saida(struct Produto *dados);
void altera_produto(struct Produto *dados);
void excluir_produto(struct Produto *dados);



int main(){


    struct Produto dados;
    int i;

    do{

        printf(menu);
        scanf("%d", &i);
        opcao(i, &dados);

    }while(i!=10);

    return 0;
}


////////////////////////////////////////////////////////////////////////////////


char menu[] = {
    " 1 - entra produto \n"
    " 2 - lista produtos na tela \n"
    " 3 - pesquisar um produto pela descricao \n"
    " 4 - pesquisar um produto pela 1. letra da descricao \n"
    " 5 - pesquisar uma data de validade \n"
    " 6 - lista os produtos abaixo do estoque minimo \n"
    " 7 - movimenta quantidade em estoque (entrada e saida) \n"
    " 8 - altera produto \n"
    " 9 - exclui produto \n"
    "10 - saida \n\n"
};

void opcao(int value, struct Produto* dados){

    system("cls");

    switch(value){
        case 1: entra_produto(&dados); break;
        case 2: lista_podutos_na_tela(&dados); break;
        case 3: pesquisa_descricao(&dados); break;
        case 4: pesquisa_primeira_letra_descricao(&dados); break;
        case 5: pesquisa_validade(&dados); break;
        case 6: lista_abaixo_estoque_minimo(&dados); break;
        case 7: entrada_saida(&dados); break;
        case 8: altera_produto(&dados); break;
        case 9: excluir_produto(&dados); break;
        case 10: break;
        default: printf("Digite um numero de 1 a 10! \n\n"); break;
    }
}


void entra_produto(struct Produto* dados){

    FILE *arquivo_w = fopen(ARQUIVO, "a");

    printf("Digite a descricao: ");
    fflush(stdin);
    scanf("%[^\n]%*c", dados->descricao);

    printf("Digite a quantidade atual: ");
    scanf("%d", &dados->quantidade_atual);

    printf("Digite a quantidade minima: ");
    scanf("%d", &dados->quantidade_minima);

    printf("Digite a validade MES/ANO (apenas numeros): ");
    scanf("%d %d", &dados->mes, &dados->ano);

    printf("\n\n");

    fwrite(dados,sizeof(struct Produto), 1, arquivo_w);
    fclose(arquivo_w);
}

void lista_podutos_na_tela(struct Produto *dados){

    FILE *arquivo_r = fopen(ARQUIVO, "r");

    char descricao[50];
    int q_min, q_atual, mes, ano;

    for(int i = 0; i < PRODUTOS; i++){
        fseek(arquivo_r, i*sizeof(struct Produto), SEEK_SET);
        fread(dados, sizeof(struct Produto), 1, arquivo_r);

        printf(" Nome: %s\n Quantidade: %d\n Quantidade minima: %d\n Validade: %d/%d\n\n",
                                                                                dados->descricao,
                                                                                dados->quantidade_atual,
                                                                                dados->quantidade_minima,
                                                                                dados->mes,
                                                                                dados->ano);
    }
}


void pesquisa_descricao(struct Produto *dados){

    bool r = true;
    char descricao[50];
    FILE *arquivo_r = fopen(ARQUIVO, "r");

    printf("Digite a descricao: ");
    fflush(stdin);
    scanf("%[^\n]%*c", descricao);
    printf("\n");

    for(int i = 0; i < PRODUTOS; i++){
        fseek(arquivo_r, i*sizeof(struct Produto), SEEK_SET);
        fread(dados, sizeof(struct Produto), 1, arquivo_r);

        if(strcmp(descricao, dados->descricao) == 0){
            printf(" Nome: %s\n Quantidade: %d\n Quantidade minima: %d\n Validade: %d/%d\n\n",
                                                                                    dados->descricao,
                                                                                    dados->quantidade_atual,
                                                                                    dados->quantidade_minima,
                                                                                    dados->mes,
                                                                                    dados->ano);
            r = false;
        }

    }
    if(r) printf("Descricao nao existe!\n\n");
}

void pesquisa_primeira_letra_descricao(struct Produto *dados){

    bool r = true;
    char descricao[50];
    FILE *arquivo_r = fopen(ARQUIVO, "r");

    printf("Digite a primeira letra da descricao: ");
    fflush(stdin);
    scanf("%[^\n]%*c", descricao);
    printf("\n");

    for(int i = 0; i < PRODUTOS; i++){
        fseek(arquivo_r, i*sizeof(struct Produto), SEEK_SET);
        fread(dados, sizeof(struct Produto), 1, arquivo_r);

        if(descricao[0] == dados->descricao[0]){
            printf(" Nome: %s\n Quantidade: %d\n Quantidade minima: %d\n Validade: %d/%d\n\n",
                                                                                    dados->descricao,
                                                                                    dados->quantidade_atual,
                                                                                    dados->quantidade_minima,
                                                                                    dados->mes,
                                                                                    dados->ano);
            r = false;
        }

    }
    if(r) printf("Descricao nao existe!\n\n");
}

void pesquisa_validade(struct Produto *dados){

    bool r = true;
    int mes, ano;
    FILE *arquivo_r = fopen(ARQUIVO, "r");

    printf("Digite a validade MES/ANO (apenas numeros): ");
    fflush(stdin);
    scanf("%d %d", &mes, &ano);
    printf("\n");

    for(int i = 0; i < PRODUTOS; i++){
        fseek(arquivo_r, i*sizeof(struct Produto), SEEK_SET);
        fread(dados, sizeof(struct Produto), 1, arquivo_r);

        if(mes == dados->mes && ano == dados->ano){
            printf(" Nome: %s\n Quantidade: %d\n Quantidade minima: %d\n Validade: %d/%d\n\n",
                                                                                    dados->descricao,
                                                                                    dados->quantidade_atual,
                                                                                    dados->quantidade_minima,
                                                                                    dados->mes,
                                                                                    dados->ano);
            r = false;
        }

    }
    if(r) printf("Validade nao existe!\n\n");
}

void lista_abaixo_estoque_minimo(struct Produto *dados){

    bool r = true;
    FILE *arquivo_r = fopen(ARQUIVO, "r");

    printf("Produtos abaixo do estoque minimo: \n\n");

    for(int i = 0; i < PRODUTOS; i++){
        fseek(arquivo_r, i*sizeof(struct Produto), SEEK_SET);
        fread(dados, sizeof(struct Produto), 1, arquivo_r);

        if(dados->quantidade_atual < dados->quantidade_minima){
            printf(" Nome: %s\n Quantidade: %d\n Quantidade minima: %d\n Validade: %d/%d\n\n",
                                                                                    dados->descricao,
                                                                                    dados->quantidade_atual,
                                                                                    dados->quantidade_minima,
                                                                                    dados->mes,
                                                                                    dados->ano);
            r = false;
        }

    }
    if(r) printf("Nenhum produto com estoque abaixo do minimo!\n\n");
}

void entrada_saida(struct Produto *dados){
}

void altera_produto(struct Produto *dados){

    bool r = true;
    FILE *arquivo_r = fopen(ARQUIVO, "r");
    FILE *arquivo_w = fopen(ARQUIVO, "a");
    int i;
    char descricao[50];

    printf("Digite a discricao do produto que deseja alterar: ");
    fflush(stdin);
    scanf("%[^\n]%*c", descricao);
    printf("\n");

    for(int i = 0; i < PRODUTOS; i++){
        fseek(arquivo_r, i*sizeof(struct Produto), SEEK_SET);
        fread(dados, sizeof(struct Produto), 1, arquivo_r);

        if(strcmp(descricao, dados->descricao) == 0){
            printf(" Nome: %s\n Quantidade: %d\n Quantidade minima: %d\n Validade: %d/%d\n\n",
                                                                                    dados->descricao,
                                                                                    dados->quantidade_atual,
                                                                                    dados->quantidade_minima,
                                                                                    dados->mes,
                                                                                    dados->ano);
            r = false;

            printf("Deseja alterar esse produto? 1 p/sim 2 p/nao: ");
            fflush(stdin);
            scanf("%d", &i);

            if(i==1){
                printf("Digite a descricao: ");
                fflush(stdin);
                scanf("%[^\n]%*c", dados->descricao);

                printf("Digite a quantidade atual: ");
                scanf("%d", &dados->quantidade_atual);

                printf("Digite a quantidade minima: ");
                scanf("%d", &dados->quantidade_minima);

                printf("Digite a validade MES/ANO (apenas numeros): ");
                scanf("%d %d", &dados->mes, &dados->ano);

                printf("\n\n");

                fwrite(dados,i*sizeof(struct Produto), 1, arquivo_w);
                fclose(arquivo_w);
            }

        }

    }
    if(r) printf("Nenhum produto com essa descricao!\n\n");
}

void excluir_produto(struct Produto *dados){
}




