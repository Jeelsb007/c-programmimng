#include<stdio.h>
#include<conio.h>
/*
	Datatype, variable, constant

	variable :
		- variables are the container which stores the value.

		syntax :
			DataType varName = value;
		- declaration
			DataType varName;
		- assignment
			varName = value;
		- initialization :
			DataType varName = value;
	DataType :
		- it specifieas that how much memory is allocated to the
		  variable.
	Numbers :
		- Intiger	=> 10, 20, 55	: int  	-> 4 bytes  : %d, %i
		- Floating point=> 3.14, 23.4   : float -> 4 bytes  : %f
		- Characters	=> A-Z, a-z	: char  -> 1 byte   : %c

		- double 	-> 8 bytes
		- long long int -> 8 bytes

		8 bytes = 1 bit
		1000 bit= 1 kb
		1000 kb = 1 mb
		1000 mb = 1 gb

	How to name variable ?
		- it can be in UPPERCASE, lowercase, camelCase, Titlecase
		- it can contain numbers at last or middle
			- my1stVar, var1
		- it can contain underscore
			- my_var
		- it can't be repeated.
		- it can't contain spaces or any symbol '@,#,$,%,^,&,!,~ '

*/
main()
{
	int a = 10;
	int b = 5;
	clrscr();

	printf("Sum of %d and %d = %d",a,b,a+b);

	getch();
}

/*
	Escape sequence characters :
		\n	= new line
		\t	= tab (8 location)

12345678
123456789
*/