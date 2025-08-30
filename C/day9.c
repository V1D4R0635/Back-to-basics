#include <stdio.h>

int main(){
    int lives = 3;
    char ans;

    printf("--------------Quiz game--------------\n1. Who made the song 'back friends'?\na. Radiohead   b. Keshi\nc. Sombr       d. Laufey");
    printf("\n\nEnter the letter of your answer: ");
    scanf("%c", &ans);

    if(ans == 'c'){
        printf("Correct!");
    } else{
        lives -= 1;
        printf("lives = %d", lives);
    }

    return 0;
}