#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1, num2,sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum = %d", sum);
    return 0;