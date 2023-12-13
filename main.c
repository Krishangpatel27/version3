// Including necessary headers
#define CRT_SECURE_NO_WARNINGS // Disabling certain security-related warnings during compilation
#include "fundamentals.h"      // Including the header for the 'fundamentals' module
#include "manipulating.h"      // Including the header for the 'manipulating' module
#include "converting.h"        // Including the header for the 'converting' module
#include "tokenizing.h"        // Including the header for the 'tokenizing' module

// Main function
int main(void) {
    char buff[101];  // Buffer to store user input
    
    do {
        // Display module options to the user
        printf("1 - Fundamentals\n");
        printf("2 - Manipulation\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        
        // Prompt the user for their choice
        printf("Which module to run? ");
        fgets(buff, 10, stdin);  // Read user input
        
        switch (buff[0]) {
            case '1':
                fundamentals();  // Call the 'fundamentals' function
                break;
            case '2':
                manipulating();  // Call the 'manipulating' function
                break;
            case '3':
                converting();    // Call the 'converting' function
                break;
            case '4':
                tokenizing();    // Call the 'tokenizing' function
                break;
        }
    } while (buff[0] != '0');  // Continue the loop until user chooses to exit
    
    return 0;  // Return 0 to indicate successful program execution
}

