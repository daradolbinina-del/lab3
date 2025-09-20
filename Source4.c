#include <locale.h>
#include <stdio.h>

void main()
{
	double a, b, c;
	setlocale(LC_ALL, "RUS");
	printf("Введите сумму вклада: ");
	scanf_s("%lf", &a);
	printf("Введите годовую процентную ставку (в процентах): ");
	scanf_s("%lf", &b);
	c = a * (b / 100);
	printf("Доход по вкладу: %.2lf\n", c);
	return 0;
}