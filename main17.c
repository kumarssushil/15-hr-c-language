#include<stdio.h>

void printstr(char str[]){
    int i = 0;
    while (str[i]!= '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}

int main(){
    // char str[] = {'h','a','r','r','y','\0'};
    // printstr(str);
    char str[34];
    gets(str);
    printf("using custom fuction printstr\n");
    printf("using printf %s",str);// printstr(str);
    printf("using puts: \n");
    return 0;
}