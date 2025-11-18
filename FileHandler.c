#include <stdio.h>
#include <FileHandler.h>
#include <Gradebook.h>

void save(){
	Student[] stuArray = getGradebook();					// Get students from gradebook
	int size = getSize();									// Get size of gradebook
	Student *buffer = malloc(sizeOf(Student) * size); 		// Only allocate needed space

	for (int i = 0; i < size; i++){							// For each element...
		buffer[i] = stuArray[i];							// Copy data into buffer

	}

	FILE *gradebookFile = fopen("Gradebook.save","w");		// Create/open gradebook file
	fwrite(&size, sizeOf(int), 1, gradebookFile);			// Write size to file
	fwrite(buffer, sizeOf(Student), size, gradebookFile);	// Write students to file

	fclose(gradebookFile);

}

void load(){
	FILE *gradebookFile = fopen("Gradebook.save","r");
	if (gradebookFile == NULL)
		return;

	int size;
	Student[size] stuArray;
	fread(&size, sizeOf(int), 1, gradebookFile);			// Get size from gradebookFile
	fread(&stuArray, sizeOf(Student), size, gradebookFile);

	setGradebook(stuArray);

	fclose(gradebookFile);

}