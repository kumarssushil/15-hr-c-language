#include<stdio.h>

int factorial(int number){
    if(number == 1 || number == 0){
        return 1;
    }
    else{
        return factorial(number * factorial(number-1))
    }
}

int main(){
    int num;
    printf("enter the number you want their factorial");
    scanf("%d", &num);
    printf("the factorial of %d is %d",num, factorial(num));
}