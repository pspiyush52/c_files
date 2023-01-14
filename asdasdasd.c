#include <stdio.h>
#include "my.h"

int main(void)
{
    char s[10];
    scanf("%s", s);
    int num = get_num(s);
    printf("%d", num);
}
