#include <stdio.h>
#include <string.h> 

int main()
{
    char words1[100], words2[100];
    
    printf("Input 1st string\n");
    gets(words1);
    printf("Input 2nd string\n");
    gets(words2);
    
    if(strcmp(words1,words2)==0){
        printf("These two are same!\n");
    }
    else{
        printf("These two are different!\n");
    }

    return 0;
}
