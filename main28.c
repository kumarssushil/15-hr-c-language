#include<stdio.h>
#include<stdlib.h>
// #include<"temp.c">


int sum = 697;

int myfunc(int a, int b){
    extern int sum;
    // sum = a+b;
    return sum;
}

int main(){

    //declaration-->telling the complier about the about variable (no space reserved);
    //definition--> decalaration + space reservation
    int sum = myfunc(3,5);
    printf("the sum is %d\n",sum);
    
    return 0;

}