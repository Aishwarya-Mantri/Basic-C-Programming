//C Program To SORT String in Alphabetical Order
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int i,j;
   char str[5][50],temp[50];
   printf("\n enter 5 string \n");
   for(i=0;i<5;i++)
   {
       gets(str[i]);
   }
  printf("\nData:\n");
   for(i=0;i<5;i++)
   {
       printf("%s \t",str[i]);
   }
  printf("\n\nAlphabetical Order:\n");
   for(i=0;i<5;i++)
   {
       for(j=i+1;j<5;j++)
       {
           if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
       }
   }
  for(i=0; i<5; i++)
    {
        puts(str[i]);
    }
printf("\n\n");
    return 0;
}
