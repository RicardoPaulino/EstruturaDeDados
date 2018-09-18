/**
* Ricardo Paulino do Nascimento
*/
#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

struct elemento{
  struct aluno dados;
  struct elemento* prox;
};

typedef struct elemento Elem;

int main() {
  Lista* li;

  li = cria_lista();

  return 0;
}

// Cria a lista
Lista* cria_lista(){
  Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
      printf("[success] - Criou a lista\n");
      *li = NULL;
    }
      printf("[error] - Nao criou a lista\n");
    return li;
}
