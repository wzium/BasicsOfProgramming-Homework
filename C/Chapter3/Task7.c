//
// Create a program which calculates the amount of days from the beginning of the year to the selected day (use switch).
//
#include <stdio.h>

int main()
{
    int month;
    int days_in_month;
    int day;
    int number_of_days;
    int result;
    printf("Enter month");
    scanf("%i", &month);
    printf("Enter day");
    scanf("%i", &day);
    for (days_in_month = 1; days_in_month < month; ++days_in_month)
    {
        switch(days_in_month)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                number_of_days = 31;
                break;
            case 2:
                number_of_days = 29;
                break;
            case 4: case 6: case 9: case 11:
                number_of_days = 30;
                break;
        }
        result += number_of_days;
    }
    for (number_of_days = 1; number_of_days <= day; ++number_of_days) //Use <= or < if you want the result to be with selected day or without.
    {
        result++;
    }
    printf("Result equals %i", result);
    return 0;
}
