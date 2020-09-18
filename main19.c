#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main(){
    struct student harry, ravi, shubham;
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 466;
    ravi.marks = 446;
    shubham.marks = 468;
    harry.fav_char = 'p';
    ravi.fav_char = 'k';
    shubham.fav_char = 'i';
    strcpy(harry.name, "harry potter student of the year");
    printf("harry got %d marks\n",harry.marks);
    printf("harry's name is %s\n", harry.name);
    return 0;
}