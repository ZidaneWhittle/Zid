#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{
    FILE*fin,*fout;
    char namein[50], nameout[50];
    char c;

    printf("Source File");
    scanf("%s",namein);

    fin=fopen(namein,"r");

    if(fin==NULL)
    {
        printf("File could not open");
        return(-1);
    }

    printf("Source Code");
    scanf("%s",nameout);

    fout= fopen(nameout,"w");

    c=fgetc(fin);

    while(c!=EOF)
    {
        fputc(c,fout);
        c=fgetc(fin);
    }










}
