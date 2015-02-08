/*
 * Filename:    one_word_perline.c
 * Author:      Ge CHEN<princhenee1991@126.com>
 * Date:        2015-02-08
 *
 * exercise 1-12
 *
 * Write a program that prints its input one word per line
 *
 */

#include <stdio.h>

#define IN    1   /* inside a word*/
#define OUT   0   /* outside a word*/

int main()
{
    int c, state;

    state = OUT;
    while ( ( c = getchar() )  != EOF ) {
        if ( c == ' ' || c == '\n' || c == '\t' ) {
            if ( state == IN )
                putchar( '\n' );
            state = OUT;
        }
        else {
            state = IN;
            putchar( c );
        }
    }
    return 0;
}
