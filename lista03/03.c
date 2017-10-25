#include <stdio.h>

int main()
{
    int i;
    int v1[5];
    int v2[5];
    int v3[5];
    
    for (i=0; i<5; i++){
        scanf("%d", &v1[i]);
    }
    
    for (i=0; i<5; i++){
        scanf("%d", &v2[i]);
    }
    
    for (i=0; i<5; i++){
        v3[i] = v1[i] + v2[i];
        printf("%d%s", v3[i], (i<4)? (" "):("\n"));
    }
    
    return 0;
}