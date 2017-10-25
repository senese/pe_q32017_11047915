#include <stdio.h>

int len(char *s)
{
    int n = 0;
    while(s[n] != '\0') n++;
    return n;
}

int main()
{
    int i, l1, c = 0;
    char s[255];
    fgets(s, 255, stdin);
    
    l1 = len(s);
    
    for (i=0; i<l1; i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            c++;
    }
    
    printf("%d\n", c);
    return 0;
}