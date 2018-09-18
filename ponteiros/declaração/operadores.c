/**
* Ricardo Paulino do Nascimento
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
int value = 200;
int *p;

p = &value;
printf("\n");
printf("As duas variaveis imprimem o mesmo endereco de memoria\n");
printf("endereco de memoria de p: %d\n", &p);
printf("p aponta para o endereco de value: %d\n", p);
printf("endereco de memoria de value: %d\n", &value);
printf("\n");
printf("As duas variaveis imprimem o mesmo conteudo de value\n");
printf("conteudo de value em p: %d\n", *p);
printf("conteudo de value: %d\n", value);
  return 0;
}
