#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>

void scramble(char *s);

int main()
{
    /* code */

    srand(time(NULL));

    char original[100] = "alright";
    char scrambled[100];
    char answer[100];

    strcpy(scrambled, original);
    scramble(scrambled);

    bool game_over = false;

    do {

        printf("The scrambled word is: %s\n", scrambled);
        printf("What is the original word? ");
        scanf("%s", answer);

        if (strcmp(original, answer) == 0)
        {
            printf("You got it!\n");
            game_over = true;
        } else {
            printf("Try again!\n");
        }

    } while (!game_over);

    return 0;
}

void scramble(char *s)
{
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        s[i] = tolower(s[i]);
    }

    // If the string is empty or has only one character, there is no need to scramble it.
    if (length == 1) return;

    // Swap the first and last characters.
    if (length == 2)
    {
        char temp = s[0];
        s[0] = s[1];
        s[1] = temp;
        return;
    }

    // Create space to copy the original string.
    char original[length+1];

    // Copy the original string.
    strcpy(original, s);

    double diff = 0;
    bool same_start = false;
    bool same_end = false;
    int times_stuck = 0;

    do 
    {
        int i = 0;

        while (i < length)
        {
            // Two random positions in the string.
            int pos1 = rand() % length; 
            int pos2 = rand() % length;

            // If the positions are different, swap the characters at these positions.
            if (pos1 != pos2)
            {
                // Swap the characters at these positions.
                char temp = s[pos1];

                // Swap the characters at these positions.
                s[pos1] = s[pos2];
                s[pos2] = temp;

                // Increment the counter if the characters are different.
                i++;
            }
        }

        int differences = 0;

        for (int j = 0; j < length; j++)
        {
            // Increment the counter if the characters are different.
            if (original[j] != s[j])
            {
                // Increment the counter if the characters are different.
                differences++;
            }

            diff = (double)differences / length;
        }


        // Check if the first character is the same as the original first character.
        same_start = s[0] == original[0];
        same_end = s[length-1] == original[length-1];

        times_stuck++;

    } while (( (same_start && same_end) || diff < 0.5 ) && times_stuck < 100);
}