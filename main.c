#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("\n    Program to print first nonrepetitive element of array \n ");
   printf("__________________________________________________________________");
   int arr[8]={2,4,7,9,4,6,2,4};
   int i,j,count[8]={0};
   printf("\n Array elements are:\n");
   for(i=0;i<8;i++)
   {
       printf("%4d",arr[i]);

   }
   for(i=0;i<8;i++)
   {
       for(j=1;j<8;j++)
       {
           if(arr[j]==arr[i])
              {
                   count[arr[i]]++;
                   break;
              }

       }
   }
   printf("\n\n First NonRepetitive element=");
     for(i=0;i<8;i++)
     {
         if(count[arr[i]]==1)
         {
             printf("%d \n",arr[i]);
             break;
         }

     }
    return 0;
}
