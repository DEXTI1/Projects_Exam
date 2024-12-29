#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1001];
    char *word;
    char words[100][20];
    int uniqueCount = 0;
    int wordCount = 0;

    printf("Enter a sentence (max 100 words): ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = 0;

    if (strlen(sentence) == 0) {
        printf("You didn't enter a valid sentence. Please try again.\n");
        return 0;
    }

    for (int i = 0; sentence[i]; i++) {
        if (!isalpha(sentence[i]) && !isspace(sentence[i])) {
            printf("Invalid input! Please enter only words (letters).\n");
            return 0;
        }
        sentence[i] = tolower(sentence[i]);
    }

    word = strtok(sentence, " ");
    while (word != NULL) {
        wordCount++;

        if (wordCount > 100) {
            printf("You have entered more than the maximum allowed 100 words. Please try again.\n");
            return 0;
        }

        int found = 0;
        for (int i = 0; i < uniqueCount; i++) {
            if (strcmp(words[i], word) == 0) {
                found = 1;
                break;
            }
        }

        if (!found) {
            strcpy(words[uniqueCount], word);
            uniqueCount++;
        }

        word = strtok(NULL, " ");
    }

    printf("This sentence has %d unique words.\n", uniqueCount);
    return 0;
}
