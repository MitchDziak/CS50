#include <math.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    //Get input of card number
    
    long card = get_long("Number: ");
    
    //Store every other digit starting from the 2nd to last digit
    
    int a = (2 * ((card / 10) % 10));
    int b = (2 * ((card / 1000) % 10));
    int c = (2 * ((card / 100000) % 10));
    int d = (2 * ((card / 10000000) % 10));
    int e = (2 * ((card / 1000000000) % 10));
    int f = (2 * ((card / 100000000000) % 10));
    int g = (2 * ((card / 10000000000000) % 10));
    int h = ((card / 1000000000000000) % 10);
    
    //Store every other digit starting from the first digit
    
    int i = (card % 10);
    int j = ((card / 100) % 10);
    int k = ((card / 10000) % 10);
    int l = ((card / 1000000) % 10);
    int m = ((card / 100000000) % 10);
    int n = ((card / 10000000000) % 10);
    int o = ((card / 1000000000000) % 10);
    int p = ((card / 100000000000000) % 10);
    
    
    //Test block to print out the card in order
    //printf("card number: %i%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i\n",h,p,g,o,f,n,e,m,d,l,c,k,b,j,a,i);
    
    //Multiple every other digit by 2, then add the products together to create sum_1
    int sum_1 = (((a % 10) + ((a / 10) % 10)) + ((b % 10) + ((b / 10) % 10)) + ((c % 10) + ((c / 10) % 10)) + ((d % 10) + ((d / 10) % 10)) + ((e % 10) + ((e / 10) % 10)) + ((f % 10) + ((f / 10) % 10)) + ((g % 10) + ((g / 10) % 10)) + (2 * ((h % 10) + ((h / 10) % 10))));
    
    //test block to print out sum 1
    //printf("sum_1: %i\n",sum_1);
    
    //Add sum_1 to the sum of digits not multiplied by 2
    int checksum = (sum_1 + i + j + k + l + m + n + o + p);
    
    //test block to print checksum result
    //printf("checksum: %i\n",checksum);
    
    if (checksum % 10 == 0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }

    
}