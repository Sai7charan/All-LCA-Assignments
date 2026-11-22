#include <stdio.h>
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int x,y;
    printf("Enter first no.:\n");
    if (scanf("%d",&x) !=1 ){
        printf("invalid input\n");
        return 0;
    }
    printf("Enter second no.:\n");
    if (scanf("%d",&y) !=1 ){
        printf("invalid input\n");
        return 0;
    }
    printf("Before swaping:\n");
    printf("the first no.= %d\n",x);
    printf("the second no.= %d\n",y);
    swap(&x, &y);
    printf("after swapping,\n");
    printf("the first no.= %d\n",x);
    printf("the second no.= %d\n",y);  
    return 0;
}   