#include "main.h"

/**
 * rot13 - encodes the string
 * @s: the string to encode
 * Return: the encoded string
 */

char *rot13(char *s)
{
	char part1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char part2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; part1[j] != '\0'; j++)
		{
			if (s[i] == part1[j])
			{
				s[i] = part2[j];
				break;
			}
		}
	}
	return (s);
}
