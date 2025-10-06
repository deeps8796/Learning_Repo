#include <stdio.h>
#include "sum.h"
#include "subtract.h"

int main() {
	int num1, num2, sum_result;
    printf("Let's sum, subtract two numbers: \n");
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	sum_result = sum(num1, num2);
	printf("Sum: %d\n", sum_result);
    printf("Subtraction: %d\n", subtract(num1, num2));

    printf("lets sum 3 numbers: \n");
    int num3, sum3_result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    sum3_result = sum_3(num1, num2, num3);
    printf("Sum of 3 numbers: %d\n", sum3_result);
	return 0;
}