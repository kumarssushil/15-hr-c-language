#include<stdio.h>

typedef struct student
{
    int id;
    char name[34];
    int rollno;
}std;
int main(){
    std harry, sushil, shumbham;
    harry.id = 344;
    printf("value of harry's id%d\n", harry.id);

}

typedef int* intpointer;
intpointer a,b;
int c = 80;
a = &c;
b = &c;



// int main(){
//     // typedef < previous_name > <alias_name>;
//     // typedef is used to give the aliar_name
//     typedef int integer;
//     integer a = 4;
//     return 0;
// }