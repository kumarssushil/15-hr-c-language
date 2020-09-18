#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,n,sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("enter your first matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            // printf("enter the %d %d element of first matrix\n", i, j);
            scanf("%d", &a[i][j]);
            printf("\t");
        }
        printf("\n");
        
    }
    printf("enter the second matrix");

    for (int i = 0; i < 4; i++)
    {
        for (int  j = 0; j < 2; j++)
        {
            // printf("enter the %d %d element of first matrix\n", i, j);
            scanf("%d", &b[i][j]);
            printf("\t");
        }
        printf("\n");
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 2; j++)
        {
           //calculating the result
           for (int k = 0; k < 4; k++)
           {
               sum += a[i][k] *b[k][j];
           }
           result[i][j] = sum;
           sum = 0;
           
        }
        
    }


    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 2; j++)
        {
           //calculating the result
           
           printf("%d\t", result[i][j]);
           
          
           
        }
        printf("\n");
        
    }

    
    return 0;
}