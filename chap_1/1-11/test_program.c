/*
 * Filename:    test_program.c
 * Author:      Ge CHEN<princhenee1991@126.com>
 * Date:        2015-02-06
 *
 * exercise 1-11
 *
 * How would you test the word count program? What kind of
 * input are most likely to uncover bugs if there are any?
 *
 */

#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0  /* outside a word */

main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ( ( c = getchar() ) != EOF ) {
        ++nc;
        if ( c == '\n' )
            ++nl;
        if ( c == ' ' || c == '\n' || c == '\t' )
            state = OUT;
        else if ( state == OUT ) {
            state = IN;
            ++nw;
        }
    }

    printf( "\nNumber of lines: %d, Number of words: %d, Number of characters: %d\n", nl, nw, nc );
}
