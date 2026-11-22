#include <stdio.h>
int main()
{
    // to input 2 matrices and add/sub them.
    int op,m,n,r,c,a,b;
    printf("Enter operation:\n");
    printf("1-Additon\n");
    printf("2-Subtraction\n");
    if (scanf("%d",&op) !=1){
         printf("Invalid operation.");
        return 0;
    }

    printf("Enter number of rows:");
    if (scanf("%d",&r) !=1 ){
        printf("invalid input");
        return 0;
    }
    printf("Enter number of columns:");
    if (scanf("%d",&c) !=1 ){
        printf("invalid input");
        return 0;
    }

    int fmat[r][c];
    int smat[r][c];
    int sum[r][c];
    int sub[r][c];

    printf("Enter first matrix:");

    for (m=0; m<r; m++){
        for(n=0; n<c; n++){
            scanf("%d", &fmat[m][n]);
        }
    }

    printf("Enter second matrix:");

    for (m=0; m<r; m++){
        for(n=0; n<c; n++){
            scanf("%d", &smat[m][n]);
        }
    }
    
    for(m = 0; m < r; m++){
        for(n = 0; n < c; n++)
        {
            sum[m][n] = fmat[m][n] + smat[m][n];
            sub[m][n] = fmat[m][n] - smat[m][n];
        }
    }

    //shows output matrix
    if (op==1){
       printf("\nAddition:\n");

       for(m = 0; m < r; m++)
       {
          for(n = 0; n < c; n++)
          {
              printf("%d ", sum[m][n]);
          }
          printf("\n");
        }
    }else
    {
     printf("\nSubtraction:\n");

    for(m = 0; m < r; m++)
    {
        for(n = 0; n < c; n++)
        {
            printf("%d ", sub[m][n]);
        }
        printf("\n");
    }
}

    return 0;
}