//number guessing game! without functions!!
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("\t\t\t\t\t\t\t\t\t\tNUMBER GUESSING GAME!!\n\n");
    int R_number;
    srand(time(0));
    R_number = rand() % 101;  //random number selected by computer!

    for(int i = 0; i < 10; i++){

    int j = 0, allOur_choices[10];
    printf("Enter your number = ");  
    scanf("%d", &allOur_choices[i]);  //Taking inputs and storing!

    //Printing Guesses made!
    printf("\nGuesses Made = ");
    for(j = 0; j<=i; j++){
        printf("%d, ", allOur_choices[j]);
    }
    printf("\nNumber of guesses remaining = %d\n", 10-(j));  //Calculates guesses remaining!!

    //Hints based on gessed number!
    if(allOur_choices[i] == R_number){
        printf("\n\nCorrect guess!! You Won!! ");
        printf("Number = %d!!\n", R_number);
        printf("-------------------------------------------------------------------------------------------------\n\n");

        break;
    }

    else if(allOur_choices[i] > R_number){
        printf("\n\nHint : Too High!!\n\n");
    }
    else if(allOur_choices[i] < R_number){
        printf("\n\nHint : Too Low!!\n\n");
    }

    printf("-------------------------------------------------------------------------------------------------\n\n");

    }
    return 0;
}