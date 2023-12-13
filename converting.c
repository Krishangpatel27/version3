// Include the header file
#include "converting.h"

// Define a compiler flag to disable warnings related to certain functions
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80  // Define a constant value for the maximum size of a string buffer

void converting(void)
{
    // Version 1 - Demonstrate conversion of strings to integers using atoi()
    printf("*** Start of Converting Strings to int Demo ***\n");

    // Declare variables
    char intString[BUFFER_SIZE];  // Define a character array to hold the string input from the user
    int intNumber;  // Define an integer variable to hold the converted numeric value

    do {
        printf("Type an integer numeric string (type 'q' to quit):\n");
        // Read a string from standard input and store it in the buffer
        fgets(intString, BUFFER_SIZE, stdin);
        intString[strlen(intString) - 1] = '\0';  // Remove the newline character at the end of the string

        // Convert the string to an integer using the atoi() function
        if (strcmp(intString, "q") != 0)
        {
            intNumber = atoi(intString); // Convert the string to an integer
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0);  // Continue looping until the user inputs "q"

    printf("*** End of Converting Strings to int Demo ***\n\n");
}



/* Version 2 */


printf("Type the double numeric string (g - to quit): \n");

// Read input from user
fgets(doubleString, BUFFER_SIZE, stdin);
doubleString[strlen(doubleString) - 1] = '\0';  // Remove the newline character

// Check if the user wants to quit (input "g")
if (strcmp(doubleString, "g") != 0) {
    // Convert the input string to a double
    doubleNumber = atof(doubleString);
    printf("Converted number is %.8f\n", doubleNumber);

    // Loop until the user wants to quit
    while (strcmp(doubleString, "g") != 0) {
        // Read new input
        fgets(doubleString, BUFFER_SIZE, stdin);
        doubleString[strlen(doubleString) - 1] = '\0';  // Remove the newline character

        // Convert the new input string to a double and print it
        if (strcmp(doubleString, "g") != 0) {
            doubleNumber = atof(doubleString);
            printf("Converted number is %.8f\n", doubleNumber);
        }
    }
}

printf("*** End of Converting Strings to double Demo ***\n\n");

return 0;
}

/* Version 3 */

printf("*** Start of Converting Strings to long Demo ***\n");

 // Define constants and variables
 #define BUFFER_SIZE 128
 char longString[BUFFER_SIZE];   // Buffer to store user input as string
 long longNumber;                // Variable to store the converted long

 // Prompt the user for input
 printf("Type the long numeric string (q - to quit): \n");

 // Read input from user
 fgets(longString, BUFFER_SIZE, stdin);
 longString[strlen(longString) - 1] = '\0';  // Remove the newline character

 // Check if the user wants to quit (input "q")
 if (strcmp(longString, "q") != 0) {
     // Convert the input string to a long
     longNumber = atol(longString);
     printf("Converted number is %ld\n", longNumber);

     // Loop until the user wants to quit
     while (strcmp(longString, "q") != 0) {
         // Read new input
         fgets(longString, BUFFER_SIZE, stdin);
         longString[strlen(longString) - 1] = '\0';  // Remove the newline character

         // Convert the new input string to a long and print it
         if (strcmp(longString, "q") != 0) {
             longNumber = atol(longString);
             printf("Converted number is %ld\n", longNumber);
         }
     }
 }

 printf("*** End of Converting Strings to long Demo ***\n\n");

 return 0;
}

