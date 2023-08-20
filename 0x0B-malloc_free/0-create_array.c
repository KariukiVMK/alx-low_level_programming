#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an arry of cahrs
  * @size: the size of the array
  * @c: the character to be assingned
  * Return:pointer to the arra
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
