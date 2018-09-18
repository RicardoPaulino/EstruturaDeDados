/**
* Ricardo Paulino do Nascimento
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto.h"
// estrutura de dados de um ponto
struct ponto{
  float x;
  float y;
};

int main() {
  float d;
  Ponto* p, *q;

  p = pto_cria(10,21);
  q = pto_cria(7,25);

  d = pto_distancia(p,q);
  printf("\n");
  printf("distancia entre os pontos: %f\n", d);
  pto_libera(q);
  pto_libera(p);

  return 0;
}
// cria um ponto
Ponto* pto_cria(float x, float y){
  Ponto* p = (Ponto*)malloc(sizeof(Ponto));
  if(p != NULL){
    p->x = x;
    p->y = y;
  }
  return p;
}
// libera espaço
void pto_libera(Ponto* p){
  free(p);
}
// acessa o ponto
void pto_acessa(Ponto* p, float* x, float* y){
  *x = p->x;
  *y = p->y;
}
// atribui valor ao x e y
void pto_atribui(Ponto* p, float x, float y){
  p->x = x;
  p->y = y;
}
// distância entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2){
  float dx = p1->x - p2->x;
  float dy = p1->y - p2->y;
  return sqrt(dx * dx + dy * dy);
}
