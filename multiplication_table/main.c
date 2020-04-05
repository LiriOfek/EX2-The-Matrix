/********************************************************\
File Name: main.c
Author: Liri (4/4/2020)
Purpose: This file print the multiplication table
from INITIAL_NUMBER to FINAL_NUMBER
\********************************************************/

#include <stdio.h>

#define INITIAL_NUMBER (1)
#define FINAL_NUMBER (9)
#define DECIMAL (10)

void print_multiplication_table() {
	/********************************************************\
	* Function name - print_multiplication_table
	*
	* Function Purpose - print the multiplication table
	*					 from INITIAL_NUMBER to FINAL_NUMBER
	*
	* Parameters - no Input/Output parameters
	*
	* Return Value - there isn't return value
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - this function print the multiplication table
	*			  from INITIAL_NUMBER to FINAL_NUMBER
	*
	* Author - Liri
	\********************************************************/
	int row = INITIAL_NUMBER; /*the row index of the multiplication table*/
	int column = INITIAL_NUMBER; /*the column index of the multiplication table*/
	int result = INITIAL_NUMBER; /*the result of the multiplication of row and column indexes*/

	for (row = INITIAL_NUMBER; row <= FINAL_NUMBER; row++)
	{
		for (column = INITIAL_NUMBER; column <= FINAL_NUMBER; column++)
		{
			result = row * column;
			if (result >= DECIMAL)
				/*add less space*/
			{
				printf("%d      ", result);
			}
			else
			{
				printf("%d       ", result);
			}
		}
		printf("\n");
	}
}

void main() {
	/********************************************************\
	* Function name - main
	*
	* Function Purpose - run the function that print the
	*					 multiplication table from INITIAL_NUMBER
	*					 to FINAL_NUMBER
	*
	* Parameters - no Input/Output parameters
	*
	* Return Value - there isn't return value
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - run the function that print the
	*			  multiplication table from INITIAL_NUMBER
	*			  to FINAL_NUMBER
	*
	* Author - Liri
	\********************************************************/
	print_multiplication_table();
}