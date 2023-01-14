#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(char text[]);
int count_words(char text[]);
int count_sentences(char text[]);

// Coleman-Liau Index,
// index = 0.0588 * L - 0.296 * S - 15.8
// where L is the average number of letters per 100 words in the text, and
// S is the average number of sentences per 100 words in the text.


int main(void)
{
    char main_text[1000];
    printf("Text: ");
    gets(main_text);

    float L, S, cl_index;
    float letters, words, sentences;
    int grade;

    letters = count_letters(main_text);
    words = count_words(main_text);
    sentences = count_sentences(main_text);

    // calculating the average number of letter per 100 words in the text,
    L = 100 * letters / words;

    // calculating the average number of sentences per 100 words in the text,
    S = 100 * sentences / words;

    // calculating the Coleman-Liau Index,
    cl_index = (0.0588 * L) - (0.296 * S) - 15.8;

    grade = round(cl_index);

    if (cl_index < 1.0)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
}


int count_letters(char text[])
{
    int i = 0, count = 0;
    char ch = text[0];

    // loop to iterate through the whole text string until it reaches the null character,
    while (ch != '\0')
    {
        // converting the character to lowercase to eliminate case-sensitivity,
        ch = tolower(text[i]);

        // checking if the character is an alphabet or not, if it is then increment the
        // count variable by 1,
        if (ch >= 'a' && ch <= 'z')
        {
            count++;
        }
        i++;
    }

    return count;
}


int count_words(char text[])
{
    int count = 0, i = 0, n = strlen(text);

    // loop to iterate throught the text string using index values,
    while (i < n)
    {
        // jumping over the indices with spaces,
        while ((text[i] != ' ') && (i < n))
        {
            i++;
        }

        // checking if the spaces are repeated or not and incrementing count only
        // if there aren't multiple spaces,
        if (text[i + 1] != ' ' || text[i + 1] == '\0')
        {
            count++;
        }
        i++;
    }

    return count;
}


int count_sentences(char text[])
{
    int count = 0;

    // loop to count the number of periods('.'), question marks('?') or exclamation marks('!'),
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            count++;
        }
    }

    return count;
}
