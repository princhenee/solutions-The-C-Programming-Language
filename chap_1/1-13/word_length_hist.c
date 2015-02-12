/*
 * Filename:    word_length_hist.c
 * Author:      Ge CHEN <princhnee1991@126.com>
 * Date:        2015-02-09
 * 
 * exercise 1-13
 * 
 * Write a program to print a histogram of the lengths of words in
 * its input. It is easy to draw the histogram with the bars horizonal;
 * a vertical orientation is more challenging.
 */

#include <stdio.h>

#define IN   1   /* inside  a word*/
#define OUT  0   /* outside a word*/
#define MAX_WORD_LENGTH   50

main()
{
	int i, c, state, current_len;
	int words_hist[ MAX_WORD_LENGTH ] ;

	// initialize words_hist array
	for ( i = 0; i < MAX_WORD_LENGTH; ++i )
		words_hist[ i ] = 0;

	state = OUT, current_len = 0;
	while ( ( c = getchar() ) != EOF ) {
		// move from OUT to IN, start incrementing length
		if ( c != ' ' && c != '\n' && c != '\t' ) {
			if ( state == OUT ) {
				current_len = 1;
				state = IN;
			}
			// continue in IN state, length += 1, warn condition
			else {
				current_len++;
			}
		}
		// move from IN to OUT, register length and reset length to 0
		else if ( state == IN ) {
			state = OUT;
			if ( current_len < MAX_WORD_LENGTH ) {
				++words_hist[ current_len ];
			}
			else {
				printf( " a word longer than max length appears! " );
			}
		}
	}
	
	// printf results in horizontal bars
	printf( "  Horizonal bars\n" );
	printf( "\tLength \t Count\n" );
	for ( i = 0; i < MAX_WORD_LENGTH; ++i ) {
		if ( words_hist[ i ] )
			printf( "\t %5d \t %5d \n", i, words_hist[ i ] );
	}

	// printf results in vertical bars
	printf( "\n  Vertical bars\n" );
	printf( "\tLength " );
	for ( i = 0; i < MAX_WORD_LENGTH; ++i ) {
		if ( words_hist[ i ] )
			printf( "\t %3d ", i );
	}
	printf( "\n\tCount " );
	for ( i = 0; i < MAX_WORD_LENGTH; ++i ) {
		if ( words_hist[ i ] )
			printf( "\t %3d ", words_hist[ i ] );
	}
	printf( "\n" );




}
