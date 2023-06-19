#include <stdlib.h>
#include "dog.h"

/**
 * _isouter - prints the length of a string
 * @s: string
 * Return: length of the string
 * korir codes
 */
int _isouter(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * *_strncpy - copies the string pointed to by src
 * to the buffer pointed to by src
 * @str: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 * korir codes
 */
char *_strncpy(char *str, char *src)
{
	int length, y;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (y = 0; y < length; y++)
	{
		str[y] = src[y];
	}
	str[y] = '\0';

	return (str);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog, otherwise, NULL
 * korir codes
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _isouter(name);
	length2 = _isouter(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strncpy(dog->name, name);
	_strncpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
