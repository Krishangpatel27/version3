#define BUFFER_SIZE 10
#define _CRT_SECURE_NO_WARNINGS
// MANIPULATING HEADER
#include "manipulating.h"

/**
 * Concatenates two strings entered by the user via standard input.
 * Compares two strings provided by the user via standard input.
 */
#include "manipulating.h"

void manipulating(void) {
    /* Version 1 */
    printf("*** Welcome to the Concatenating Strings Demo ***\n");

    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];

    do {
        printf("Enter the 1st string (type 'q' to quit): \n");
        fgets(string1, BUFFER_SIZE, stdin); // Accept characters from the user and store them in string1

        string1[strlen(string1) - 1] = '\0'; // Append the null character to mark the end of the string

        if ((strcmp(string1, "q") != 0)) {
            printf("Enter the 2nd string: \n");
            fgets(string2, BUFFER_SIZE, stdin); // Accept characters from the user and store them in string2

            string2[strlen(string2) - 1] = '\0'; // Append the null character to mark the end of the string

            strcat(string1, string2); // Concatenate string1 and string2, and store the result in string1
            printf("Concatenated string is \'%s\'\n", string1);
        }
    } while (strcmp(string1, "q") != 0);

    printf("*** End of Concatenating Strings Demo ***\n\n");

    printf("*** Welcome to the Comparing Strings Demo ***\n");

    char compare1[BUFFER_SIZE];
    char compare2[BUFFER_SIZE];
    int result;

    do {
        printf("Enter the 1st string to compare (type 'q' to quit):\n");
        fgets(compare1, BUFFER_SIZE, stdin); // Accept characters from the user and store them in compare1

        compare1[strlen(compare1) - 1] = '\0'; // Append the null character to mark the end of the string

        if (strcmp(compare1, "q") != 0) {
            printf("Enter the 2nd string to compare:\n");
            fgets(compare2, BUFFER_SIZE, stdin); // Accept characters from the user and store them in compare2

            compare2[strlen(compare2) - 1] = '\0'; // Append the null character to mark the end of the string

            result = strcmp(compare1, compare2); // Compare the strings and store the result

            if (result < 0) {
                printf("\'%s\' is less than \'%s\'\n", compare1, compare2);
            }
            else if (result == 0) {
                printf("\'%s\' is equal to \'%s\'\n", compare1, compare2);
            }
            else {
                printf("\'%s\' is greater than \'%s\'\n", compare1, compare2);
            }
        }
    } while (strcmp(compare1, "q") != 0);

    printf("*** End of Comparing Strings Demo ***\n\n");
}



/* Version 2 */
printf("*** Start of Comparing Strings Demo ***\n");

    #define BUFFER_SIZE 128
    char compare1[BUFFER_SIZE];  // First string to compare
    char compare2[BUFFER_SIZE];  // Second string to compare
    int result;                  // Variable to store comparison result

    do {
        printf("Type the 1st string to compare (q - to quit): \n");
        gets(compare1, BUFFER_SIZE);
        compare1[strlen(compare1) - 1] = '\0';  // Remove the newline character

        if (strcmp(compare1, "q") != 0) {
            printf("Type the 2nd string to compare: \n");
            gets(compare2, BUFFER_SIZE);
            compare2[strlen(compare2) - 1] = '\0';  // Remove the newline character

            result = strcmp(compare1, compare2);

            if (result < 0) {
                printf("'%s' string is less than '%s'\n", compare1, compare2);
            } else if (result == 0) {
                printf("'%s' string is equal to '%s'\n", compare1, compare2);
            } else {
                printf("'%s' string is greater than '%s'\n", compare1, compare2);
            }
        }
    } while (strcmp(compare1, "q") != 0);

    printf("*** End of Comparing Strings Demo ***\n\n");

    return 0;
}

/* Version 3 */

    printf("*** Start of Searching Strings Demo ***\n");

    // Define constants and variables
    #define BUFFER_SIZE 128
    char haystack[BUFFER_SIZE];  // Buffer to store the input string
    char needle[BUFFER_SIZE];    // Buffer to store the search substring
    char *occurrence = NULL;     // Pointer to store the result of strstr function

    // Prompt the user for input
    printf("Type the string (g - to quit): \n");

    // Read input from user
    fgets(haystack, BUFFER_SIZE, stdin);
    haystack[strlen(haystack) - 1] = '\0';  // Remove the newline character

    // Check if the user wants to quit (input "g")
    if (strcmp(haystack, "g") != 0) {
        // Prompt the user for the substring to search
        printf("Type the substring: \n");
        
        // Read the search substring from the user
        fgets(needle, BUFFER_SIZE, stdin);
        needle[strlen(needle) - 1] = '\0';  // Remove the newline character
        
        // Search for the substring in the input string
        occurrence = strstr(haystack, needle);
        
        // Check if the substring was found
        if (occurrence) {
            printf("'%s' found at %d position\n", needle, (int)(occurrence - haystack));
        } else {
            printf("Not found\n");
        }
    }

    // Continue looping until the user wants to quit
    while (strcmp(haystack, "g") != 0);

    // End of the program
    printf("*** End of Searching Strings Demo ***\n\n");

    return 0;
}

