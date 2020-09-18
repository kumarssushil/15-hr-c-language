#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//automated bill generation

char *replaceword( const char *str, const char * oldword,  char * newword){
    char * resultstring;
    int i, count = 0;
    int newwordlength = strlen(newword);
    int oldwordlength = strlen(oldword);

    for ( i = 0; str[i]!= '\0';  i++)
    {
        if(strstr(&str[i] ,oldword) == &str[i]){
            count++;

            //jump over this word
            i = i + oldwordlength - 1;
        }
    }
    //making a new string to fit in the replaced words
    resultstring = (char *) malloc( i + count * (newwordlength - oldwordlength) + 1);

    i = 0;
    while(*str){
        //compare the substring with result
        if(strstr(str, oldword) == str){
            strcpy(&resultstring[i] , newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else{
            resultstring[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultstring[i] = '\0';
    return resultstring;

}

int main(){
    FILE * ptr = NULL;
    FILE * ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genbill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("the bill template was %s\n", str);

    //calling the replaceword function and generating new str
    char * newstr;
    newstr = replaceword(newstr, "{{item}}", "shoes");
    newstr = replaceword(newstr, "{{outlet}}", "ramlaxmi");
    newstr = replaceword(newstr, "{{name}}", "harry");
    printf("the actual bill template is %s\n", newstr);

    fprintf(ptr2, "%s", newstr);
    fclose(ptr);
    



    return 0;
}