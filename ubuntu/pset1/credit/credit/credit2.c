#include <math.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int first = 3;
    int second = 7;
    
    int temp = second;
    
    do
    {
        temp /= 10;
        first *= 10;
    } while (temp > 0);
    
    int together = first + second;
    
    printf("%i", together);
}



    if (checksum % 10 == 0)
    {
        int temp = p;
    
        do
        {
            temp /= 10;
            h *= 10;
        } while (temp > 0);
        
        int together = h + p;
        
        printf("%i", together);
    }