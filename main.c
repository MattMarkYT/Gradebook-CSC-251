#include <stdio.h>
#include <stdlib.h>
#include "Gradebook.h"
#include "FileHandler.h"
#include "Sorter.h"
#include "Stats.h"

void printMenu(void);
/* both above and below are void bc they take no parameters*/
int main(void) {
    int usersChoice = -1;

//	Load();   /* loads the data */

	while (usersChoice != 0) {

        printMenu();
        printf("Choose an option: ");

        /* user input gets taken here */
        if (scanf("%d", &usersChoice) != 1) {

            /* doesnt take an invalid input */
            int invalidinput;
            while ((invalidinput = getchar()) != '\n') {
                
            }

            printf("Invalid input.\n\n");
            usersChoice = -1;
            continue;
        }

        switch (usersChoice) {

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
                printf("Students have been sorted.\n");
                break;

            case 7: {
                computeStats();
                break;
            }

            case 8:
                save();
                printf("Gradebook has been saved.\n");
                break;

            case 0:
                save();
                printf("Goodbye\n");
                break;

            default:
                printf("Invalid option.\n");
                break;
        }
        printf("\n");
    }
    return 0;
}

void printMenu(void) {
    printf("Gradebook Menu\n");
    printf("1. Add Student\n");
    printf("2. List Students\n");
    printf("3. Find Student\n");
    printf("4. Update Student\n");
    printf("5. Delete Student\n");
    printf("6. Sort Students\n");
    printf("7. Show Statistics\n");
    printf("8. Save\n");
    printf("0. Exit\n");
}
