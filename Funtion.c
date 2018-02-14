#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int random();


int guess,num,play;
time_t p;
int main () {

    int count;


    printf("Guess a Number from one to twenty");
    scanf("%d",&guess);
    int random();

    play=random(num);

 while(guess!=play)
 {
        printf("Guess again\n");
        scanf("%d",&guess);

    if(guess>play)
    {
        printf("Too much\n");
    }
    else if (guess<play)
    {
        printf("Not enough\n");
    }
    else if (guess=play)
    {
        printf("Great Job\n");
    }

 }

    printf("The correct number is%d\n",play);

    return 0;

 }

int random()

{
    srand((unsigned)time(&p));
    num=rand() % 20;
    return num;
}


