#include <stdio.h>
#include <time.h>
int main(void)
{
    char t[50];
    time_t now = time(0);
    struct tm* timeinfo;
    timeinfo = localtime(&now);
    strftime(t, sizeof(t), "Date: %A, %b %d %Y\nTime: %H:%M:%S", timeinfo);
    printf("\n%s\n", t);
}
