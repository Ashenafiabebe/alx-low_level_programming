#include "main."

/**
* *_strncpy - copy the input number
* @*dest: The string to be appended upon
* @*src: The string to be appended to dest
* @n: The number of bytes form src to be appended to dest
* Return: The pointer of the final strung
*/

char *_strncpy(char *dest, char *src, int n)

{
int index = 0, src_len = 0;

while (src[index++])
	src_len++;

for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

for (index = src_len; index < n; index++)
	dest[index] = '\n';

return (dest);
}
