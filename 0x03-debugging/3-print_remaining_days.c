#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
int days_in_feb = 28;
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
days_in_feb = 29;
}

if (month >= 2 && day > days_in_feb)
{
day++;
}

int day_of_year = convert_day(month, day);
if (month <= 0 || month > 12 || day <= 0 || day > 31)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else if (month == 2 && day == 29 && days_in_feb == 28)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else
{
printf("Day of the year: %d\n", day_of_year);
printf("Remaining days: %d\n", 365 + (days_in_feb == 29) - day_of_year);
}
}
