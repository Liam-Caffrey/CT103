#include <stdio.h>
#include <math.h>
/*
Name: Liam Caffrey
Student Id: 21378316
Date: 23/11/2021
*/

float newtime(float time_hrs, float time_mins);  //prototypes
float rounded_time(float time_so_far);
float timeofday(float time_in);


const float day_rate=23.9;  //constants used for rates
const float night_rate=12.6;

void main() { //main function

	float time_h=0;  //variables used to read in times
	float time_m=0;
	float min_in_decimal=0;
	
	//section used to read and print times
	 
		printf("Please enter the current hour (Please use a 24 hour clock with midnight as 00) = ");
		scanf_s("%f", &time_h);
		printf("Please enter the current minute = ");
		scanf_s("%f", &time_m);

		float move1 = newtime(time_h, time_m); //this is for function 1
		printf("time: %.2f\n", move1);

		float move2= rounded_time(move1); //this is for function 2
		printf("time: %.2f\n", move2);

		float move3 = timeofday(move2); //this is for function 3
		printf("Electricity price at %.2f is %.2f c/KWh", move2, move3);


}

float newtime(float time_hrs, float time_mins) { //function 1 where time is added together into a decimal number

	float min_in_decimal = 0;
	float newtime = 0;

	min_in_decimal = time_mins / 60;
	newtime = time_hrs + min_in_decimal;
	return newtime;
}

float rounded_time(float time_so_far) { //function 2 where time is rounded up

	float rounded_time=ceil(time_so_far);
	return rounded_time;
}

float timeofday(float time_in) { //this is where time of day is determined and rate for the time of day is set

	float timeofday = 0;
	if (time_in < 9) {
		timeofday = night_rate;
	}
	else {
		timeofday = day_rate;
	}
	return timeofday;
}



