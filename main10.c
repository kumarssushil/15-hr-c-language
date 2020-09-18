// #include<stdio.h>
// int main(){
//     int marks[4];
//     marks[0] = 34;
//     printf("marks iof student 1 is %d",marks[0]);
//     marks[1] = 4;
//     marks[2] = 5;
//     marks[3] = 67;
//     for (int i = 0; i < 4; i++)
//     {
//         printf("enter the value of %d element of the array\n", i);
//         scanf("%d", &marks[i]);
    
//     }
//     for(int i = 0; i< 4; i++)
//     {
//         printf("the value of %d element of the array is %d\n ",i , marks[i]);

//     }
    
//     return 0;
// }
#include<stdio.h>
int main(){
    int marks[2][4] = {{45, 234,3,4}, {3,4,5,67}};
    for(int i = 0; i< 4; i++){
        for (int j = 0; j < 2; j++)
        {
            printf("the value of %d %d element of the array is %d\n",i ,j,marks[i][j]);
        }
        
        printf("the value of %d element of the array is %d\n",i , marks[i]);

    }

}