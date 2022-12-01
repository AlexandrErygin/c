#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct name
{
	char name[40];
	char surname[40];
	char fatherhood[40];
};
typedef struct name Name;

struct browser
{
	char name_of_browser[40];
	int time_in_browser;
};
typedef struct browser Browser;

struct Ip
{
	char ip[40];
};

void put_name(Name z)
{
	printf("%s %s %s\n", z.name, z.surname, z.fatherhood);
}

void put_browser(Browser z)
{
	printf("%s %i\n", z.name_of_browser, z.time_in_browser);
}

Name ravno(char a[], char b[], char c[])
{
	Name A;
	for (int j = 0; j < strlen(a); j++)
	{
		A.name[j] = a[j];
	}
	for (int j = 0; j < strlen(b); j++)
	{
		A.surname[j] = b[j];
	}
	for (int j = 0; j < strlen(c); j++)
	{
		A.fatherhood[j] = c[j];
	}
	return A;
}
Browser imya(char a[], int b)
{
	Browser A;
	for (int j = 0; j < strlen(a); j++)
	{
		A.name_of_browser[j] = a[j];
	}
	A.time_in_browser = b;
	return A;
}


void main()
{
	system("chcp 1251");
	char name[40];
	char surname[40];
	char fatherhood[40];
	char name_of_browser[40];
	int time_in_browser, p, h = 1;
	char ip[40];
	while (h)
	{
		printf("Выберите операцию, которую вы хотите выполнить\n");
		printf("1) Ввод значений\n");
		printf("2) Напечатать поля структур\n");
		printf("3) Закончить\n");
		scanf("%i", &p);
		switch (p)
		{
		case 1:
			printf("Введите Ваше ФИО\n");
			scanf("%s %s %s", &name, &surname, &fatherhood);
			printf("Введите название вашего браузера и время его использования(секунд)\n");
			scanf("%s %i", &name_of_browser, &time_in_browser);
			printf("Введите Ваш ip\n");
			scanf("%s", &ip);
			printf("\n");
			break;
		case 2:
			printf(" _________________________________________________________");
			printf("\n|Ваше полное имя:");
			put_name(ravno(name, surname, fatherhood));
			printf(" _________________________________________________________\n");
			printf("|Ваш браузер и время нахождения в нём в секундах: ");
			put_browser(imya(name_of_browser, time_in_browser));
			printf(" _________________________________________________________\n");
			printf("|Ваш IP:");
			printf("%s\n", ip);
			printf(" _________________________________________________________\n\n");
			break;
		case 3:
			h = 0;
			break;
		}
	}
}