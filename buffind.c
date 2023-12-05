#include "main.h"

/**
 * ptr_buffering - takes two arguments array buffer and buff_ind pointer
 * @buffer: size of array
 * @buff_ind: pointer int
*/

void ptr_buffering(char buffer[], int *buff_ind)
{
	int i;

	if (*buff_ind > 0)
	{
		for (i = 0; i < *buff_ind; i++)
		{
			putchar(buffer[i]);
		}
	}
	*buff_ind = 0;
}
