/*
 * Filename:    character_freq.c
 * Author:      Ge CHEN <princhenee1991@126.com>
 * Date:        2015-02-13
 * 
 * exercise 1-14
 *
 * Write a program to print a histogram of the frequencies of
 * different characters in its input.
 *
 */

#include <stdio.h>

#define CHARACTER_SIZE 26

main()
{
	int i, c;
	int char_hist[ CHARACTER_SIZE ];

	for ( i = 0; i < CHARACTER_SIZE; ++i )
		char_hist[ i ] = 0;

	while ( ( c = getchar() ) != EOF ) {
		if ( c >= 'a' && c <= 'z' )
			++char_hist[ c-'a' ];
		if ( c >= 'A' && c <= 'Z' )
			++char_hist[ c-'A' ];
	}

	printf( "\n\tCharacter Frequency\n");
	for ( i = 0; i < CHARACTER_SIZE; ++i ) {
		if ( char_hist[ i ] )
			printf("\t   %c  %8d\n", 'a'+i, char_hist[ i ] );
	}
}
