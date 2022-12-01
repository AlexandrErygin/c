#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <stddef.h>

struct database {
	char name[80];
	char name_of_browser[40];
	int time_in_browser;
	char ip[40];
};
typedef struct database Base;

int new_zapisi(Base* zapis, int chislo_zapis)
{
	chislo_zapis++;
	printf("Введите Ваше ФИО\n");
	getchar();
	fgets(zapis[chislo_zapis].name, 80, stdin);
	printf("Введите название вашего браузера\n");
	fgets(zapis[chislo_zapis].name_of_browser, 40, stdin);
	printf("Время использования браузера\n");
	scanf("%d", &zapis[chislo_zapis].time_in_browser);
	printf("Введите Ваш ip\n");
	getchar();
	fgets(zapis[chislo_zapis].ip, 40, stdin);
	return chislo_zapis;
}

int pechat(Base* zapis, int chislo_zapis)
{
	for (int chislo_new_zapisi = 1;chislo_new_zapisi <= chislo_zapis;chislo_new_zapisi++)
		printf("Ваше ФИО: %s Ваш браузер: %s Время использования браузера(в секундах): %i\n Ваш ip: %s\n\n", zapis[chislo_new_zapisi].name, zapis[chislo_new_zapisi].name_of_browser, zapis[chislo_new_zapisi].time_in_browser, zapis[chislo_new_zapisi].ip);
}

int poisk(Base* zapis, int chislo_zapis)
{
	char poisk_browser[40], poisk_ip[40];
	printf("Введите название браузера:\n");
	getchar();
	fgets(poisk_browser, 40, stdin);
	printf("Введите ip:\n");
	fgets(poisk_ip, 40, stdin);
	for (int i = 1;i <= chislo_zapis;i++)
	{
		if (strcmp(poisk_browser, zapis[i].name_of_browser) == 0 && strcmp(poisk_ip, zapis[i].ip) == 0)
			vivod_poisk(zapis, i);
	}
}

int vivod_poisk(Base* zapis, int chislo_zapis)
{
	printf("Ваше ФИО: %s\n Ваш браузер: %s\n Время использования браузера: %i\n Ваш ip: %s\n\n", zapis[chislo_zapis].name, zapis[chislo_zapis].name_of_browser, zapis[chislo_zapis].time_in_browser, zapis[chislo_zapis].ip);
}

int main()
{
	system("chcp 1251");
	setlocale(0, "rus");
	int h = 1, k;
	int chislo_zapis = 0;
	Base zapis[100], * ptr_zapis = &zapis[chislo_zapis];
	printf("Выберите пункт\n");
	while (h != 0) 
	{
		printf("1)Добавить новую строку\n2)Вывод записей\n3)Поиск по критериям\n4)сортировка по критериям\n5)выход\n");
		scanf("%d", &k);
		switch (k) {
		case 1:
			chislo_zapis = new_zapisi(ptr_zapis, chislo_zapis);
			break;
		case 2:
			pechat(ptr_zapis, chislo_zapis);
			break;
		case 3:
			poisk(ptr_zapis, chislo_zapis);
			break;
		case 4:

		case 5:
			h = 0;
			break;
		}

	}
}
