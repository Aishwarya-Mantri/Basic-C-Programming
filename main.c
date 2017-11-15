#include <stdio.h>
#include <stdlib.h>
#define COLMAX 10
#define ROWMAX 10
int main()
{
    int row,column,r,n,i;
    printf("  \n\n       Multiplication Table              \n");
    printf("\n\n");
    for(column=1;column<=COLMAX;column++)
    {
        printf("  %4d",column);
    }
    printf("\n");
    printf("----------------------------------------------------------------\n");

for(row=1;row<=ROWMAX;row++)
    {
        printf("%2d|",row);

        for(column=1;column<=COLMAX;column++)
        {
            r=row*column;
            printf(" %5d",r);

        }
          printf("\n\n");
    }

       return 0;

}
