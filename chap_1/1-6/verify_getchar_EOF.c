/*
 * Filename:    verify_getchar_EOF.c
 * Authro:      Ge CHEN <princhenee1991@126.com>
 * Date:        2015-01-31
 *
 * exercise 1-6
 *
 * Verify the expression getchar() != EOF is 0 or 1.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = ( getchar() != EOF );
    printf( "The value of expression 'getchar() != EOF' is %d\n", c);

    return EXIT_SUCCESS;
}
