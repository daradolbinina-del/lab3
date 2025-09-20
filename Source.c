#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int num1;
	int num2;
	puts("введите число:");
	scanf_s("%d", &num1);
	printf("Введено первое число %d\n", num1);
	puts("введите число:");
	scanf_s("%d", &num2);
	printf("Введено второе число %d\n", num2);
	printf("Сумма: %d\n", num1 + num2);
	printf("Разность: %d\n", num1 - num2);
	printf("Произведение: %d\n", num1 * num2);
	printf("Частное: %d\n", num1 / num2);
	printf("Остаток от деления: %d\n", num1 % num2);

}