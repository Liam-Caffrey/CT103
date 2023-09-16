#include <string.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

/*
Name: Liam Caffrey
Student Id: 21378316
Date: 18-01-2022
*/
int shipX; //global ints
int shipY;
int attemptsGrid=0; 

void randomSearch(int gridSize);          //prototypes
void gridSearch(int gridSize, int attempts);

void main(){

	    int i = 0;
		int j = 0;
		int gridsize = 6;

	long xr = time(NULL); //this is used to generate a random x position for our ship
	srand(xr);
	shipX = rand() % gridsize;
	printf("%d\n", shipX); // show initial x value

	long yr = time(NULL); //this is used to generate a random y position for our ship 
	rand(yr);
	shipY = rand() % gridsize;
	printf("%d\n", shipY); //show inital y value
	//one uses srand while the other uses rand to ensure values arent always the same due to them both getting intial values from time

	randomSearch(10); //calling on functions for 10x10 grid
	gridSearch(10, attemptsGrid);



	randomSearch(gridsize); //calling on functions for 6x6 grid last digit of student id
	gridSearch(gridsize, attemptsGrid);

}

void randomSearch(int gridSize){  //this searches our grid randomly 

	int i = 1;
	int attempts = 0;
		int guessSearchX;
		int guessSearchY;
		do {
			guessSearchX = rand() % gridSize;
			guessSearchY = rand(100) % gridSize;
			if (guessSearchX == shipX) {
				if (guessSearchY == shipY) {
					i++;
				}
				else {
					attempts++;
				}
			}
			else {
				attempts++;
			}
		} while (i == 1);
		printf("-------->> Random Search <<--------\n");
		printf("Location found after %d attempts\n", attempts);
		printf("Ship found at co-ordinates - (X : %d) , (Y : %d)\n", shipX, shipY);
}


void gridSearch(int gridSize,int attempts) { //this is where our grid is searched in order it first goes along the x axis of our grid then the y axis


	int gridSearchX = attempts % gridSize; 
	int gridSearchY = attempts / gridSize; 
	/*
	division vs modulus
	here we see / used and % used, these reason for each explination is simple
	firstly / is used to count the tens 
	while % is used to count units
	example if the ship is located in (x=3,y=6), 63 attempts will be needed so the recursive loop will cause the function to loop 63 times.
	(in actuallity 64 loops will occur as a correct loop will also add one to the attemtps counter)
	
	since units are 3 we can use % to divide into 63 giving us a remainder which is our x

	division (/) is then used (which always rounds down) then divides our number 63 which gives us 6.3 which is rounded to 6 giving us our y

	our x and y values are gotten from the % and / equations above which are constantly checked ( checked each loop/ time the function is called)
	and this is how we can cheack so see if we are correct

	*/
	attempts++;                             
	/*
	 attempts is imediatly added onto, as since recursion is used each time the function is called we start
	 from its beggining meaning each time it starts it also starts a new attempt
	 attempts will be 1 larger than the given value in a 10x10 grid because each loop adds one to attempts even a succesful loop
	*/
	if (gridSearchX == shipX) { 
		if (gridSearchY == shipY) {
			
			printf("-------->> Grid Search <<--------\n");
			printf("Location found after %d attempts\n", attempts); 
			printf("Ship found at co-ordinates - (X : %d) , (Y : %d)\n", shipX, shipY);
		}
		else{ gridSearch(gridSize, attempts); //recursion used here each time the y value isn't the same 
		}	
	}
	else{ gridSearch(gridSize, attempts); //recursion used here each time the x value isn't the same 
	}
}