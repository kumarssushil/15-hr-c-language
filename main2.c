#include<stdio.h>

// int main(){
//     float b = 5.28;
//     int a = 5;
//     char demo = 'a';
//     float x = 1.999;
//     printf("%12.4f\n",b);
//     printf("a = %d\n",a);
//     printf("demo is %c\n",demo);
//     printf("x = %f\n",x);
// }
// int main(){
//     const int a = 4;
//     printf("the value  of demo is %d",demo);
//     printf("the value of demo1 is %d",demo1);
//     const demo = 8;
//     demo1 = 101;
// }here we can not able to change the value of demo inside the program because there is a const keyword is here

int main(){
    int x;
    printf("please enter the number");
    scanf("%d\n",&x);
    if(x>15){
        printf("your previous age is %d\n",x);
        int y;
        printf("no your age is :");
        scanf("%d\n",&y);
        if(y<50){
            printf("good");
        }
    }
    else{
        printf("you are so weird");
    }
}