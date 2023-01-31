#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// disables structure padding
#pragma pack(1)

typedef struct student {
    int roll;
    char* (*show)(struct student);
    char fname[50];
    char mname[50];
    char name[50];
} student;

char* display(student s);
student get_student(const char*, int, const char*, const char*);

int main(void)
{
    student niharika = get_student("Niharika Joshi", 1, "Sashi Chandra Joshi", "Deepa Devi Joshi");
    // displatying the details using the function pointer which is a member of the
    // structure student
    (*niharika.show)(niharika);
    printf("\n");

    // displaying the details directly by using the display function
    display(niharika);
    printf("\n%d\n", sizeof(niharika));
}

// constructor (kind of)
student get_student(const char* name, int roll, const char* fname, const char* mname)
{
    student s;
    strcpy(s.name, name);
    s.roll = roll;
    strcpy(s.fname, fname);
    strcpy(s.mname, mname);
    s.show = &display;
    return s;
}

// to display the student details in a formatted string
char* display(student s)
{
    printf("{\"student\": \"%s\", \"roll\": \"%d\", \"father's name\": \"%s\", \"mother's name\": \"%s\"}", s.name, s.roll, s.fname, s.mname);
}
