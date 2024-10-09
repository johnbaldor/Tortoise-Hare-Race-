#include <stdlib.h>
#include <stdio.h>
#include "animals.h"

int update_hare(int current_position){  
    float val = ((float) rand() / (float)(RAND_MAX));    // creates random value in between 0 and 1 

    if ((0 <= val)&& (val < 0.25)){      // checks if value is in between 0 and 0.25

        return current_position;    // adds 0 to current hare position 
    }

    else if ((0.25 <= val) && (val < 0.45)){     //checks if value is in between 0.25 and 0.45

        return current_position+ 9;     // adds 9 to current hare position 
    }

    else if ((0.45 <= val) && (val < 0.55)){    //checks if value is in between 0.45 and 0.55

        if ((current_position -10) < 0){return 0; }  // sets hare position to 0 if it goes negative 

        else {return current_position-10;}   // subtracts 10 from current hare position 
    }

    else if ((0.55 <= val) && (val < 0.8 )){    // checks if value is in between 0.55 and 0.8

        return current_position+ 2;  // adds 2 to current hare position 
    }

    else {                           //checks if value is anything else

        if ((current_position - 3 )< 0){return 0; }     // sets hare position to 0 if it goes negative 

        else{return current_position - 3;}  // subtracts 3 from current hare position 
        
    }  
}

int update_tortoise(int current_position){
    float val = ((float) rand() / (float)(RAND_MAX));  // creates random value in between 0 and 1 
   

    if ((0 <= val) && (val < 0.45)){    //checks if value is in between 0 and 0.45

        return current_position+ 3;     // adds 3 to current tortoise position 
    }

    else if ((0.45 <= val)&& (val < 0.65)){  //checks if value is in between 0.45 and 0.65

        if ((current_position -5) < 0){return 0; } // sets hare position to 0 if it goes negative 

        else {return current_position - 5;}    // subtracts 5 from current tortoise position 
    }

    else{                           //checks if value is anything else
        return current_position+ 1; // adds 1 to current tortoise position 
    }
}

int update_bee (int current_position){
    float val = ((float) rand() / (float)(RAND_MAX));  // creates random value in between 0 and 1

    if ((0 <= val) && (val < 0.30)){    //checks if value is in between 0 and 0.30

        return current_position + 2;    // adds 2 to current bee position 
    }

    else if ((0.30 <= val)&&(val < 0.50)){  //checks if value is in between 0.30 and 0.50

        return current_position + 1;    // adds 1 to current bee position 
    }

    else{                           //checks if value is anything else

        return current_position; // adds 0 to current bee position 
    }
}