/*
 * File: 4-print_alphabt.c
 * author: Eric Uwiringiyimana
 *
 */

#include <stdio.h>
/*
 *Main: print alphabets in lowercas, except 'e' and 'q'
 *
 *Return: always '0'
 *
 */

int main(void)
{
          char letter;

	  for (letter = 'a'; letter <= 'z'; letter++)
	  {
	  if (letter != 'e' && letter != 'q')
	          putchar(letter);
	  }

	  putchar('\n');

	  return (0);
}




	  
	 
			        
