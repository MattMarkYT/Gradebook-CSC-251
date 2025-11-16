#include <stdio.h>
#include <stdlib.h>

#include "Gradebook.h"     // Student operations (add, list, find, update, delete)
#include "FileHandler.h"   // Save() and Load() for file persistence
#include "Sorter.h"        // sort() for student ordering
#include "Stats.h"         // ComputeStats() for grade statistics

// Menu helper functions
static void printMenu(void);
static int readInt(void);

int main(void) {
    int choice;

    // Load data from file at program start
    Load();

    while (1) {
        printMenu();
        printf("Choose an option: ");
        choice = readInt();

        switch (choice) {

            case 1:
                addStudent();
                break;

            case 2:
                listStudents();
                break;

            case 3:
                findStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                sort();
                printf("Students sorted.\n");
                break;

            case 7: {
                // Stats.h uses ComputeStats(Student), so we pass a placeholder
                Student placeholder;
                ComputeStats(placeholder);
                break;
            }

            case 8:
                Save();
                printf("Gradebook saved.\n");
                break;

            case 0:
                Save();
                printf("Goodbye!\n");
                return 0;

            default:
                printf("Invalid option. Try again.\n");
        }

        printf("\n"); // spacing for readability
    }

    return 0;
}

// -----------------------------------------------------------
// Display the menu options
// -----------------------------------------------------------
static void printMenu(void) {
    printf("=== Gradebook Menu ===\n");
    printf("1. Add Student\n");
    printf("2. List Students\n");
    printf("3. Find Student\n");
    printf("4. Update Student\n");
    printf("5. Delete Student\n");
    printf("6. Sort Students\n");
    printf("7. Show Statistics\n");
    printf("8. Save\n");
    printf("0. Exit\n");
    printf("======================\n");
}

// -----------------------------------------------------------
// Safely read an integer from the user
// -----------------------------------------------------------
static int readInt(void) {
    int value;
    int c;

    while (scanf("%d", &value) != 1) {
        printf("Please enter a valid number: ");

        // Clear invalid input
        while ((c = getchar()) != '\n' && c != EOF) { }
    }

    // Clear leftover characters after reading the integer
    while ((c = getchar()) != '\n' && c != EOF) { }

    return value;
}
