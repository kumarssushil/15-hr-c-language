#include<stdio.h>
#include<string.h>

int main(){
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[45];
    // puts(strcat(s1,s2));
    printf("the legth of s1 is %d\n", strlen(s1));
    printf("the legth of s1 is %d\n", strlen(s1));
    printf("the reversed string of s1 is %d\n" );
    puts(strrev(s1));
    strcpy(s3 , strcat(s1,s2));
    puts(s3);
    printf("the strcmp for s1, s2 returned %d",strcmp(s1,s2));//it somnetimes gives sky difference 0 or 1


}