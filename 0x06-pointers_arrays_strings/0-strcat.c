#include "main.h"
/**
 * *strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *strconcat(char *firstname, char *lastname)
{
int a = -1, i;
for (i = 0; firstname[i] != '\0'; i++)
;

do {
	a++;
	firstname[i] = lastname[a];
	i++;
} while (lastname[a] != '\0');

return (firstname);
}
