struct aluno{
  int matricula;
  char nome[30];
  float n1,n2,n3;
};

typedef struct elemento* Lista;

// Protótipos de funções
Lista* cria_lista();
