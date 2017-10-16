#include <stdio.h>

double descontos(double salario, int faltas)
{
    double saldia = salario/20;
    
    return saldia*faltas;
}

double acrescimos(double salario, int horaextra)
{
    double saldia = salario/20;
    double salhora = saldia/8.0 + 40;
    
    return salhora*horaextra;
}

int liq(int salario, int faltas, int horaextra)
{
    int s;
    s = salario + acrescimos(salario, horaextra) - descontos(salario, faltas);
    
    return s;
}

int main()
{
    int horaextra, faltas, cargo, salario, liquido;
    double saldia, salhora;
    
    scanf("%d%d%d", &cargo, &faltas, &horaextra);
    
    switch(cargo)
    {
        case 1:
            salario = 10000;
            break;
        case 2:
            salario = 8000;
            break;
        case 3:
            salario = 5000;
            break;
        case 4:
            salario = 3000;
            break;
        case 5:
            salario = 2000;
            break;
    }
    
    if(horaextra > 40) horaextra = 40;
    
    liquido = liq(salario, faltas, horaextra);
    printf("%.0d\n", liquido);
    
    return 0;
}