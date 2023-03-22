#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of program arguments
 *
 * @argv: array of input arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes;
	char *opcode, *first_opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	first_opcode = (char *)(&main);

	for (opcode = first_opcode; bytes > 0; opcode++, bytes--)
	{
		printf("%02x", *opcode & 0xff);
		if (bytes != 1)
			printf(" ");
	}
	printf("\n");


	return (0);
}
