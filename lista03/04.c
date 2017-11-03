#include <stdio.h>

void transposta(int m[][3])
{
    int i, j;
    
    for (j=0; j<3; j++) {
        for (i=0; i<3; i++) {
            printf("%d", m[i][j]);
            printf("%s", (i<2)? " ":"\n");
        }
    }
}

int main()
{
    int i, j;
    int m[3][3];
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    
    transposta(m);
    
    return 0;
}