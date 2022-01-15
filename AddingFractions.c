//
// Created by michael on 31/12/2021.
//
// This program adds two fractions input by the user.

# include<stdio.h>

int main( void ) {

    int firstNumerator, firstDenominator, secondNumerator, secondDenominator;
    int resultingNumerator, resultingDenominator;

    printf( "Enter the first fractions, format ( a/b ): " );
    scanf( "%d/%d", &firstNumerator, &firstDenominator );

    printf( "Enter second fraction, format ( a/b ): " );
    scanf( "%d/%d", &secondNumerator, &secondDenominator );

    resultingNumerator = firstNumerator * secondDenominator + secondNumerator * firstDenominator;
    resultingDenominator = firstDenominator * secondDenominator;

    printf( "The sum is: %d/%d\n", resultingNumerator, resultingDenominator );

    return 0;
}

