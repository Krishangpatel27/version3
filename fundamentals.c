// this is the source code for the Fundamentals module
#define _CRT_SECURE_NO_WARNINGS
// Declare Macros
#define BUFFER_SIZE		80
#define NUM_INPUT_SIZE  10
// Include the header file
#include "fundamentals.h"

void fundamentals(void) 
{
	/* Version 1 */

	// Displaying a message to indicate the start of the Indexing Strings Demo
	printf("*** Commencing Indexing Strings Demo ***\n");

	// Declaration of Variables
	char buffer1[BUFFER_SIZE];
	char numInput[NUM_INPUT_SIZE];
	size_t position;

	// Using a do-while loop to repeatedly prompt the user for input until they decide to quit by typing "q"
	do {
		// Prompting the user to input a non-empty string
		printf("Please enter a non-empty string (type 'q' to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);
		// Removing the newline character at the end of the string
		buffer1[strlen(buffer1) - 1] = '\0';

		// Checking if the user entered "q" to quit
		if (strcmp(buffer1, "q") != 0) {
			// Requesting the user to specify a position within the string
			printf("Enter the position of the character you wish to find:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			// Removing the newline character at the end of the string
			numInput[strlen(numInput) - 1] = '\0';
			// Converting the position input to an integer
			position = atoi(numInput);

			// Validating if the position input is within the permissible range
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;
				printf("Apologies, the position provided exceeds the available characters. It has been adjusted to the maximum possible.\n");
			}

			// Printing the character found at the specified position within the string
			printf("The character at position %d is \'%c\'\n", (int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0);

	// Displaying a message to indicate the conclusion of the Indexing Strings Demo
	printf("*** End of Indexing Strings Demo ***\n\n");
}

/* Version 2 */
printf("*** Start of Measuring Strings Demo ***\n");

    #define BUFFER_SIZE 128
    char buffer2[BUFFER_SIZE];  // Buffer to store user input

    do {
        printf("Type a string (g - to quit): \n");
        fgets(buffer2, BUFFER_SIZE, stdin);  // Read input from user
        buffer2[strlen(buffer2) - 1] = '\0';  // Remove the newline character

        // Check if the user wants to quit (input "q")
        if (strcmp(buffer2, "q") != 0) {
            // Print the length of the entered string
            printf("The length of '%s' is %d characters\n", buffer2, (int)strlen(buffer2));
        }
    } while (strcmp(buffer2, "g") != 0);  // Continue the loop until the user wants to quit

    printf("*** End of Measuring Strings Demo ***\n\n");

    return 0;
}


/* Version 3 */

    printf("*** Start of Copying Strings Demo ***\n");

    // Define constants and variables
    #define BUFFER_SIZE 128
    char destination[BUFFER_SIZE];  // Array to store the copied string
    char source[BUFFER_SIZE];       // Array to store the source string

    do {
        destination[0] = '\0';  // Reset destination string to empty
        printf("Destination string is reset to empty\n");
        printf("Type the source string (g - to quit): \n");

        // Read input from user
        fgets(source, BUFFER_SIZE, stdin);
        source[strlen(source) - 1] = '\0';  // Remove the newline character

        if (strcmp(source, "g") != 0) {
            strcpy(destination, source);  // Copy the source string to the destination
            printf("New destination string is '%s'\n", destination);
        }
    } while (strcmp(source, "g") != 0);

    printf("*** End of Copying Strings Demo ***\n\n");

    return 0;
}


