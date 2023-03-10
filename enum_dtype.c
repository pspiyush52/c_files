#include <stdio.h>

void showday(const char*);

typedef enum days {
    sun = 1,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat
} days;

int main(void)
{
    printf("Days: ");
    for (days d = sun; d <= sat; d++)
        printf("\t%d", d);
    
    days d;
    printf("\nEnter the day number: ");
    scanf("%d", &d);
    switch (d)
    {
        case sun: showday("Sunday");
                  break;
        case mon: showday("Monday");
                  break;
        case tue: showday("Tuesday");
                  break;
        case wed: showday("Wednesday");
                  break;
        case thu: showday("Thursday");
                  break;
        case fri: showday("Friday");
                  break;
        case sat: showday("Saturday");
                  break;
        default : printf("Not a day.");
    }
}

void showday(const char* day)
{
    printf("It is %s", day);
}
