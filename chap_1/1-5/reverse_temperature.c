/*
 * Filename:    reverse_temperature.c
 * Author:      Ge CHEN <princhenee1991@126.com>
 * Date:        2015-01-31
 *
 * exercise 1-5
 *
 * Modify the temperature conversion program to print the table
 * in reverse order, that is, from 300 degrees to 0.
 *
 */

#include <stdio.h>
#include <stdlib.h>

/* print Fahrenheit-Celsius table
 * for fahr = 300, ..., 20, 10, 0;
 * floating-point version with heading
 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;     /* lower limit of temperature table */
    upper = 300;   /* upper limit */
    step  = 20;    /* step size */

    printf( "%5s\t%11s\n", "fahr", "celsius" );
    for ( fahr = upper; fahr > lower; fahr -= 20 ) {
        celsius = ( 5.0 / 9.0 ) * ( fahr - 32.0 );
        printf( "%5.0f\t%10.1f\n", fahr, celsius );
    }

    return EXIT_SUCCESS;
}
