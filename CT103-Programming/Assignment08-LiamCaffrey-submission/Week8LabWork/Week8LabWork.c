#include <stdio.h>
/*
Name: Liam Caffrey
Student Id: 21378316
Date: 16-11-2021
*/

//these are the prototypes for the functions
float volofpool(float volH, float volW, float volL); //this one to get the volume of the pool  
void displaymasspool(float watervol1); //this one to get the mass of the pool
float numberofbarrels(float watervol2); //this one to get the number of barrels that can take water from the pool


void main() {

	float poolH = 0; //numbers used to scan in height, width and length
	float poolW = 0;
	float poolL = 0;

	puts("please enter the length, height, and width of the pool in that order.\nLet every answer be seperated by a space.\nPlease enter dimesions in m.");
	scanf_s("%f %f %f", &poolH, &poolW, &poolL); //where instructions are given and height, width and length are scanned in
	
	float move1 = volofpool(poolH, poolW, poolL); // this variable is used to move data from the function into the main where it is printed
	printf("Volume of pool in m cubed = %.2f\n" ,move1); //where data from line above is printed
	
	displaymasspool(move1); //how function for mass is shown in the main
    
	float move2 = numberofbarrels(move1); // this variable is used to move data from the function into the main where it is printed
	printf("\nnumber of barrels that can take water from the pool = %.0f", move2); //where data from line above is printed
}


float volofpool(float volH, float volW, float volL) { //this is the function where the volume is worked out and returned

	float totalvol = volH * volW * volL;
	return totalvol;
}


void displaymasspool(float watervol1) { //this is the fucntion used to calculate and display the mass

	float mass = watervol1*1000;
	printf("mass of water = %.2f kg", mass);
}


float numberofbarrels(float watervol2) { //this is the function used to calculate the number of barrels the pool could fill

	float barrelnum = watervol2 / 0.48;
	return barrelnum;
}