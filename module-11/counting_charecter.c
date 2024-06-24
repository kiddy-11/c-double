#include <stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int cnt[26]={0};
    for (int i = 0; i <strlen(s); i++)
    {
        /* code */
        int value = s[i]-'a';
        cnt[value]++;
    }
    // for (int i = 0; i <26; i++)
    // {
    //     /* code */
    //     // printf("%d - %d\n",i,cnt[i]);
    //     // printf("%d - %d\n",i+'a',cnt[i]);
    //     printf("%c - %d\n",i+'a',cnt[i]);
    // }


    // for (int i = 0; i < 26; i++)
    // {
    //     /* code */
    //     if (cnt[i]!=0)
    //     {
    //         /* code */
    //          printf("%c - %d\n",i+'a',cnt[i]);
    //     }
        
    // }
    
    for (int i = 0; i < strlen(s); i++)
    {
        int value =s[i]-'a';
        // printf("%d - %d\n",value,cnt[value]);
        if (cnt[value]!=0)
        {
            /* code */
             printf("%c - %d\n",value+'a',cnt[value]);
        }
        
        cnt[value]=0;
        // printf("%c - %d\n",value+'a',cnt[value]);
        /* code */
    }

   
    
    return 0;
}