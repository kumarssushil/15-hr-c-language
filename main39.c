#include<stdio.h>

int main(){
    FILE *ptr = NULL;
    // ptr = fopen("myfile.txt", "r+");
    ptr = fopen("myfile.txt", "a+");
    
    // char c = fgetc(ptr);
    // printf("the character i read was %c\n", c);
    // c = fgetc(ptr);
    // printf("the character i read was %c\n", c);

    // char str[4];
    // fgets(str, 3, ptr);
    // printf("the string si %s\n", str);

    fputc('o', ptr);
    fputs("this is harry ", ptr);
    fclose(ptr);
    return 0;
}