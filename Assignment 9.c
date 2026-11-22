#include <stdio.h>
int main(){
    FILE *rd, *wt;
    char ch;
    rd = fopen("in.txt", "r");
    if (rd == NULL)
    {
        printf("file was not opened");
        return 0;
    }
    wt = fopen("out.txt", "w");
    if (wt == NULL)
    {
        printf("file was not opened");
        return 0;
    }

    ch = fgetc(rd);
    while (ch != EOF)
    {
        fputc(ch, wt);
        ch = fgetc(rd);
    }

    fclose(rd);
    fclose(wt);
    printf("File copied");
    return 0;
}

