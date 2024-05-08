#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game_decision(char computer, char our_choice);

int main(){ //main method start!!
    int My_score = 0, Comp_score = 0;
    for(int i = 0; i<10; i++){
    char computer, our_choice;
    srand(time(0));
    int n_computer = rand() % 3;

    if(n_computer == 0){
        computer = 's';
    }
    else if(n_computer == 1){
        computer = 'p';
    }
    else{
        computer = 'z';
    }

    printf("\t\t\t\t\t\t\t\t\tSTONE!!! PAPER!! SCISSOR!!\n"); 

    printf("Enter 's' for STONE, 'p' for PAPER, 'z' for SCISSOR = ");   //Choice list!!
    scanf(" %c", &our_choice);

    if (our_choice != 's' && our_choice != 'p' && our_choice != 'z') {
        printf("Invalid choice. Please enter 's', 'p', or 'z'.\n");
        continue; // error code!!
    }
    int decision = game_decision(computer, our_choice); //calling decision method!!

    if (decision == 0){    //Winner of the round decision!!
    printf("\nBrh Its A Draw!!!\n");
    }
    else if(decision == 1){
        printf("\nYou win this round!!\n");
        My_score++;
    }
    else if(decision == 2){
        printf("\nYou Lost this round!!\n");
        Comp_score++;
    }

    printf("%c is your choice and %c is computer's choice", our_choice, computer); // Selection display by both user and computer!!

    printf("\n\nCurrent score : Your Score = %d & Computer's Score = %d\n\n", My_score, Comp_score); //Score count!!
    }
    if(My_score > Comp_score){     //Final result statement!!
        printf("\n\n You Win the match!! Well played!!\n");
    }
    else{
        printf("\n\n You Lost the match!! Well played!!\n");
    }
    printf("Final score :\n Your Score = %d\n Computer's Score = %d\n", My_score, Comp_score);
    return 0;
} // main method termination!!

int game_decision(char computer, char our_choice){    //Decision method!!
    if(computer == our_choice){
        return 0;
    }
    else if(computer == 's' && our_choice == 'p'){
        return 1;
    }
    else if(computer == 's' && our_choice == 'z'){
        return 2;
    }
    else if(computer == 'p' && our_choice == 's'){
        return 2;
    }
    else if(computer == 'p' && our_choice == 'z'){
        return 1;
    }
    else if(computer == 'z' && our_choice == 's'){
        return 1;
    }
    else if(computer == 'z' && our_choice == 'p'){
        return 2;
    }
}