#include<stdio.h>

int b = 34;
int func1(int b1){
    static int myvar = 0;
    printf("the value of myvar is %d", myvar);
    myvar++;

    // printf("the address of b inside func1 is %d\n", &b);
    // printf("the value of b inside func1 is %d\n", b);
// 
    return b1 + myvar;
}
int main(){
    int b = 344;
    int val = func1(b);
    val =  func1(b);
    // int * ptr = &val;
    // printf("the address of b inside main is %d\n" , &b);

    // int* ptr = &val;
    // printf("the value of func1 is %d",val);
    return 0;
}