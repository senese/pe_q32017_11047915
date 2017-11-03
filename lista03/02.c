#include <stdio.h>

int len(char *s)
{
    int n = 0;
    while(s[n] != '\n') n++;
    return n;
}

int main()
{
    int i, l1, l2;
    char s[255];
    char r[255];
    fgets(s, 255, stdin);
    
    l1 = len(s);
    
    r[l1] = '\0';
    for (i=0; i<l1; i++){
        r[l1-1-i] = s[i];
    }
    
    printf("%s\n", r);
    return 0;
}