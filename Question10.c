//
// Created by michael on 31/12/2021.
//
// Write a program that asks the user to enter the numbers from 1 to 16 ( in any order ) and then displays
// the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns and diagonals.

# include <stdio.h>

int main( void ) {

    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;

    printf( "Enter the numbers from 1 to 16 in any order: " );
    scanf( "%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9,
           &num10, &num11, &num12, &num13, &num14, &num15, &num16 );
    printf( "%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",
            num1, num2, num3, num4,
            num5, num6, num7, num8,
            num9, num10, num11, num12,
            num13, num14, num15, num16 );

    printf( "Row sums: %d\t%d\t%d\t%d\n",
            num1 + num2 + num3 + num4,
            num5 + num6 + num7 + num8,
            num9 + num10 + num11 + num12,
            num13 + num14 + num15 + num16 );
    printf( "Column sums: %d\t%d\t%d\t%d\n",
            num1 + num5 + num9 + num13,
            num2 + num6 + num10 + num14,
            num3 + num7 + num11 + num15,
            num4 + num8 + num12 + num16 );

    printf( "Diagonal sums: %d\t%d\n",
            num1 + num6 + num11 + num16,
            num13 + num10 + num7 + num4 );

    return 0;

}

