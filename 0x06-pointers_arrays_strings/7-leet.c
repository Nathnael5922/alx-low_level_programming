#include "main.h"

/**
  * leet - function that encode a string
 *@str:string that will be encoded
  *Return:returns encoded string
  */
char *leet(char *str)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[i])
				[i] = b[j];
		}
	}
	return (str);
}
