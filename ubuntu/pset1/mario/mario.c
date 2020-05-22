#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Getting the height and width of the first row and column
    int h = get_int("What height would you like? ");
    
    //Error case, if user inputs an invalid number, it will reprompt
    while (h < 1 || h > 8)
    {
        h = get_int("What height would you like? (Please use a positive integer!) ");
    }
    
    //This loop will run as long as the input is more than 0
    while (h > 0)
    {
        //i is initialized beginning with the inputted h
        //while i is greater than 0, it will print an # for each h and decrement for each loop
        for (int i = h; i > 0; i--)
        {
            printf("#");
        }
        //While h is greater than 0, each time i decrements, a new line is added and h is decremented as well
        //When the loop restarts, as long as h > 0, the new h will be used in the for loop
        //This creates a pyramid shape, but it isn't correctly done as the problem set asks
        printf("\n");
        h--;
    }
}