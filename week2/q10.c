#include <stdio.h>

int main() {
    int month, year, days;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12) {
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30; 
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29; 
        } else {
            days = 28;
        }
    } else {
        printf("Invalid month entered.\n");
        return 1; 
    }
    printf("Number of days in month %d of year %d: %d\n", month, year, days);

    return 0;
}

