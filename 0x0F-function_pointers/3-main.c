#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
#include "3-calc.h"

/**
* main - when user runs main,
* user should give two integers and an operator and
* main will calculate the math via a function pointer.
* prints sum, difference, product, dividend, or remainder
* @argc: argument counter
* @argv: arguments
* Return: 0 on sucess
*/

int main(int argc, char *argv[])
{
int n1, n2;
int (*f)(int, int);

/* validate input */
if (argc != 4)
{
printf("Error\n");
exit(98);
}

/* convert user input to ints and point to correct operator function */
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
f = get_op_func(argv[2]);

if (f == NULL || (argv[2][1] != '\0'))


