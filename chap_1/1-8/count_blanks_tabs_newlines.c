/*
 * Filename:    count_blanks_tabs_newlines.c
 * Author:      Ge CHEN <princhenee1991@126.com>
 * Date:        2015-02-02
 *
 * exercise 1-8
 *
 * Write a program to count blanks, tabs and newlines.
 *
 */

#include <stdio.h>

/* count lines in input */
main()
{
    int c, nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;
    while ( (c = getchar()) != EOF ) {
        if ( c == ' ' )
            ++nb;
        if ( c == '\t' )
            ++nt;
        if ( c == '\n' )
            ++nl;
    }
    printf( "\tnumber of blanks: %d\n", nb );
    printf( "\tnumber of tabs: %d\n", nt );
    printf( "\tnumber of newlines: %d\n", nl );
}
