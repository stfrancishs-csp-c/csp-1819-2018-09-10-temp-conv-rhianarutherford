#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //set up variables//
    long long int isbn, tempisbn;
    int i;

    //get new input//
    isbn = get_long("Please enter an ISBN number without dashes; \n");

for (i=10; i>0; i--)
    {
        tempisbn=isbn%10; //isolate digit?
        printf("%lld\n", tempisbn);
    }
    //how do we isolate digits


    //check loop

//int get_long( string format, ...);
/*
    int tenth = x % 10;
    x = x/10;
*/
}

