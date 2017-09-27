#include <stdio.h>

int main()
{
    int horaextra, faltas, cargo, salario;
    double saldia, salhora;
    
    scanf("%d%d%d", &cargo, &faltas, &horaextra);
    
    switch(cargo)
    {
        case 1:
            printf("cargo:              : Diretor\n");
            salario = 10000;
            break;
        case 2:
            printf("cargo:              : Gerente\n");
            salario = 8000;
            break;
        case 3:
            printf("cargo:              : Engenheiro\n");
            salario = 5000;
            break;
        case 4:
            printf("cargo:              : Técnico\n");
            salario = 3000;
            break;
        case 5:
            printf("cargo:              : Operador\n");
            salario = 2000;
            break;
    }
    
    if(horaextra > 40) horaextra = 40;
    
    printf("# de faltas:        : %d\n", faltas);
    printf("# horas-extra:      : %d\n", horaextra);
    
    saldia = salario/20;
    salhora = saldia/8.0 + 40;
    
    printf("descontos           : %.0lf\n", saldia*faltas);
    printf("acrescimos          : %.0lf\n", salhora*horaextra);
    
    salario = salario + (salhora*horaextra) - (saldia*faltas);
    printf("salario             : %.0d\n", salario);
    
    
    return 0;
}