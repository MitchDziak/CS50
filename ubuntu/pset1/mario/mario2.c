#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Getting the height and width of the first row and column
    int height = get_int("What height would you like? ");
    
    //Error case, if user inputs an invalid number, it will reprompt
    while (height < 1 && height > 8)
    {
        height = get_int("What height would you like? (Please use a positive integer between 0 and 8) ");
    }
    
    while (height > 0)
    {
        string hashtag = get_string("#")
        
        
        
        
        
        
    }
    
}