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
    int i=0,j=n-1;
    while (i<j)
    {
        /* code */
        int tmp=ar[i];
        ar[i]=ar[j];
        ar[j]=tmp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
        {
            /* code */
            printf("%d ",ar[i]);
        }
     return 0;
}