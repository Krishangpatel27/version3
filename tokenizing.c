#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

void tokenizing()
{
	/* Version 1 */
	printf("*** Start of Tokenizing Words Demo ***\n");

	// Declare variables
	char words[BUFFER_SIZE];
	char* nextWord = NULL;
	int wordsCounter;

	do
	{
		// Prompt the user to input a few words separated by space (type 'q' to quit)
		printf("Type a few words separated by space (type 'q' to quit):\n");
		fgets(words, BUFFER_SIZE, stdin);
		words[strlen(words) - 1] = '\0'; // Remove the newline character from the input

		if (strcmp(words, "q") != 0)
		{
			// Tokenize the input string using strtok
			nextWord = strtok(words, " "); // The delimiters are spaces (' ')
			wordsCounter = 1;

			// Process each token (word) until there are no more tokens
			while (nextWord)
			{
				// Print the current word along with its index
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " "); // Move to the next word
			}
		}
	} while (strcmp(words, "q") != 0);

	printf("*** End of Tokenizing Words Demo ***\n\n");
}


/* Version 2 */

    printf("*** Start of Tokenizing Phrases Demo ***\n");

    // Define constants and variables
    #define BUFFER_SIZE 256
    char phrases[BUFFER_SIZE];       // Buffer to store user input as phrases
    char* nextPhrase = NULL;         // Pointer to the next phrase token
    int phrasesCounter;              // Counter to keep track of phrase numbers

    // Prompt the user for input
    do {
        printf("Type a few phrases separated by comma (g - to quit): ");
        fgets(phrases, BUFFER_SIZE, stdin);
        phrases[strlen(phrases) - 1] = '\0';  // Remove the newline character

        // Check if the user wants to quit (input "g")
        if (strcmp(phrases, "g") != 0) {
            // Tokenize the input into phrases using strtok
            nextPhrase = strtok(phrases, ", ");
            phrasesCounter = 1;

            // Loop through the tokens and print them as phrases
            while (nextPhrase) {
                printf("Phrase #%d is '%s'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ", ");
            }
        }
    } while (strcmp(phrases, "g") != 0);

    printf("*** End of Tokenizing Phrases Demo ***\n\n");

    return 0;
}



/* Version 3 */


    printf("*** Start of Tokenizing Sentences Demo ***\n");

    // Define constants and variables
    #define BUFFER_SIZE 512
    char sentences[BUFFER_SIZE];    // Buffer to store user input as sentences
    char *nextSentence = NULL;      // Pointer to track the next sentence during tokenization
    int sentencesCounter = 0;       // Counter to keep track of the sentence number

    printf("Type a few sentences separated by dot (q - to quit): \n");

    // Read input from user
    fgets(sentences, BUFFER_SIZE, stdin);
    sentences[strlen(sentences) - 1] = '\0';  // Remove the newline character

    // Check if the user wants to quit (input "q")
    if (strcmp(sentences, "q") != 0) {
        // Tokenize the input into sentences using the delimiter '.'
        nextSentence = strtok(sentences, ".");
        sentencesCounter = 1;

        // Loop through each tokenized sentence and print its number and content
        while (nextSentence) {
            printf("Sentence #%d is '%s'\n", sentencesCounter++, nextSentence);
            nextSentence = strtok(NULL, ".");
        }
    }

    printf("*** End of Tokenizing Sentences Demo ***\n\n");

    return 0;
}


