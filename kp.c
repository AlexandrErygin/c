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
		printf("�������� ��������, ������� �� ������ ���������\n");
		printf("1) ���� ��������\n");
		printf("2) ���������� ���� ��������\n");
		printf("3) ���������\n");
		scanf("%i", &p);
		switch (p)
		{
		case 1:
			printf("������� ���� ���\n");
			scanf("%s %s %s", &name, &surname, &fatherhood);
			printf("������� �������� ������ �������� � ����� ��� �������������(������)\n");
			scanf("%s %i", &name_of_browser, &time_in_browser);
			printf("������� ��� ip\n");
			scanf("%s", &ip);
			printf("\n");
			break;
		case 2:
			printf(" _________________________________________________________");
			printf("\n|���� ������ ���:");
			put_name(ravno(name, surname, fatherhood));
			printf(" _________________________________________________________\n");
			printf("|��� ������� � ����� ���������� � �� � ��������: ");
			put_browser(imya(name_of_browser, time_in_browser));
			printf(" _________________________________________________________\n");
			printf("|��� IP:");
			printf("%s\n", ip);
			printf(" _________________________________________________________\n\n");
			break;
		case 3:
			h = 0;
			break;
		}
	}
}