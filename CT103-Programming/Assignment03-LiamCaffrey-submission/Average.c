#include <stdio.h>
void main() {

	float day1, day2, day3, day4; //setting up variables for all 4 days
	double average = 0.0; // setting up average, (calculated down below)
	double average2 = 0.0; // setting up the average spent per customer

	printf("Enter sales for day 1 :"); //these 2 lines allow you to enter the sales for day 1 and scan it.
	scanf_s("%f", &day1);

	printf("Enter sales for day 2 :"); //these 2 lines allow you to enter the sales for day 2 and scan it.
	scanf_s("%f", &day2);

	printf("Enter sales for day 3 :"); //these 2 lines allow you to enter the sales for day 3 and scan it.
	scanf_s("%f", &day3);

	printf("Enter sales for day 4 :"); //these 2 lines allow you to enter the sales for day 4 and scan it.
	scanf_s("%f", &day4);

	average = (day1 + day2 + day3 + day4) / 4; // this line then takes the numbers scanned above adds them to each other and divides by 4 to get average

	printf("Average Sales Over the Four Days = %.4lf \n", average); //this then prints your average over the four days

	if (average < 10000) {             //these next lines take your average and tell you if it is too low, normal or higher than normal.
		printf("sales are low \n");
	}
	else if (10000 < average < 15000) {
		printf("sales are normal \n");
	}

	else if (average > 15000) {
		printf("sales are normal \n");
	}
	
	average2 = (average / 500); // this line then takes your average sales/ money spent and divides by 500 to get what people spend on average
	printf("What Shoppers Spend on Average = %.4lf \n", average2);


}