#include <stdio.h>
/*
Name: Liam Caffrey
Student Id: 21378316
Date: 02-11-21
*/

void main() {

	int rloop;        //this is set up for the for loop used to record the 21 ratings
	float rating[22]; // this is the array used to store the ratings
	float usernum;    // this is the variable which allows users to enter there ratings
	double average1 = 0; // this is used to automatically keep track of the total overall
	double average2; // this gets the average raging once "average1" is divided by 21

	float ratingfrequency[6] = { 0,0,0,0,0,0 }; //new array for rating frequency 

	float c1 = 0; //this ints are used to print out how many stars for each rating
	float c2 = 0;
	float c3 = 0;
	float c4 = 0;
	float c5 = 0;

	float ratingPercent[6] = { 0,0,0,0,0,0, }; //this array is used to store data to show rating percentage

	double sum1 = 0; //these are used to move values out of array and get percentage
	double sum2 = 0;
	double sum3 = 0;
	double sum4 = 0; 
	double sum5 = 0;

	float s1 = 0; //these next 5 are used to count and print the stars for each rating percentage
	float s2 = 0;
	float s3 = 0;
	float s4 = 0;
	float s5 = 0;

	long double percent1 = 0; //these next 5 are used to calculate the percentages
	long double percent2 = 0;
	long double percent3 = 0;
	long double percent4 = 0;
	long double percent5 = 0;

	for (rloop = 1; rloop < 22;) {             //this first for loop takes takes the first 21 values and stores them in an array
		printf("Enter rating number %d: ", rloop);
		scanf_s("%f", &usernum);

		if (0 >= usernum) {                      //if the scaned number is 0 or less it is not accepted
			printf("Number has to be from 1 to 5\n");
			printf("Please re-enter number.\n");
		}
		else if (usernum >= 6) {                 //if the scaned number is 6 or greater it is not accepted
			printf("Number has to be from 1 to 5\n");
			printf("Please re-enter number.\n");
		}
		else {
			rating[rloop] = usernum;  //here once a value from 1-5 is entered it goes into the array
			rloop++;
			average1 = usernum + average1; //entered values used to calculate average

			if (usernum == 1) {     //in this section we keep track of how many of each rating has been given through the "ratingfrequency" array
				ratingfrequency[1]++; //we also store how many of each percentage for the "ratingpercent" array for later use
				ratingPercent[1]++;
			}
			else if (usernum == 2) {
				ratingfrequency[2]++;	
				ratingPercent[2]++;
			}
			else if (usernum == 3) {
				ratingfrequency[3]++;
				ratingPercent[3]++;
			}
			else if (usernum == 4) {
				ratingfrequency[4]++;
				ratingPercent[4]++;
			}
			else if (usernum == 5) {
				ratingfrequency[5]++;
				ratingPercent[5]++;
			}
		}
	}
	average2 = average1 / 21; //here average is calculated and displayed
	printf("Average Rating: %.1lf\n\n", average2);


	                            //rating frequency starts here
	printf("Rating Frequency\n"); 


						 //this prints out all  the * for each rating of 1 star
	printf("1 star     ");
	for (c1 = ratingfrequency[1]; c1 > 0; c1--) {
		printf("*");
	}
	printf("   %0.f\n", ratingfrequency[1]); //shows the number of 1 star ratings


	                     //this prints out all  the * for each rating of 2 stars
	printf("2 stars    ");
	for (c2 = ratingfrequency[2]; c2 > 0; c2--) {
		printf("*");
	}
	printf("   %0.f\n", ratingfrequency[2]); //shows the number of 2 star ratings


	                     //this prints out all  the * for each rating of 3 stars
	printf("3 stars    ");
	for (c3 = ratingfrequency[3]; c3 > 0; c3--) {
		printf("*");
	}
	printf("   %0.f\n", ratingfrequency[3]); //shows the number of 3 star ratings


	                     //this prints out all  the * for each rating of 4 stars
	printf("4 stars    ");
	for (c4 = ratingfrequency[4]; c4 > 0; c4--) { 
		printf("*");
	}
	printf("   %0.f\n", ratingfrequency[4]); //shows the number of 4 star ratings


	                     //this prints out all  the * for each rating of 5 stars
	printf("5 stars    ");
	for (c5 = ratingfrequency[5]; c5 > 0; c5--) {
		printf("*");
	}
	printf("   %0.f\n\n", ratingfrequency[5]); //shows the number of 5 star ratings




	                          //rating percentage begins here
	printf("Rating Percent\n"); 


					  // this prints the stars and shows the percentage of 1 star reviews
	printf("1 star   ");
	
	sum1= ratingPercent[1];
	percent1 = (sum1 / 21) * 100;

	while (s1 < percent1) {
		printf("*"); s1++;
	}
	printf("   %.2lf%% \n", percent1); //here the percentage of 1 star reviews is printed
	

	                   // this prints the stars and shows the percentage of 2 star reviews
	printf("2 star   ");

	sum2 = ratingPercent[2];
	percent2 = (sum2 / 21) * 100;

	while (s2 < percent2) {
		printf("*"); s2++;
	}
	printf("   %.2lf%% \n", percent2);//here the percentage of 2 star reviews is printed
	

	                    // this prints the stars and shows the percentage of 3 star reviews
	printf("3 star   ");

	sum3 = ratingPercent[3];
	percent3 = (sum3 / 21) * 100;

	while (s3 < percent3) {
		printf("*");  s3++;
	}
	printf("   %.2lf%% \n", percent3); //here the percentage of 3 star reviews is printed
	

	                   // this prints the stars and shows the percentage of 3 star reviews
	printf("4 star   ");

	sum4 = ratingPercent[4];
	percent4 = (sum4 / 21) * 100;

	while (s4 < percent4) {
		printf("*");  s4++;
	}
	printf("   %.2lf%% \n", percent4); //here the percentage of 4 star reviews is printed
	

	                    // this prints the stars and shows the percentage of 3 star reviews
	printf("5 star   ");

	sum5 = ratingPercent[5];
	percent5 = (sum5 / 21) * 100;

	while (s5 < percent5) {
		printf("*"); s5++;
	}
	printf("   %.2lf%% \n", percent5);//here the percentage of 5 star reviews is printed
}