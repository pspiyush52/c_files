#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("cls");
    FILE* fp = fopen("ab.txt", "r");
    char name[50];
    int age, prev, next;
    char gender;
    // fprintf(fp, "Name: %s\nAge: %d\nGender: %c\n", name, age, gender);
    printf("Name, Age, Gender\n");
    while (1)
    {
        prev = ftell(fp);
        fscanf(fp, "Name: %s\nAge: %d\nGender: %c\n", name, &age, &gender);
        next = ftell(fp);
        if (prev == next)
            break;
        printf("%s, %d, %c\n", name, age, gender);
    }
    fclose(fp);
}