#include <stdio.h>
#include <stdlib.h>
int power(int,int);
void check_armstrong(int,int);
int main()
{
    int i,num,rem,original,count=0,sum=0;
    printf("\n enter no:");
    scanf("%d",&num);
    original=num;
    while(original!=0)
    {
      rem=original%10;
      count++;
      original/=10;
    }

     printf("\n %d digit no \n",count);
    original=num;
  while(original!=0)
    {
      rem=original%10;
      sum+=power(rem,count);
      original/=10;
    }
    printf("\n sum=%d \n",sum);

    check_armstrong(sum,num);
    return 0;
}
int power(int rem,int count)
{
    int i,res=1;
    for(i=1;i<=count;i++)
    {
       res=res*rem;
    }
    return res;
}
void check_armstrong(int sum,int num)
{
    if(sum==num)
        printf("\n %d is an armstrong number \n",num);
    else
         printf("\n %d is not an armstrong number \n",num);
}