#include <stdio.h>
#include<string.h>
int main(){
    char a[200],b[200];
    scanf("%s %s",a,b);
    strcat(a,b);

    //============funtion di krci=========
    // int k=strlen(a);
    // for (int i = 0; i <=strlen(b); i++)
    // {
    //     /* code */
    //     a[k]=b[i];
    //     k++;
    // }
    printf("%s %s",a,b);
    return 0;
}