#include<math.h>
#include<stdio.h>

int edistance(int x1, int y1, int x2 , int y2){
    return 0;
}
float areacircle(int x1, int y1, int x2, int y2, int(*distance) (int x1, int y1, int x2, int y2)){
    return distance(x1, y1, x2, y2);
}

int main(){
    printf("enter the vlaue fo x1\n");
    scanf("%d", &x1)

    return 0;
}