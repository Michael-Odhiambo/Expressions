//
// Created by michael on 31/12/2021.
//
// Modify the addFractions.c program so that the user enters both fractions at the same time separated by
// a plus sign.

# include <stdio.h>

int main( void ) {

    int firstNumerator, firstDenominator, secondNumerator, secondDenominator;

    printf( "Enter two fractions separated by a plus sign: " );
    scanf( "%d/%d+%d/%d", &firstNumerator, &firstDenominator, &secondNumerator, &secondDenominator );

    printf( "The sum is: %d/%d\n", firstNumerator * secondDenominator + secondNumerator * firstDenominator,
            firstDenominator * secondDenominator );

    return 0;

}

