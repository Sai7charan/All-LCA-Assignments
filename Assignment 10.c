#include <stdio.h>
#include <time.h>

int isLeap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

int main()
{
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char *names[12] = {"January", "February", "March", "April",
                             "May", "June", "July", "August",
                             "September", "October", "November", "December"};
    int year, month, day, i, start;
    struct tm t = {0};

    printf("Enter year: ");
    if (scanf("%d", &year) != 1 || year < 1)
    {
        printf("Invalid input\n");
        return 0;
    }

    if (isLeap(year))
        days[1] = 29;

    /* find the weekday of 1 January using time.h */
    t.tm_year = year - 1900;    /* years since 1900 */
    t.tm_mon  = 0;              /* January */
    t.tm_mday = 1;              /* 1st */
    t.tm_hour = 12;             /* noon, avoids daylight saving edge cases */

    if (mktime(&t) == -1)
    {
        printf("Year not supported on this system\n");
        return 0;
    }
    start = t.tm_wday;          /* 0 = Sunday ... 6 = Saturday */

    for (month = 0; month < 12; month++)
    {
        printf("\n\n   %s %d\n", names[month], year);
        printf("Su Mo Tu We Th Fr Sa\n");

        for (i = 0; i < start; i++)
            printf("   ");

        for (day = 1; day <= days[month]; day++)
        {
            printf("%2d ", day);
            if ((start + day) % 7 == 0)
                printf("\n");
        }

        start = (start + days[month]) % 7;
    }
    printf("\n");
    return 0;
}
