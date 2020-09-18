#include<stdio.h>
int main(){
    printf("pointer inside c -programming\n");
    int a = 76;
    int* ptra = &a;
    printf("the value of a is %d\n",ptra);
    printf("the value of a is %x\n",ptra);
    printf("the value of a is %p\n",ptra);
    printf("the value of a is %d\n",&ptra);
    return 0;
}