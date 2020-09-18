#include<stdio.h>
#include<stdlib.h>
int functiondangling(){
    int a, b, sum;
    a = 34;
    b = 354;
    sum = a + b;
    return &sum;
}
//-----------------------_______________
int main(){
    // case 1: deallocation of memory block! 
    int *ptr = (int *) malloc(7* sizeof(int));
    ptr[0] = 21
    ptr[1] = 3
    ptr[2] = 34
    ptr[3] = 45
    free(ptr);

    // case2: function returining local variable address
    int * dangptr = functiondangling();

    int * danglingptr3
    // case3: if the variable goes out of scope
    {
        int a = 12;
        danglingptr3 = &a;
    }
    //here variable a goes out of scope which means dangling pointer points the free memory location
    return 0;
}