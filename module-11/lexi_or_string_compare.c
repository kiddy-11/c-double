#include <stdio.h>
#include<string.h>// aita function build a lage na
int main(){
    char a[100],b[100];
    scanf("%s %s",a,b);
    int val=strcmp(a,b);
    // printf("%d",val);// ai khetre -1=choto,0=shoman,1=boro bujhai
    if(val<0){
        printf("A choto\n");
    }
    else if(val>0){
        printf("B choto\n");
    }
    else{
        printf("Same\n");
    }


    // ===========ai niom use kora jai=========
    // int i=0;
    // while(1){
    //     if(a[i]=='\0' && b[i]=='\0'){
    //         printf("Samme\n");
    //         break;
    //     }
    //     else if(a[i]=='\0'){
    //         printf("A choto\n");
    //         break;
    //     }
    //     else if(b[i]=='\0'){
    //         printf("B choto\n");
    //         break;
    //     }
    //     if(a[i]==b[i]){
    //         i++;
    //     }
    //     else if(a[i]<b[i]){
    //         printf("A choto\n");
    //         break;
    //     }
    //     else{
    //         printf("B choto\n");
    //         break;
    //     }
       
    // }
    return 0;
}