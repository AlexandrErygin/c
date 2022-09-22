#include <stdio.h>
#include <locale.h>

void zadanie3()
{
	setlocale(LC_ALL, "RUS");
	int n = 4, k = 2, m = 6;
	char str[] = " ";
	printf("%100s Даны числа %i и 333\n", str, n);
	//printf("Число %i делить на %i равно %i.%i\n", n, 333, k + m, m, n / 333.);
	printf("Число %i делить на %i равно %8.6f\n", n, 333, n / 333.);
}
void main()
{
	zadanie3();
}