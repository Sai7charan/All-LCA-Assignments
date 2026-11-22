#include <stdio.h>
#include <string.h>
int main()
{
    int op,cmp;
    char str1[50],str2[50];
    printf("menu~\n");
    printf("1-strlen\n");
    printf("2-strcpy\n");
    printf("3-strcat\n");
    printf("4-strcmp\n");
    
    if (scanf("%d",&op) !=1){
         printf("Invalid operation.");
        return 0;
    }
    if(op < 1 || op > 4)
    { 
     printf("Invalid operation");
     return 0;
    }

    switch(op)
    {
    case(1):
        
            printf("Enter string:\n");
            scanf("%49s",&str1);
            printf("The Length of string is ~ %zu",strlen(str1));
            break;    
    case(2):
            printf("Enter string:\n");
            scanf("%49s",&str1);
            strcpy(str2,str1);
            printf("The Copied String is: %s",str2);
            break;  
    case(3):
            printf("Enter string 1:\n");
            scanf("%49s",&str1);
            printf("Enter string 2:\n");
            scanf("%49s",&str2);
            strcat(str1,str2);
            printf("The Joined string-%s",str1);
            break;
    case(4):
            printf("Enter string 1:\n");
            scanf("%49s",&str1);
            printf("Enter string 2:\n");
            scanf("%49s",&str2);  
            cmp = strcmp(str1,str2);
            if (cmp==0){
                printf("The strings are equal.");

            }else {
                printf("The strings are not equal.");

            }
            break;
    }
    return 0;
}