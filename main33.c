#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;

}
int greater(char char1, char char2){
    //returns 1 of c1>c2 and  0 otherwise. if c1== c2 it will return -1;
    if(char1 == char2){
        return -1;
    }
    else if((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if((char2 == 'r') && (char1 == 's')){
        return 0;
    }


    else if((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if((char2 == 'p') && (char1 == 'r')){
        return 0;
    }


    else if((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if((char2 == 's') && (char1 == 'p')){
        return 0;
    }
}
int main(){
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    printf("welcome to the rock , paper , scissor.\n");
    for (int i = 0; i < 3; i++)
    {
    printf("player 1's turn:\n");
    printf("choose 1 for rock,2 for paper, 3 for scissor\n");
    scanf("%d\n", temp);
    playerchar = dict[temp -1];
    printf("you choose %c\n\n", playerchar);

 // takes computer input
    printf("computer's turn:\n");
    printf("choose 1 for rock,2 for paper, 3 for scissor\n");
    temp = generaterandomnumber(3) + 1;
    compchar = dict[temp -1];

    if(greater(compchar, playerchar) == 1){
        compscore += 1;
        printf("cpu got it\n");
    }
    else if (greater(compchar, playerchar) == -1)
    {
        compscore += 1;
        playerscore += 1;
        printf("its a draw");    
    }
    else{
        playerscore += 1;
        printf("you got it\n\n");
    }
    
       printf("you: %d\n cpu: %d", playerscore, compscore); 
    }

    
   if(playerscore > compscore){
       printf("you won the game\n");
   }
   else if( playerscore < compscore){
       printf("cpu win the game\n");
   }
   else{
       printf("its a drow\n");
   }
    return 0;
}