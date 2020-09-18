#include<stdio.h>



int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i , array[i]);
        array[0] = 34444;
    }
    
    return 0;
}
// int func2(int* ptr){
//     for (int i = 0; i < 4; i++)
//     {
//         printf("the value at %d is %d\n",i *(ptr+i));

//     }
//     *(ptr + 2)  = 56656;
    
    
//     return 0;

// }
void func3(int arr[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value at %d, %d\n",i, j, arr[i][j]);
        }
        
    }
    
}
int main(){
    int arr[][2] = {{2,13},{23,45}};

    // int  arr[] = {1,2,3,4};
    // printf("the value of index 0 is %d\n",arr[0]);
// 
    // func1(arr);
    // printf("the value of index 0 now is %d\n", arr[0]);
    // func2(arr);
    func3(arr);
    return 0;
}