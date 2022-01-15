//
// Created by michael on 31/12/2021.
//

# include <stdio.h>

int main( void ) {

    int firstNumerator, secondNumerator, firstDenominator, secondDenominator;
    int resultingNumerator, resultingDenominator;

    printf( "Enter first fraction, format ( a / b ): " );
    scanf( "%d / %d", &firstNumerator, &firstDenominator );

    printf( "Enter second fraction, format ( a / b ): " );
    scanf( "%d / %d", &secondNumerator, &secondDenominator );

    resultingNumerator = firstNumerator * secondDenominator + secondNumerator * firstDenominator;
    resultingDenominator = firstDenominator * secondDenominator;

    printf( "Answer: %d / %d\n", resultingNumerator, resultingDenominator );

}

