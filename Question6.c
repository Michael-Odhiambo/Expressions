//
// Created by michael on 31/12/2021.
//
// Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the
// form yymmdd.

# include <stdio.h>

int main( void ) {

    int day, month, year;

    printf( "Enter a date (mm/dd/yyyy): " );
    scanf( "%d/%d/%d", &month, &day, &year );
    printf( "You entered the date %d%d%d\n", year, month, day );

    return 0;
}
