#include<stdio.h>
int main(){
    int a,i = 0;
    int *i2;
    while (i< 4555)
    {
        printf("welcome to coding world");
        i2 = malloc(34444*sizeof(int));
        if(i%100 == 0){
            getchar();
        }
        i++;
        free(i2);//to free the memory it require same space not increasing the size of memory for storage
    }
    
    return 0;
}