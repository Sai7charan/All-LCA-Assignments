#include <stdio.h>
/*Non Recursive function.*/
int factorial(int f){
    int i,n=1;
    for (i=1;i<(f+1);i++){
        n = n*i;
    }
    return n;
}
int main(){
    int f;
    printf("Enter Factorial Number:");
    if (scanf("%d",&f) !=1 ){
        printf("Invalid input");
        return 0;
    }else if(f < 0){
    printf("Invalid input");
    return 0;
    }
    printf("Factorial is %d",factorial(f));
    return 0;
}