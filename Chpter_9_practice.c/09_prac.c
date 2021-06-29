#include <stdio.h>
#include <string.h>

typedef struct storDate
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;

} date;

void display(date d)
{
    printf("The date is %d:%d:%d:%d:%d:%d\n", d.year, d.month, d.day, d.hour, d.minute, d.second);
}

int dateCmp(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.day > d2.day)
    {
        return 1;
    }
    if (d1.day < d2.day)
    {
        return -1;
    }
    if (d1.hour > d2.hour)
    {
        return 1;
    }
    if (d1.hour < d2.hour)
    {
        return -1;
    }
    if (d1.minute > d1.minute)
    {
        return 1;
    }
    if (d1.minute < d1.minute)
    {
        return -1;
    }
    if (d1.second > d2.second)
    {
        return 1;
    }
    if (d1.second < d2.second)
    {
        return -1;
    }
    return 0;
}
int main()
{
    date d1 = {2020, 10, 4, 12, 45, 34};
    date d2 = {2024, 12, 8, 5, 15, 65};
    display(d1);
    display(d2);
    int c = dateCmp(d1, d2);
    printf("Time comparison fuction returns: %d\n", c);

    return 0;
}