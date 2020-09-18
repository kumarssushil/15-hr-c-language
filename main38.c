#include<stdio.h>

int main(){
    FILE *ptr = NULL;
    char string[34] = "This is write mode good";
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr , "%s", string);



    //reading a file
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr , "%s", string);
    // printf("the content of this file  has %s\n", string);
    
    return 0;
}