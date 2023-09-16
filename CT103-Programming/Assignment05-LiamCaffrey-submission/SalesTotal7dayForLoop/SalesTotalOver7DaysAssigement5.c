#include <stdio.h>
/*
Name: Liam Caffrey
Student Id: 21378316
Date: 26-10-21
*/

void main() {

	//setting up variables
	int f4loop; //variables used for "for loop"
	float amount[100]; // array used to store digits

	float sales = 0; // used as a medium to store sales for average and array

	float total = 0; //variables used  to get average
	double average1 = 0;

	int add; // what stops the "do-while loop"


	float ntotal1 = 0; //variables used to get new average and total
	float ntotal2 = 0;
	double naverage = 0;

	int newloop; //variable used for the 2nd "for loop"


	for (f4loop = 1; f4loop < 8; f4loop++) {                    //this first loop takes takes the first 7 values and stores the in an array
		printf("Enter sales total (Euro) for day %d: ", f4loop);
		scanf_s("%f", &sales); amount[f4loop] = sales;
		total = total + sales; //this stores the total through out the loop
	
	}

	average1 = total / 7; //this gets the average of first 7 days

	printf("Total sales: %.2f\n", total ); //here the first total and average are shown
	printf("Average daily sales: %.2lf\n", average1 );

	printf("How many additional days would you like to record? Please enter number of days: "); //asking for additional days if any
	scanf_s("%d", &add); 
	
	
	do  {
		printf("Enter sales total (Euro) for day %d: ", f4loop);  //this loop takes the new days and and keeps track of there values with the array
		scanf_s("%f", &sales); amount[f4loop] = sales;
		ntotal1 = ntotal1 + sales;
		add--; f4loop++;
	} while (add> 0);

	ntotal2 = total + ntotal1;  //here the new total is worked out

	naverage = ntotal2 / (f4loop-1); //here new average is worked out

	printf("New total sales: %.2f\n", ntotal2 ); //new average and total shown through here
	printf("New average daily sales: %.2lf\n", naverage);

	//this loop then displays all the array values
	for (newloop = 1; newloop < f4loop;) {

		printf("Sales for day %d: ", newloop); 
		printf("%.2lf\n", amount[newloop]);
		newloop++;

	}

}
