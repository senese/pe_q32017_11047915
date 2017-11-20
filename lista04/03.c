#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int RA;
    float p1;
    float p2;
    float p3;
    float media;
} Aluno;

void media(Aluno *alunos)
{
	int i;
	float soma;
	for (i=0; i<50; i++) {
		soma = alunos[i].p1 + alunos[i].p2 + alunos[i].p3;
		alunos[i].media = soma/3;
	}
}

int main(int argc, char** argv)
{
	int i;
    Aluno alunos[50];
    FILE *lista;

    lista = fopen(argv[1], "r");

	for (i=0; i<50; i++) {
    	fscanf(lista, "%s %d %f %f %f", &alunos[i].nome, &alunos[i].RA, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
	}

    fclose(lista);

	media(alunos);

	lista = fopen("media_alunos.txt","w");

	for (i=0; i<50; i++) {
		fprintf(lista, "%s 00%d %.1f %.1f %.1f %.2f\n", alunos[i].nome, alunos[i].RA, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
	}

	fclose(lista);

    return 0;
}