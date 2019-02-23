//Andy Garcia and Alexis Pablo

#include <stdio.h>
#include <cs50.h>

    int TOTALPOINTSEARNED = 0; // global variables
    int TOTALPOINTSPOSSIBLE = 0; // global variables

int main(void){
    int assignments = get_int("How many total assignments?:\n"); // asks for the total assignments and when the user inputs the amount, it keeps it for later use.
    double earnedgraph[assignments]; //makes array to score the individual scores
    double possiblegraph[assignments]; //makes array to score the individual scores
        for(int i = 0; i < assignments;i++){ // for loop so that it asks for the score of each assignment
          earnedgraph[i] = get_int ("Total points earned on assignment #%d:\n",i+1); // Saves the score individually, also the %d puts a double into text
          TOTALPOINTSEARNED = TOTALPOINTSEARNED+ earnedgraph[i]; //this line basically is what holded all the information that the user had put inside, it asks you how many total points you earned and whatever you input that will keep it until the total assignments that you had input show up that many times for later use.
          possiblegraph[i] = get_int ("Total possible points on assignment #%d:\n",i+1); // Saves the total possible and the %d just puts a double into text
          TOTALPOINTSPOSSIBLE = TOTALPOINTSPOSSIBLE+ possiblegraph[i]; //this line does the same as the one above 2 spots but this line asks for the total possible points that you can get on the assignment
    }
    double finalscore = 0; // double means it is a double precision number and lets you divide with decimals
    finalscore = (double)TOTALPOINTSEARNED/(double)TOTALPOINTSPOSSIBLE*100; // the times 100 is so that way we get a whole number not a decimal.
    printf("Your current grade is: "); // prints 
        printf("%.02f ",finalscore); // the .02 makes it so it is not continous and only has two place values.
        printf("%%\n"); // %% is so that it shows as a %
    for(int x = 0; x < assignments;x++){ // for loop so that it creates a graph for every assignment and the x is counting the number of assignments
        double percent = earnedgraph[x]/possiblegraph[x]*100; // gets the percent of the assignment 
        for(int y = 0; y < percent;y++){ // for loop that counts the percent of the assignment
            printf("|"); // so it puts down a bar for every 1%
            
        }
        printf("%.02f%%\n",percent); // starts the next graph showing the percent for each individual assignment
    }
    return 0; //ends the program
}
