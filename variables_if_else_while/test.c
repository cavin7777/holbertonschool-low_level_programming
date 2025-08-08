#include <stdio.h>

/**
 * main - operation math
 * Return: 0
 *
 */

int second(void);

int main(void)
{
	int op1 = 10;
	int op2 = 3;
	int mark = 60;

	printf("Operand1 : %d Operand2 : %d\n", op1, op2);
	printf("Addition of op1 and op2 : %d\n", op1 + op2);
	printf("subtraction of op2 from op1 : %d\n", op2 - op1);
	printf("Multiplication of op1 and op2 : %d\n", op1 * op2);
	printf("Division of op1 by op2 : %d\n", op1 / op2);
	if (5 < 10)
		printf("Five is lower than 10\n");
	if (mark < 50)
		printf("Result: Fail\n");
	else
		printf("Result: Pass\n");
	/* call the second program */
	second();

	return (0);
}

/**
 * second - other test
 * Return: 0
 */
int second(void)
{
	int income = 5000;
	float tax;

	printf("Income : %d\n", income);

	if (income < 10000)
	{
		tax = (float)(income * 10 / 100);
		printf("tax: %f\n", tax);
	}
	else
	{
		tax = (float)(1000 + (income - 10000) * 15 / 100);
		printf("tax: %f\n", tax);
	}
	return (0);
}

