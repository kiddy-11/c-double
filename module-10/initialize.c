#include <stdio.h>
int main(){
    // char a[]={'N','i','g','a','r'};// null boshbe naki tar kono gurantee nai
    char a[]="Nigar\0"; //  gurantee ase
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",a);
    // for (int i = 0; i < 5; i++)
    // {
    //     /* code */
    //     printf("%c\n",a[i]);
    // }
    
    // size na dle autometic null er jaiga niye fhele tai notun kore "\0" dite hoi na.
    return 0;
}


// string er super power
// ==========================
// 1.initialization
// 2.printf
// 3.input
// / / 