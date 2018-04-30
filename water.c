#include<stdio.h>
#include<math.h>
#include<cs50.h>


int main(void)
{
    //  prompt and validate user input
    int minutes = get_int("Minutes: ");

    //  calculate equivalent bottles
    printf("Bottles: %i\n", minutes * 12);

    //printf("%i\n", minutes);

}
