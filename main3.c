#include<stdio.h>

// int main(){

//     int age;
//     printf("eter your age\n");
//     scanf("%d",&age);
    
//     switch (age)
//     {
//     case 12:
//         printf("your age is 12");
//         break;
    
//     case 34:    
//         printf("your age is 34");
//     default:
//         printf("age is not recognized");
//         break;
//     }
//     return 0;
// }
int main(){
    
    int age;
    printf("enter your age");
    scanf("%d", &age);

    switch (age)
    {

        case 23:
            printf("your age is 23");
            break;

        case 45:
            printf("your age is 45");
            break;
        default:
            printf("your age is weird");
            break;

    }
    return 0;
}