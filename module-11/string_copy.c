#include <stdio.h>
#include<string.h>
int main(){
    int a[100],b[100];
    scanf("%s %s",a,b);
    strcpy(a,b);

    // ======function diye o kora jai=======
    // for (int i = 0; i <=strlen(b); i++)
    // {
    //     /* code */
    //     a[i]=b[i];
    // }
    printf("%s %s",a,b);
    return 0;
}


// ======practice======

// int a[100],b[100];
// scanf("%s %s",a,b);
// for (int i = 0; i <=strlen[b]; i++)
// {
//     /* code */
//     a[i]=b[i];
// }
// printf("%s %s",a,b);
