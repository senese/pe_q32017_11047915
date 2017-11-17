#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int RA;
    int p1;
    int p2;
    int p3;
} Aluno;

int main(int argc, char** argv)
{
    Aluno alunos[50];
    FILE *lista;
    
    lista = fopen(argv[1], "r");
    
    fclose(lista);
    
    return 0;
}