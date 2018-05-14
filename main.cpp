#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef int bool;
typedef int TIPOCHAVE;

typedef struct no{
    TIPOCHAVE chave;
    struct no *primFilho;
    struct nno *proxIrmao;
}NO;

typedef NO* PONT;


PONT inicializa(TIPOCHAVE ch){
    return(criarNovoNo(ch));
}

PONT criarNovoNo(TIPOCHAVE ch){
    PONT novo = (PONT)malloc(sizeof(NO));
    novo->primFilho = NULL;
    novo->proxIrmao = NULL;
    novo->chave ch;
    return(novo);
}

bool insere(PONT raiz, TIPOCHAVE novaChave, TIPOCHAVE chavePai){
    PONT pai = buscaChave(chavePai, raiz);
    if(!pai) return(false);
    PONT filho = criarNovoNo(novaChave);
    PONT p = pai->primFilho;
    if(!p) pai->primFilho = filho;
    else{
        while(p->proxIrmao)
        p = p ->proxIrmao;
    }
    return(true);
}



using namespace std;

int main()
{

    return 0;
}
