/********************************************************\
File Name: main.c
Author: Liri (5/4/2020)
Purpose: This file print the chess table of given character
		 and in given size
\********************************************************/

#include <stdio.h>

#define INITIAL_NUMBER (0)
#define ENTER_CHAR ('\n')
#define DECIMAL (10)
#define CHAR_ZERO ('0')
#define INITIAL_INDEX (1)
#define ENTER_STRING ("\n")


int get_number_from_user() {
	/********************************************************\
	* Function name - get_number_from_user
	*
	* Function Purpose - get the number that the user type
	*
	* Parameters - OUT integer number - the number that the user type
	*
	* Return Value - the number that the user type
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - this function get the number that the user types
	*			  and return it.
	*
	* Author - Liri
	\********************************************************/
	int number = INITIAL_NUMBER; /*the total number the user enter*/
	int char_from_user; /*the next char from user*/

	while ((char_from_user = getchar()) != ENTER_CHAR) {
		/*multiply the digits seen already by 10 and
		add the decimal value of the new digit*/
		number = number * DECIMAL + (char_from_user - CHAR_ZERO);
	}
	return number;
}

void print_chess_table(int size_of_table,
	char character) {
	/********************************************************\
	* Function name - print_chess_table
	*
	* Function Purpose - print the chess table of the characters
	*					 and spaces in size of size_of_table
	*
	* Parameters - IN int size_of_table - the size of the table
	*			   IN char character - the character that will be printed
	*
	* Return Value - there isn't return value
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - this function print the chess table of the characters
	*			  and spaces in size of size_of_table
	*
	* Author - Liri
	\********************************************************/
	int row = INITIAL_INDEX; /*the index of the row of the table*/
	int column = INITIAL_INDEX; /*the index of the column of the table*/

	for (row = INITIAL_INDEX; row <= size_of_table; row++)
	{
		for (column = INITIAL_INDEX; column <= size_of_table; column++)
		{
			print_character_or_space(row, column, character);
		}
		printf(ENTER_STRING);
	}
}