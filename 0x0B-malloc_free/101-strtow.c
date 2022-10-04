#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * fix_word - fixes the str in defined order
 * @str: string input
 * Return: return pointer to fixed string
 */
char *fix_word(char *str)
{
	char *p;
	int index, i = 0, size;

	for (index = 0; str[index]; index++)
	{
		if (str[index] != ' ')
			break;
		index++;
	}
	size = strlen(str);
	p = malloc(size * sizeof(char));

	for (i = 0; str[index]; i++)
	{
		while ((str[index] == ' ') && (str[index + 1] == ' '))
			index++;
		if (str[index] == ' ' && str[index + 1] == '\0')
		{
			p[i] = '\0';
			return (p);
		}
		p[i] = str[index];
		index++;
	}
	p[i] = '\0';
	return (p);
}
/**
 * job - does the main job
 * @str: string input
 * @num: num of words
 * @size: size of mem to allocate
 * Return: return pointer to mem
 */
char **job(char *str, int num, int size)
{
	char **p;
	int a = 0, b, i;

	p = malloc(sizeof(char *) *  num);
	for (i = 0; i < num; i++)
	{
		p[i] =  malloc(sizeof(char) * size);
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}

	}

	for (i = 0; i < num; i++)
	{
		for (b = 0; *(str + a); b++)
		{
			if (*(str + a) == ' ')
			{
				p[i][b] = '\0';
				a++;
				break;
			}
			p[i][b] = str[a];
			a++;
		}
	}
	p[num] = NULL;
	return (p);
}
/**
 * strtow - converts string to words
 * @str: string input
 * Return: returns pointer to array of words
 */
char **strtow(char *str)
{
	char **p;
	int size, i, num = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	str = fix_word(str);

	size = strlen(str);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			num++;
	}
	num = num + 1;
	p = job(str, num, size);

	return (p);
}
