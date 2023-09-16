#include <string.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
/*
Name: Liam Caffrey
Student Id: 21378316
Date: 22-02-2022
*/


typedef struct {
	char make[20];
	char model[20];
	int year;
}car;

car garage[10];

void readCars(char myfilePath[], int numCars);
void displayGarage(int numCars);
int checkYear(int numCars, int year);

void main() {

	char myfilePath[] = "C:\\Users\\liam1\\Desktop\\week19labsheet.csv";
	readCars(myfilePath, 10);
	//displayGarage(10);
	//int ans = checkYear(10, 2016);
	//printf("There are %d cars with year %d in the garage.\n", ans, 2016);
}


void readCars(char myfilePath[], int numCars) {

	FILE* fptr;
	char line[200];
	char break1[] = " ";
	char break2[] = ",";
	fopen_s(&fptr, myfilePath, "r");
	int i = 1;
	
	if (fptr != NULL) {
		while (!feof(fptr)) {
			
			fgets(line, 200, fptr);
			char* next = NULL;
			char* first = strtok_s(line, break1, &next);
			printf("Car %d\n",i);
			printf("Car Make = %s\n",first);

			first = strtok_s(NULL, break2, &next);
			printf("Car Model = %s\n", first);

			first = strtok_s(NULL, break2, &next);
			printf("Car Year = %s", first);
			i++;
		}
		fclose(fptr);
	}
}

/*
void displayGarage(int numCars) {

}


int checkYear(int numCars, int year) {

}
*/