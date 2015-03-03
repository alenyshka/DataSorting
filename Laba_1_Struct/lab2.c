#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date
{
	int day;
	int month;
	int year;
	char str[10];
};

void wait_input()
{
	scanf("%*c%*c");
}

int main()
{
	int N = 0, i = 0;

	printf("Enter count of dates: ");
	if (!scanf("%d", &N) || N < 0)
	{
		printf("Incorrect input\n");
		//wait_input();
		getch();
		return 0;
	}

	struct date* dates = calloc(N, sizeof(struct date));
	if(! dates )
	{
		printf("Memory don't located\n");
		//wait_input();
		getch();
		return 0;
	}
	for (i = 0; i < N; i++)
	{
		printf("Enter day[%d]: ", i);
		scanf("%d", &dates[i].day);
		if (dates[i].day <= 0 || dates[i].day > 31)
		{
			printf("Incorrect input\n");
			//wait_input();
			getch();
			return 0;
		}
		printf("Enter month[%d]: ", i);
		scanf("%d", &dates[i].month);
		if (dates[i].month <= 0 || dates[i].month > 12)
		{
			printf("Incorrect input\n");
			//wait_input();
			getch();
			return 0;
		}
		printf("Enter year[%d]: ", i);
		scanf("%d", &dates[i].year);
		if (dates[i].year < 0)
		{
			printf("Incorrect input\n");
			//wait_input();
			getch();
			return 0;
		}
	}
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
		
	for (i = 0; i < N; i++)
	{
		printf("%d.%d.%d\n", dates[i].day, dates[i].month, dates[i].year);
		sprintf(dates[i].str, "%04d.%02d.%02d", dates[i].year, dates[i].month, dates[i].day);
	}
	i = 0;
	int min = 0;
	min = dates[i].year;
	for (i = 0; i < N; i++)
	{
		if (dates[i].year < min)
			min = dates[i].year;
	}
	printf("Min year = %d\n", min);
	for (i = 0; i < N; i++)
	if (dates[i].month >= 3 && dates[i].month <= 5)
	{
		printf("Spring data : %d.%d.%d\n", dates[i].day, dates[i].month, dates[i].year);
	}
	int max_i = 0;
	for (i = 1; i < N; i++)
	{
		if (strcmp(dates[i].str, dates[max_i].str) > 0)
		{
			max_i = i;
		}
	}
	printf("The later data %d.%d.%d\n", dates[max_i].day, dates[max_i].month, dates[max_i].year);
	//wait_input();
	getch();
	return 0;
}
