#include<stdio.h>

struct driver
{
    /* data */
    char name[24];
    char dlno[45];
    char route[45];
    int kms;
};

int main(){
    struct driver d1, d2, d3;
    printf("enter the details of the driver no.1\n");
    printf("enter the nameof the first driver\n");
    scanf("%s\n", &d1.name);
    
    printf("enter the dlno of the first driver\n");
    scanf("%s\n", &d1.dlno);

    printf("enter the route of the first driver\n");
    scanf("%s\n", &d1.route);

    printf("enter the kms of the first driver\n");
    scanf("%s\n", &d1.kms);
    //______________________________________________
    printf("enter the details of the driver no.2\n");
    printf("enter the nameof the second driver\n");
    scanf("%s\n", &d2.name);
    
    printf("enter the dlno of the second driver\n");
    scanf("%s\n", &d2.dlno);

    printf("enter the route of the second driver\n");
    scanf("%s\n", &d2.route);

    printf("enter the kms of the second driver\n");
    scanf("%s\n", &d2.kms);
    // ____________________________________________________

    printf("enter the details of the driver no.3\n");
    printf("enter the nameof the third driver\n");
    scanf("%s\n", &d3.name);
    
    printf("enter the dlno of the third driver\n");
    scanf("%s\n", &d3.dlno);

    printf("enter the route of the third driver\n");
    scanf("%s\n", &d3.route);

    printf("enter the kms of the third driver\n");
    scanf("%s\n", &d3.kms);

    printf("*********printing information of these driver:*******\n");
    printf("for driver no .1: \n name is %s\n", d1.name);
    printf("for driver no .1: \n dlno. is %s\n", d1.dlno);
    printf("for driver no .1: \n route is %s\n", d1.route);
    printf("for driver no .1: \n kms is %s\n", d1.kms);


    printf("for driver no .2: \n name is %s\n", d2.name);
    printf("for driver no .1: \n dlno. is %s\n", d2.dlno);
    printf("for driver no .1: \n route is %s\n", d2.route);
    printf("for driver no .1: \n kms is %s\n", d2.kms);


    printf("for driver no .3: \n name is %s\n", d3.name);
    printf("for driver no .1: \n dlno. is %s\n", d3.dlno);
    printf("for driver no .1: \n route is %s\n", d3.route);
    printf("for driver no .1: \n kms is %s\n", d3.kms);
    

    
}