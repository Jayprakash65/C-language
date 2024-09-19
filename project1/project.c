#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    int  number,guess,nguess=1;        // number ek variable ley lia 
    srand(time(0));     //har bar alag alga number lana hai tho use karna hoga  
    number = rand()%100 + 1;    //used for random number [number = rand()]  or agr ham chahhaite hai ki ramdom no chahiey 1 sai 100 kai bich tho  [ number = rand()%100 + 1]
    // printf("the number id %d \n",number);

//keep running the loop until the nuber is guessed

    do{
        printf("Guess the number between 1 to 100 : ");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower number plz \n");
        }
        else if(guess<number){
            printf("Higher number plz \n");
        }
        else{
            printf("You guesses it in %d attempts \n",nguess);
        }
        nguess++;
    }while(guess!=number);    //continue the loop as long as the guess is not equal to the number.
    





    return 0;
}