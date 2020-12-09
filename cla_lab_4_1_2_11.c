//Lab 4.2.11.2 
//Arrays: part 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a[26];
	for (char i = 'a'; i <= 'z'; i++)
	{
		a[i] = i;
	}
	for (char i = 'z'; i >= 'a'; i--)
		printf("%c\n", a[i]);
	printf("%c%c%c%c%c", a['g'], a['r'], a['e'], a['a'], a['t']);

	return 0;
}