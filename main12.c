#include<stdio.h>
int main(){
    // int a = 34;
    // int* ptra = &a;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra+1);// according to my architecture here 1 = 4byte so it add 4 to it
    // printf("%d\n", ptra++);
    // printf("%d\n", ptra);
    // printf("%d\n",ptra--);
    // printf("%d\n",ptra);
    int arr[] = {1,2,3,4,5,6,67};
    printf("%d\n", arr[3]);
    printf("the address of first element of the array is %d\n", &arr[0]);
    printf("the address of first element of the array is %d\n", arr);
    printf("the address of the second element is %d\n", &arr[1]);
    printf("the address of the second element is %d\n", arr + 1);

    //arr++ this will give error because this is constant and array
    printf("the value of first element of the array is %d\n", *(&arr[0]));
    printf("the address of first element of the array is %d\n", *(arr));
    printf("the address of the second element is %d\n", *(&arr[1]));
    printf("the address of the second element is %d\n", *(arr + 1));

    
    return 0;
}