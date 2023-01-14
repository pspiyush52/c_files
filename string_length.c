#include<stdio.h>
#include<string.h>
int str_len(char in_string[]);

int main(void)
{
    char user_input[100];
    printf("Enter a string whose length you want to find out: ");
    gets(user_input);
    printf("\n\n\tLength: %d\n\n", str_len(user_input));
    getchar();
}




int str_len(char in_string[])
{
    //initializing an integer variable to count the length of the string,
    int i = 0;

    //the following while loop will run until it encounters the NULL character i.e., until it reaches
    //the end of the string,
    while (in_string[i] != '\0')
    {
        //incrementing the counter variable for each iteration of the while loop to keep count of the
        //number of times the loop runs
        i++;
    }

    //finally returning the count of the total number of times the loop ran to give the length of the
    //string,
    //note that the counting began from zero so the count of number of times the loop ran will have to
    //be length - 1 but the correct value is returned as the NULL character at the end of the string is
    //also counted and hence we get the correct value of length and not length - 1.
    return i;
}
