#include <stdio.h>
struct student
{
 int roll;
 char name[40];
 int s1,s2,s3;
 int total;
 float percent;
};

int main(){
    int n,i;
    printf("enter no. of students:");
    if (scanf("%d",&n)!= 1 || n <= 0){
        printf("Invalid operation.\n");
        return 0;
    }
    struct student s[n];
    for (i=0;i<n;i++){
        printf("Enter the roll no., name of student,marks of 3 subjects respectively");
        scanf("%d %s %d %d %d", &s[i].roll, s[i].name, &s[i].s1, &s[i].s2, &s[i].s3);
        s[i].total   = s[i].s1 + s[i].s2 + s[i].s3;
        s[i].percent = s[i].total / 3;
    }
    //headers of each coloumn 
    printf("\nRoll no.\tName\tSubject-1\tSubject-2\tSubject-3\tTotal\tPercentage\n");

    for (i = 0; i < n; i++){
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t%.2f\n", s[i].roll, s[i].name, s[i].s1, s[i].s2, s[i].s3, s[i].total, s[i].percent);
    }
    
    return 0;
}