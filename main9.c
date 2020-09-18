#include<stdio.h>

int main(){
    int num;
    printf("what do you want to do:\n");
    printf("press 1 for--> km to miles\n");
    printf("press 2 for--> inches to foot\n");
    printf("press 3 for--> cms to inches\n");
    printf("press 4 for--> pound to kgs\n");
    printf("press 5 for--> inches to meters\n");
    printf("___________________________________\n");
    printf("enter one of :1,2,3,4,5\n");
    scanf("%d\n",&num);
    if(num == 1){
        printf("enter your number of km");
        int km;
        scanf("%d", &km);
        printf("%d x 1000 = &d\n", km, km*1000);
    }
}