#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum=sum+ar[i];
    }
    printf("%d",sum);
    
    return 0;
}