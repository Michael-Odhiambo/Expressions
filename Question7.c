//
// Created by michael on 31/12/2021.
//
// Write a program that formats product information entered by the user.

# include <stdio.h>

int main( void ) {
    int itemNumber;
    float unitPrice;
    int day, month, year;

    printf( "Enter item number: " );
    scanf( "%d", &itemNumber );

    printf( "Enter unit price: " );
    scanf( "%f", &unitPrice );

    printf( "Enter purchace date (mm/dd/yy): " );
    scanf( "%d/%d/%d", &month, &day, &year );

    printf( "Item\t\tUnit Price\t\tPurchase\n" );
    printf( "%d\t\t$%7.2f\t\t%d/%d/%d\n", itemNumber, unitPrice, month, day, year );

    return 0;
}

