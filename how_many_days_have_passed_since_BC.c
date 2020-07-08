/*
Write a C program which reads the date formatted dd/mm/yyyy and then it prints the total number of
days since 00/00/0000.
Note : You can assume that every month has 30 days so every year has a 360 days.
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
	puts("Type in a date form of dd/mm/yyyy");
	char date[20];
	gets(date);
	
	char days_str[5];
	char months_str[5];
	char years_str[10];
	
	strncpy(days_str,date,2);
	strncpy(months_str,date + 3,2);
	strncpy(years_str,date + 6,4);
	
	days_str[2] = '\0';
	months_str[2] = '\0';
	years_str[4] = '\0';
	
	int days, months, years;
	days = strtol(days_str,NULL,10);
	months = strtol(months_str,NULL,10);
	years = strtol(years_str,NULL,10);
	
	int result = days + (months-1) * 30 + years * 360;
	printf("The result is : %d", result);

	
}
