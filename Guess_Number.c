#include<stdio.h>
int main()
{
    int secret_number;
    int guess_number;
    
    int i,guess_limit=3;
    secret_number=5;

    for(i=1;i<=guess_limit;i++)
    {
        printf("Enter Guess Number : ",i);
        scanf("%d",&guess_number);

        if(guess_number==secret_number)
        {
            printf("You Won!");
            printf("You have guessed in %d try ",i);
            break;

        }


    }
    if(guess_number!=secret_number)
    printf("You Lost!");
int a=4;
    return 0;
}