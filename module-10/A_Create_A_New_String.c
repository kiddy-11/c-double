#include <stdio.h>
#include<string.h>
int main(){
    char s[1001],t[1001];
    scanf("%s %s",s,t); // string er khetre '&'lage na
    int lenS = strlen(s);
    int lenT = strlen(t);
    printf("%d %d\n",lenS,lenT);
    printf("%s %s",s,t);
    return 0;
}