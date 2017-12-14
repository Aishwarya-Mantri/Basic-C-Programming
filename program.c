#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n Program to divide amount into coins of $5 and $2 \n");
    printf("________________________________________________________");
    int amt,coins5=0,coins2=0,rem,total, remaining=0,dividedamt=0;
    printf("\n\n\t Enter amount=");
    scanf("%d",&amt);
    if(amt%5==0)
    {
        coins5=amt/5;
    }
    else
    {
        rem=amt%5;
        coins5=amt/5;
        if(rem%2==0)
        {
            coins2=rem/2;
        }
        else
        {
          coins2=rem/2;
        }

    }
    total=coins5+coins2;
   dividedamt=(5*coins5)+(2*coins2);
    remaining=amt-dividedamt;
    printf("\n\t Totals coins of 5 rs= %d and 2 rs =%d \n",coins5,coins2);
     printf("\n\t Divided amount=%d",dividedamt);
    printf("\n\t Remaining amount=%d \n",remaining);
    return 0;
}
