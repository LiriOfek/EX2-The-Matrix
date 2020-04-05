/********************************************************\
File Name: main.c
Author: Liri (5/4/2020)
Purpose: This file print the chess table of given character
		 and in given size
\********************************************************/

#include <stdio.h>

#define ZERO (0)
#define ENTER_CHAR ('\n')
#define DECIMAL (10)
#define CHAR_ZERO ('0')
#define INITIAL_INDEX (1)
#define ENTER_STRING ("\n")
#define EVEN_NUMBER (2)
#define SPACE_STRING (" ")
#define PRINT_CHARACTER ("%c")
#define SPACE_CHAR (' ')

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
	int number = ZERO; /*the total number the user enter*/
	int char_from_user; /*the next char from user*/

	while ((char_from_user = getchar()) != ENTER_CHAR) {
		/*multiply the digits seen already by 10 and
		add the decimal value of the new digit*/
		number = number * DECIMAL + (char_from_user - CHAR_ZERO);
	}
	return number;
}

void print_character_or_space(int row, 
								int column, 
								char character) {
	/********************************************************\
	* Function name - print_character_or_space
	*
	* Function Purpose - print character or space according to
	*					 the index of row and the column in the table
	*
	* Parameters - IN int row - the index of the row in the the table
	*			   IN int column - the index of the column in the table
	*			   IN char character - the character that will be printed
	*
	* Return Value - there isn't return value
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - this function print the given character or space
	*			  according to the index of the row and the column in the table
	*
	* Author - Liri
	\********************************************************/
	if (row % EVEN_NUMBER == ZERO)
	{
		if (column % EVEN_NUMBER == ZERO)
		{
			printf(SPACE_STRING);
		}
		else
		{
			printf(PRINT_CHARACTER, character);
		}
	}
	else
	{
		if (column % EVEN_NUMBER == ZERO)
		{
			printf(PRINT_CHARACTER, character);
		}
		else
		{
			printf(SPACE_STRING);
		}
	}
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
			print_character_or_space(row, 
										column, 
										character);
		}
		printf(ENTER_STRING);
	}
}

void main() {
	/********************************************************\
	* Function name - main
	*
	* Function Purpose - get number and character from the user and
	*					 run the function that print the chess table
	*					 of in the size of the number the user entered
	*					 and with the character the user enterd
	*
	*
	* Parameters - no Input/Output parameters
	*
	* Return Value - there isn't return value
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - get number and character from the user and
	*			  run the function that print the chess table
	*			  of in the size of the number the user entered
	*			  and with the character the user enterd
	*
	* Author - Liri
	\********************************************************/
	int number_from_user = ZERO; /*the number that the user enter*/
	char character_from_user = SPACE_CHAR; /*the character that the user enter*/

	/*get number and character from user*/
	printf("Enter number: ");
	number_from_user = get_number_from_user();
	printf("Enter character: ");
	character_from_user = getchar();

	print_chess_table(number_from_user, 
						character_from_user);
}