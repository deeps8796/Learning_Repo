#include <stdio.h>
#include "sum.h"

int main() {
	int num1, num2, sum_result;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	sum_result = sum(num1, num2);
	printf("Sum: %d\n", sum_result);
	return 0;
}