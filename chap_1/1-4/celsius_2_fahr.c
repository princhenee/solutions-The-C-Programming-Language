/*
 * Filename:    celsius_2_fahr.c
 * Author:      Ge CHEN <princhenee1991@126.com>
 * Date:        2015-01-30
 *
 * exercise 1-4
 *
 * Write a program to print the corresponding Celsius to
 * Fahrenheit table.
 *
 */

#include <stdio.h>
#include <stdlib.h>

/* print Celsius-Fahrenheit table
 * for celsius = 0, 20, ..., 300;
 * floating-point version with heading
 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;     /* lower limit of temperature table */
    upper = 300;   /* upper limit */
    step  = 20;    /* step size */

    celsius = lower;
    printf( "%11s\t%5s \n",  "celsius", "fahr");
    while ( celsius <= upper ) {
        //celsius = ( 5.0 / 9.0 ) * ( fahr - 32.0 );
        fahr = 32.0 + ( 9.0 / 5.0 ) * celsius;
        printf( "%10.1f\t%5.1f\n", celsius, fahr );
        celsius = celsius + step;
    }

    return EXIT_SUCCESS;
}
