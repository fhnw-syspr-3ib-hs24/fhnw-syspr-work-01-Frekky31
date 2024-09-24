#include <stdio.h>

int main(int argc, char *argv[])
{
	// Check if arguments are a-z
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 'a' || argv[i][j] > 'z')
			{
				printf("Argument %d: %d is not a-z\n", i, argv[i]);
				return 1;
			}
		}
	}
	for (int i = 0; i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}
	return 0;
}