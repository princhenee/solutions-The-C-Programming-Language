/*
 * Filename:    copy_input.c
 * Author:      Ge CHEN<princhenee1991@126.com>
 * Date:        2015-02-06
 *
 * exercise 1-9
 *
 * Write a program to copy its input to output, replacing each
 * string of one or more blanks by a single blank.
 *
 */

#include <stdio.h>

#define IN 1   /* inside a word */
#define OUT 0   /* outside a word */

main()
{
    int c, STATE = OUT;

    while ( ( c = getchar() ) != EOF ){
        if ( c != ' ' && c != '\t' ) {
            putchar( c );
            STATE = IN;
        }
        else if ( STATE == IN ){
            putchar( ' ' );
            STATE = OUT;
        }

    }
}
