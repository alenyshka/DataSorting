//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <string.h>
//#define N 10
//struct data
//{
//	int number[N];
//	int mounce[N];
//	int year[N];
//};
//int main()
//{
//	int i = 0;
//	struct data str[N];
//	for (int i = 0; i < N; i++)
//	{
//		printf("Enter number[%d]", i);
//		scanf_s("%d", &str[i].number);
//		if (!str[i].number )
//		{
//			printf("Incorrected input. Please, try again");
//			_getch();
//			return 0;
//		}
//
//		if (*str[i].number <= 0 || *str[i].number > 31)
//		{
//			printf("Incorrected input. Please, try again");
//			_getch();
//			return 0;
//		}
//		printf(" Enter mounce[%d]", i);
//		scanf_s("%d", &str[i].mounce);
//		if (!str[i].mounce)
//		{
//			printf("Incorrected input. Please, try again");
//			_getch();
//			return 0;
//		}
//		if (*str[i].mounce <= 0 || *str[i].mounce > 12)
//		{
//			printf("Incorrected input. Please, try again");
//			_getch();
//			return 0;
//		}
//		printf("Enter year[%d]\n", i);
//		scanf_s("%d", &str[i].year);
//		if (!str[i].year)
//		{
//			printf("Incorrected input. Please, try again");
//			_getch();
//			return 0;
//		}
//		
//		
//		if (*str[i].year < 0)
//		{
//			printf("Incorrected input. Please, try again");
//			_getch();
//			return 0;
//		}
//	}
//	system("cls");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d", *str[i].number);
//		printf(". %d", *str[i].mounce);
//		printf(". %d\n", *str[i].year);
//	}
//	
//	//год с наименьшим номером
//	i = 0;
//	int min = 0;
//	min = *str[i].year;
//	for (i = 0; i < N; i++)
//	{
//		if (*str[i].year < min)
//			min = *str[i].year;
//	}
//	printf("Min year = %d\n", min);
//
//	//все весенние данные
//	for (i = 0; i < N; i++)
//	if (*str[i].mounce >= 3 && *str[i].mounce <= 5)
//	{
//		printf("Spring data : %d", *str[i].number);
//		printf(". %d", *str[i].mounce);
//		printf(". %d\n", *str[i].year);
//	}
//	         
//
//	//—амую позднюю дату
//
//
//	int L_Year = 0, L_Mounce = 0, L_Number = 0,  Index = 0, Count = 0, k = 0, Index_m = 0, j = 0;
//	int masI_Year[N], masI_Mounce[N];
//	i = 0;
//	L_Year = *str[i].year;
//	Index = i;
//	for (i = 0; i < N; i++)
//	{
//		if (L_Year <= *str[i].year)
//		{
//			L_Year = *str[i].year;
//			Index = i;
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		if (L_Year == *str[i].year)
//			Count++;
//	}
//	if (Count == 1)
//	{
//		L_Mounce = *str[Index].mounce;
//		L_Number = *str[Index].number;
//		printf("The later data %d. %d. %d", L_Number, L_Mounce, L_Year);
//	}
//	else if (Count > 1)//если много годов
//	{
//		for (i = 0; i < N; i++)
//		{
//			if (L_Year == *str[i].year)
//			{
//				masI_Year[k] = i;
//				k++;
//			}
//		}
//		k = 0;
//		Index_m = 0;
//		Count = 0;
//		L_Mounce = *str[k].mounce;
//		for (k = 0; k < N; k++)
//		{
//			if (L_Mounce < *str[k].mounce)
//			{
//				L_Mounce = *str[k].mounce;
//				Index_m = k;
//			}
//		}
//		
//		
//		for (k = 0; k < N; k++)
//		{
//			if (L_Mounce == *str[k].mounce)
//				Count++;
//		}
//		if (Count == 1)
//		{
//			L_Number = *str[Index_m].number;
//			printf("The later data %d. %d. %d", L_Number, L_Mounce, L_Year);
//		}
//		
//		else if (Count > 1)//если мес€цов много
//		{
//			k = 0;
//			j = 0;
//			for (k = 0; k < N; k++)
//			{
//				if (L_Mounce == *str[k].mounce)
//				{
//					masI_Mounce[j] = k;
//					j++;
//				}
//			}
//			j = 0;
//			L_Number = *str[j].number;
//			for (j = 0; j < N; j++)
//			{
//				if (L_Number < *str[j].number)
//					L_Number = *str[j].number;
//			}
//			printf("The later data %d. %d. %d", L_Number, L_Mounce, L_Year);
//		}
//	}
//	_getch();
//	return 0;
//}