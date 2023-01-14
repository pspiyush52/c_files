#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_score(char word[]);

// Each letter of the alphabet,
char ALPHABETS[] = "abcdefghijklmnopqrstuvwxyz";

// Points assigned to each letter of the alphabet,
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10, 0};

int main(void)
{
    // Get input words from both players
    char word1[50], word2[50];
    printf("Word 1: ");
    scanf("%s", word1);
    printf("Word 2: ");
    scanf("%s", word2);


    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    getchar();
}

int compute_score(char word[])
{
    // TODO: Compute and return score for string
    int score = 0, pos = 26;
    // variable to store the current character we are on while iterating through the word,
    char current_char;

    // loop to iterate over each character of the word parameter,
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        // storing the current character in the current_char variable after converting it to
        // lower case thus, effectively taking case-sensitivity out of the equation here,
        current_char = tolower(word[i]);

        // Setting the position variable to 26 in case the character is not found in the string.
        // This will enable us to add nothing or 0 to the score if the character is not in a-z,
        pos = 26;

        // loop to iterate over the fixed ALPHABETS array and find out the position of the current
        // character in the ALPHABETS array,
        for (int j = 0; j < 26; j++)
        {
            if (current_char == ALPHABETS[j])
            {
                pos = j;
                break;
            }
        }

        // adding the value of points at the position as calculated in the loop above to the final
        // variable,
        score += POINTS[pos];
    }
    return score;
}
