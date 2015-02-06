/*
 * Filename:    clarify_input.c
 * Author:      Ge CHEN<princhenee1991@126.com>
 * Date:        2015-02-06
 *
 * exercise 1-10
 *
 * Write a program to copy its input to its output, replacing each
 * tab by \t, each backspace by \b and each blackslash by \\. This
 * makes tabs and backspaces visible in an unambiguous way.
 *
 */

#include <stdio.h>

main()
{
    int c;

    while ( ( c = getchar() ) != EOF ) {
        if ( c == '\t' ) {
            putchar('\\');
            putchar('t');
        }
        else if ( c == '\b' ) {
            putchar('\\');
            putchar('b');
        }
        else if ( c == '\\' ) {
            putchar('\\');
            putchar('\\');
        }
        else {
            putchar( c );
        }
    }
}
