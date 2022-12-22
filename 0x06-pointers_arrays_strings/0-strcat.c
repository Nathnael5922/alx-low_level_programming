#include "main.h"

/**
  *_strcat - concatenates  the string pointed to by @src to
  *@dest: String that will be appended
  *@src: String to be concatenated upon
  * Return: returns poiner to @dest
  */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count++;
	}
	return (dest);
}
