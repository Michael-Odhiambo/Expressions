//
// Created by michael on 31/12/2021.
//
// Books are identified by an International Standard Book Number ( ISBN ). ISBNs assigned after January 1,
// 2007 contain 13 digits, arranged in five groups such as 978-0-393-97950-3. ( Older ISGNs use 10 digits. )
// The first group ( the GSI prefix ) is currently either 978 or 979. The group identifier specifies the
// language or country of origin ( for example, 0 and 1 are used in English-speaking countries ). The publisher
// code identifies the publisher ( 393 is the code for W.W.Norton. The item number is assigned by the publisher
// to identify a specific book. An ISBN ends with a check digit that's used to verify the accuracy of the
// preceding digits. Write a program that breaks down an ISBN entered by the user.

# include <stdio.h>

int main( void ) {

    int gsiPrefix, groupIdentifier, publisherCode, itemNumber, checkDigit;

    printf( "Enter ISBN: " );
    scanf( "%d-%d-%d-%d-%d", &gsiPrefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit );

    printf( "GSI prefix: %d\n", gsiPrefix );
    printf( "Group identifier: %d\n", groupIdentifier );
    printf( "Publisher code: %d\n", publisherCode );
    printf( "Item number: %d\n", itemNumber );
    printf( "Check digit: %d\n", checkDigit );

    return 0;
}

