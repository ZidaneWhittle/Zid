#include<stdlib.h>
#include<stdio.h>

int main()
{
int x,y;
int *p,*q;
char *t;
char str[]=" Home\0";
printf("%d",str);
printf("%s",str);

t=&str[0];

printf("%s\n",t);
printf("%s\n",&str[2]);

while(*t!='\0')
{
    t++;
}
    while(t>=str)
    {
     printf("%c\n",*t);

    t--;

}
}
