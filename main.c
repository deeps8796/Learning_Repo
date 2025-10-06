#include <stdio.h>
#include "sum.h"
#include "subtract.h"

int main() {
	int num1, num2, sum_result;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	sum_result = sum(num1, num2);
	printf("Sum: %d\n", sum_result);
    printf("Subtraction: %d\n", subtract(num1, num2));
	return 0;
}