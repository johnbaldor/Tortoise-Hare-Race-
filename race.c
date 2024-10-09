#include <stdio.h>
#include <stdlib.h>
#include "animals.h"

int main(void){
    int x;
    puts("Please enter a random number seed."); // prompts user for input 
    scanf("%d", &x); // stores input in x 
    srand(x); // sets random seed 

    //initializing variables 
    int time =0 ;
    int hare_pos =0;
    int tortoise_pos =0;
    int bee_pos=0 ; 
    int winner=3;
    

 
    
    

    
    for(int i = 0; (tortoise_pos < 70) && (hare_pos < 70) && (bee_pos < 70); i++){   // checks if tortoise, hare, and bee positon are less than 70,
                                                                                     //increments i to keep track of  time 

        if ((tortoise_pos > hare_pos) && (tortoise_pos > bee_pos) && (winner != 0)){    //if tortoise positon is greater than the hares and bees and its not the                                                                             
            winner = 0;                                                                  //current winner, stores tortiose as current winner and prints 
            printf("At t = %d, the tortoise (square %d) has taken the lead.\n",  i, tortoise_pos);
        }

        else if ((hare_pos > tortoise_pos) && (hare_pos > bee_pos) && (winner != 1)){   //if hare positon is greater than the tortoise and bees and its not the
            winner= 1;                                                                  //current winner, stores hare as current winner and prints
            printf("At t = %d, the hare (square %d) has taken the lead.\n",  i, hare_pos);
        }
        else if ((bee_pos > hare_pos) && (bee_pos > tortoise_pos) && (winner != 2)){    //if bee positon is greater than the tortoise and hares and its not the
            winner = 2;                                                                 //current winner, stores hare as current winner and prints
            printf("At t = %d, the bee (square %d) has taken the lead.\n",  i, bee_pos);
        }
    


 
        //updates positions 
        hare_pos = update_hare(hare_pos);
        tortoise_pos = update_tortoise(tortoise_pos);
        bee_pos = update_bee(bee_pos);

        //stores time 
        time = i;


    }

    // adds 1 to time to make up for last update where i was not incremented 
    time = time +1;


    // prints winner depending on integer in "winner" varible 0=tortoise 1=hare 2=bee
    if (winner == 0 ){
        printf("After %d seconds, the tortoise wins!!\n", time);
    }
    else if (winner == 1 ){
        printf("After %d seconds, the hare wins!!\n", time);
    }
    else {
        printf("After %d seconds, the bee wins!!\ns", time);
    }



    return 0;


}