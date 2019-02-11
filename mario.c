// Makes two pyramids out of hashtags for Mario

#include <cs50.h>
#include <stdio.h>

int main(void)
    
{
    int height;
    // validate user input, enter pyramids' height 
    do 
    {
        height = get_int("How tall are the pyramids?\n");
    }
    while (height < 1 || height > 8);
        // prints spaces
    int j;
    for (j = 0; j < height; j++)
    {
        for (int space = height - j; space > 1; space--)
        {  
            printf(" ");
        }
        // Prints first pyramid's hashes 
        for (int hash = 0; hash < j + 1; hash++)
        {
            printf("#");
        }
        // Prints space between pyramids
        printf("  ");
        // Prints second pyramids hashes
        for (int hash = 0; hash < j + 1; hash++)
        {
            printf("#");
        }
        // Prints new line
        printf ("\n"); 
    }    
}
