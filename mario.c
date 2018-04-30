#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        //  prompt user for height
        height = get_int("Height: ");
        if (height == 0)
        {
            return 0;
        }
    }
    //  constrain height from 1 - 23
    while (height < 1 || height > 23);
    {
        //printf("Height works\n");

        //  loop for height number of rows
        for (int i = 0; i <= height - 1; i++)
        {
            //  loop 2 for each row
            for (int j = 1; j < height - i; j++)
            {
                printf(" ");
            }
            // loop 3 to complete printing the hashes
            for (int k = 0; k < i + 1; k++)
            {
                printf("#");
            }

            printf("#\n");
        }

    }
}