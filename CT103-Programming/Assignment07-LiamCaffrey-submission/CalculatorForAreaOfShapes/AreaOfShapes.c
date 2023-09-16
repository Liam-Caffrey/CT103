#include <stdio.h>
/*
Name: Liam Caffrey
Student Id: 21378316
Date: 09-11-21
*/

#define pi 3.14159

void main() {

	int counter = 0; //this int is used for the counter for the "do-while" loop
	char shape[12] = "temp"; //this is what is used to read the string. Temporary one present at the moment

	double shape_width = 0; //this is used to scan in a shape's width
	double shape_high = 0; //this is used to scan in a shape's height
	double shape_area = 0; //this is used to calculate a shape's area
	double shape_width2 = 0; //this is used to scan in a shape's 2nd width (only used for trapezium)


	printf("Calculator For Area of shapes;\n");
	do { //"do-while" loop starts
		puts("\nWhat shape would you like to get the area of triangle, rectangle, circle, or trapezium.\n Please Enter shape name below or enter 'Done' to stop:");
		scanf_s("%s", shape, 12); //here the string is scanned

		if (strcmp(shape, "triangle") == 0) { // this section scans the values for the triangle and calculates its area
			printf("\nshape chosen:");
			puts(shape); //string is printed 
			printf("Please enter the length of the base:");
			scanf_s("%lf", &shape_width); //triangle base scanned in
			printf("Please enter the height:");
			scanf_s("%lf", &shape_high); //triangle height scanned in
			shape_area = ((shape_width * shape_high) / 2); //formula used and area worked out
			printf("The area of the triangle is: %.2lf \n", shape_area); //area of triangle displayed
		}


		else if (strcmp(shape, "rectangle") == 0) { // this section scans the values for the rectangle and calculates its area
			printf("\nshape chosen:");
			puts(shape); //string is printed 
			printf("Please enter the width:");
			scanf_s("%lf", &shape_width); //rectangle width scanned in
			printf("Please enter the height:");
			scanf_s("%lf", &shape_high); //rectangle height scanned in
			shape_area = (shape_high * shape_width); //formula used and area worked out
			printf("The area of the rectangle is: %.2lf\n", shape_area); //area of rectangle displayed
		}


		else if (strcmp(shape, "circle") == 0) { // this section scans the values for the circle and calculates its area
			printf("\nshape chosen:");
			puts(shape); //string is printed
			printf("Please enter the radius of the circle:");
			scanf_s("%lf", &shape_width); //circle radius scanned in
			shape_area = (pi * shape_width * shape_width);
			printf("The area of the circle is: %.2lf\n", shape_area); //area of circle displayed
		}

		else if (strcmp(shape, "trapezium") == 0) {// this section scans the values for the trapezium and calculates its area
			printf("\nshape chosen:");
			puts(shape); //string is printed
			printf("Please enter the top width of the trapezium:");
			scanf_s("%lf", &shape_width); //trapezium top width scanned in
			printf("Please enter the bottom width of the trapezium:");
			scanf_s("%lf", &shape_width2); //trapezium bottom width scanned in
			printf("Please enter the height of the trapezium:");
			scanf_s("%lf", &shape_high); //trapezium height scanned in
			shape_area = (((shape_width + shape_width2) / 2) * shape_high);
			printf("The area of the trapezium is: %.2lf\n", shape_area); //area of trapezium displayed
		}
		else if (strcmp(shape, "Done") == 0) { counter++; } //statement used to end "do-while" loop
	} while (counter == 0);
}