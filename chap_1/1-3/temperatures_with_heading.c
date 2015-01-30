/*
 * Filename:    temperature_with_heading.c
 * Author:      Ge CHEN <princhenee1991@126.com>
 * Date:        2015-01-30
 *
 * exercise 1-3
 *
 * Modify the temperature conversion program to print a heading
 * above the table.
 *
 */

#include <stdio.h>
#include <stdlib.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300;
 * floating-point version with heading
 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;     /* lower limit of temperature table */
    upper = 300;   /* upper limit */
    step  = 20;    /* step size */

    fahr = lower;
    printf( "%5s\t%11s\n", "fahr", "celsius" );
    while ( fahr <= upper ) {
        celsius = ( 5.0 / 9.0 ) * ( fahr - 32.0 );
        printf( "%5.0f\t%10.1f\n", fahr, celsius );
        fahr = fahr + step;
    }

    return EXIT_SUCCESS;
}
