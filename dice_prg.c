#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    for(int i = 0; i<500;i++){
    char cmd;
    printf("TYPE 's' SPINNING DICE = ");
    scanf(" %c", &cmd);

    if(cmd == 's'){
    int dice_num;
    srand(time(0));
    dice_num = (rand() % 6) + 1;

    printf("\nDICE = %d\n\n",dice_num);
    printf("-------------------------------------------------------------------------------\n\n");
    }

    else{
        return 0;
    }
}
}