#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_alpha(char key[]);
int check_rep(char key[]);

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        if (strlen(argv[1]) != 26)
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
        else
        {
            char* KEY = argv[1];
            char ALPHABETS[] = "abcdefghijklmnopqrstuvwxyz";

            if (!(check_alpha(KEY) && check_rep(KEY)))
            {
                return 1;
            }

            int j = 0;
            char current_char, encrypted_char;

            char plain_text[100];
            printf("plaintext: ");
            gets(plain_text);
            printf("ciphertext: ");

            for (int i = 0, n = strlen(plain_text); i < n; i++)
            {
                current_char = tolower(plain_text[i]);
                j = 0;

                if (current_char >= 'a' && current_char <= 'z')
                {
                    while (tolower(ALPHABETS[j]) != current_char)
                    {
                        j++;
                    }
                }
                else
                {
                    j = -1;
                }

                if (j != -1)
                {
                    if (islower(plain_text[i]))
                    {
                        encrypted_char = tolower(KEY[j]);
                    }
                    else
                    {
                        encrypted_char = toupper(KEY[j]);
                    }
                    printf("%c", encrypted_char);
                }
                else
                {
                    printf("%c", current_char);
                }
            }
            printf("\n");
            return 0;
        }
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
}


int check_alpha(char* key)
{
    char ch;
    int flag = 1;

    for (int i = 0, n = strlen(key); i < n; i++)
    {
        ch = tolower(key[i]);
        if (ch < 'a' || ch > 'z')
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int check_rep(char key[])
{
    int i = 0, n = strlen(key), flag = 1;
    char cur;

    while (i < n)
    {
        cur = tolower(key[i]);
        for (int j = i + 1; j < n; j++)
        {
            if (cur == tolower(key[j]))
            {
                flag = 0;
            }
        }
        i++;
    }

    return flag;
}
