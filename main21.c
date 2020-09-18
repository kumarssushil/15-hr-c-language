#include<stdio.h>
#include<stdio.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

};

int main(){
    struct student s1;
    
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'u';
    strcpy(s1.name, "harry");

    printf("the id si %d\n", s1.id);
    
        
    
    
    return 0;
}