// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main(){
//     int n;
//     int* ptr;
//     printf("enter the size of the array you want to create \n");
//     scanf("%d", &n);
//     ptr = (int*)malloc(10*sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the value no %d of this array\n",i);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         printf("the value at %d of this array %d\n",i,ptr[i]);
//         // scanf("%d", &ptr[i]);
//     }
    
//     return 0;
// }
// by using calloc function
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    printf("enter the size of the array you want to create \n");
    scanf("%d", &n);
    ptr = (int*)calloc(n,*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value no %d of this array\n",i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("the value at %d of this array %d\n",i,ptr[i]);
        // scanf("%d", &ptr[i]);
    }
    
    return 0;
}