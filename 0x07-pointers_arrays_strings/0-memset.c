/**
 * *_memset - set a block of memory for a byte
 * @s: block where the byte(b) is stored
 * @b: is the byte to be stored
 * @n: is the number of bytes to be stored
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i=0;
	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}