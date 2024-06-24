#include <stdio.h>
#include <string.h>
int main(){
    char a[18];
    // gets(a);
    a[13]='\0';
    fgets(a,13,stdin);// fgets enter input nei ja scanf nei na
    printf("%s",a);
    return 0;
}



// "gets()" akta build in function