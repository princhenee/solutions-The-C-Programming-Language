/*
 * Filename:    temperature_conv_func.c
 * Author:      Ge CHEN <princhenee1991@126.com>
 * Date:        2015-02-14
 *
 * exercise 1-15
 *
 * Rewrite the temperature conversion program of section 1.2 to
 * use a function for conversion
 *
 */

#include <stdio.h>

float fahr_to_celsius( float fahr );

/* print Fahrenheit-Celsius table using function */
main()
{
	float fahr;
	int lower, upper, step;

	lower = 0;     /* lower limit of temperature table */
	upper = 300;   /* upper limit */
	step  = 20;    /* step size */

	printf( "%5s\t%11s\n", "fahr", "celsius" );
	for ( fahr = lower; fahr <= upper; fahr += step )
	    printf( "%5.0f\t%10.1f\n", fahr, fahr_to_celsius( fahr ) );

	return 0;
}

float fahr_to_celsius( float fahr )
{
	float celsius;
	celsius = ( 5.0 / 9.0 ) * ( fahr - 32.0 );
	return celsius;
}
