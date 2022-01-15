//
// Created by michael on 31/12/2021.
//
// Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then
// displays the number in the form xxx.xxx.xxx.

# include <stdio.h>

int main( void ) {

    int firstSection, secondSection, thirdSection;

    printf( "Enter phone number [(xxx) xxx-xxxx]: " );
    scanf( "(%d)%d-%d", &firstSection, &secondSection, &thirdSection );

    printf( "You entered %d.%d.%d\n", firstSection, secondSection, thirdSection );

    return 0;
}

