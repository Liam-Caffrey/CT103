#include <stdio.h>
#include <math.h>
#include <time.h>

/*
Date: 21-01-2022
Name: Liam Caffrey
Student Id: 21378316
*/



const char* order_format_in = "(%s, %s, %s, %s, %.2lf, %.2lf, %.2lf)";
typedef struct{ //this sets up the format and structure for the orders
char year[15], region[15], rep[15], item[15];
float units, unitCost, total;

}format;

//prototypes 
void writefile(FILE* fptr, format c);




void main(format c) {

	FILE* fptr;
	fopen_s(&fptr, "C:\\Users\\liam1\\Desktop\\SampleData.txt", "r");

	if (fptr == NULL) {
		puts("Error Opening File \n Exiting ........"); //this is just here to show if your file is working or not
		return;
	}
	else {
		printf("Everything works fine.\n\n");
		char c = fgetc(fptr);   
		while (c != EOF) {   //this is where file is first printed
			printf("%c", c);
			c = fgetc(fptr);
		}
	}
	fclose(fptr);
	printf_s("\n\n\n\n\n========================== PART 2 ==========================\n\n\n\n\n"); //line breaks

	
	printf_s("\n\n\n\n\n========================== PART 3 =========================="); //line breaks

	fopen_s(&fptr, "C:\\Users\\liam1\\Desktop\\SampleData.txt", "a"); 
	format neworder = { "25/01/2022","Galway", "Caffrey", "Pen", 16, 19.99, 319.84 }; //this is data being added to file
	format order2;
	writefile(fptr, neworder);
	fclose(fptr);


}



void writefile(FILE* fptr, format c){


	
	fprintf(fptr, "\n%s\t%s\t%s\t%s\t%.2lf\t%.2lf\t%.2lf", c.year, c.region, c.rep, c.item, c.units, c.unitCost, c.total);
	printf("\nItems added to .txt file");



}


