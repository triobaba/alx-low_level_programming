#include <stdio.h>
/**
 * main-This is the part of the source code where the compilertion starts from.
 *
 * Return: this return zero except it when we encouter erros
 */
int main(void)
{
	printf("The size of Char: %ld",(unsigned long int)sizeof(char));
	printf("The size of Int:%ld",(unsigned long int)sizeof(int));
	printf("The size of long int:%ld",(unsigned long int)sizeof(long int));
	printf("The size of long long int:%ld",(unsigned long int)sizeof(long long int));
	printf("The size of a float:%ld",(unsigned long int)sizeof(float));
	return (0);

}
