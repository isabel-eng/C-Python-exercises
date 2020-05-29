//4. Write a program to play "Paper, Rock or Scissors".
#include <stdio.h>
#include <stdlib.h>
//function to select with what is being play
void printer(int option){
    switch (option){
    case 1:
        printf("Paper");
        break;
    case 2:
        printf("Rock");
        break;
    case 3:
        printf("Scissors");
        break;
    }
}
int main(){
    int turn = 0;
    int attemps, option, oposite, p1, p2;
    //the user selects how many times to play
    printf("How many attemps? ");
    scanf("%d", &attemps);
    //the user selects with what to play
    printf("Paper = 1\nRock = 2\nScissors = 3\n");
    while (turn < attemps){
        printf("You turn!\n");
        scanf("%d",&option);
        //generate a random selection to compete
        oposite = rand() % 4;
        //check who won using a ternary operator
        printer(option); printf(" vs "); printer(oposite); printf("\n");
        (option == 1 && oposite == 2) ? p1++, turn++ :(option == 2 && oposite == 1) ? p2++, turn++ : 0;
        (option == 2 && oposite == 3) ? p1++, turn++ :(option == 3 && oposite == 2) ? p2++, turn++ : 0;
        (option == 3 && oposite == 1) ? p1++, turn++ :(option == 1 && oposite == 3) ? p2++, turn++ : 0;
        option == oposite ? printf("AGAIN\n") : 0;
    }
    (p1 > p2) ? printf("You win\n") : printf("You lost\n");
}