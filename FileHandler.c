#include <stdio.h>
#include <stdlib.h>
#include "FileHandler.h"
#include "Gradebook.h"

void save(){
	Student* stuArray = getGradebook();					// Get students from gradebook
	int size = getSize();									// Get size of gradebook
	Student *buffer = malloc(sizeof(Student) * size); 		// Only allocate needed space

	for (int i = 0; i < size; i++){							// For each element...
		buffer[i] = stuArray[i];							// Copy data into buffer

	}

	FILE *gradebookFile = fopen("Gradebook.save","w");		// Create/open gradebook file
	fwrite(&size, sizeof(int), 1, gradebookFile);			// Write size to file
	fwrite(buffer, sizeof(Student), size, gradebookFile);	// Write students to file

	free(buffer);

	fclose(gradebookFile);

}

void load(){
	FILE *gradebookFile = fopen("Gradebook.save","r");
	if (gradebookFile == NULL)
		return;

	int size;
	fread(&size, sizeof(int), 1, gradebookFile);			// Get size from gradebookFile
	Student stuArray[size];
	fread(&stuArray, sizeof(Student), size, gradebookFile);

	setGradebook(size, stuArray);

	fclose(gradebookFile);

}