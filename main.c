#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int nro;
    double valor;
} Tipo_Dado;

void cria_tabela(T)
Tipo_Dado **T;
{
     int tamanho;

     printf("Quantos elementos: ");
     scanf("%d",&tamanho);

     *T=calloc(tamanho,sizeof(Tipo_Dado));
}

int main()
{
    Tipo_Dado *Tabela;

    cria_tabela(&Tabela);
    Tabela[0].nro = 123;
    (*Tabela).nro = 456;
    Tabela->nro   = 789;

    printf("Valor: %d\n",Tabela[0].nro);
    system("pause");

    return 0;
}
