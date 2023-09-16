#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*
Name: Liam Caffrey
Student Id: 21378316
Date: 30-11-2021
*/

int setPasscode(int pass_c); //prototypes
void randomPasscodeSearch(int passcode, int max_possible);
void orderedPasscodeSearch(int pass_code);

void main() {

	int z = 9;  //variables used to set passcode maxes to 9, 99, 999, 9999
	int x = 99;
	int c = 999;
	int n = 9999;

	printf("\n-------------------------------------");
	printf("\nMax passcode size = 9  ");  //first setup which gets a random number from 0-9. it is then guessed randomly and in order.
	printf("\nRandom Passcode = "); 
	int move1 = setPasscode(9);
	randomPasscodeSearch(move1, z);
	orderedPasscodeSearch(move1);
	

	printf("\nMax passcode size = 99  "); //next setup which gets a random number from 0-99. it is then guessed randomly and in order.
	printf("\nRandom Passcode = ");
	int move2 = setPasscode(99);
	randomPasscodeSearch(move2, x);
	orderedPasscodeSearch(move2);
	

	printf("\nMax passcode size = 999  ");//next setup which gets a random number from 0-999. it is then guessed randomly and in order.
	printf("\nRandom Passcode = ");
	int move3 = setPasscode(999);
	randomPasscodeSearch(move3, c);
	orderedPasscodeSearch(move3);
	

	printf("\nMax passcode size = 9999");//next setup which gets a random number from 0-9999. it is then guessed randomly and in order.
	printf("\nRandom Passcode = ");
	int move4 = setPasscode(9999);
	randomPasscodeSearch(move4, n);
	orderedPasscodeSearch(move4);

	printf("\nFinal Passcode = 316  "); //final setup which uses last digits of my student id as a passcode and proceeds to guess it randomly and in order
	printf("\nPasscode = 316 ");
	randomPasscodeSearch(316, c);
	orderedPasscodeSearch(316);
	printf("-------------------------------------");
}

int setPasscode(int pass_c) { //this is the function used to generate a random number

	int random_num;
	long lt = time(NULL);
	srand(lt);
	random_num = rand() % pass_c;
	printf("%d\n", random_num);
	return random_num;
}

void randomPasscodeSearch(int passcode, int max_possible) { //this is the function that guesses the random passcode. it does so randomly

	int i=1;
	int attempts=0;
	int guess_num = passcode;
	printf("Random Search. Passcode = %d ", passcode);
		 
	int m = max_possible;
	int guess;
    do {
		guess = rand() % m;
		if (guess == guess_num) {
			i++;
		}
		else {
			attempts++;
		}
	} while (i==1);
	printf("Passcode guessed in %d attempts\n", attempts);
}


void orderedPasscodeSearch(int pass_code) { //this is the function that guesses the random passcode. it does so in order
	int j = 1;
	int guess2 = 0;
	printf("Ordered Search. Passcode = %d ", pass_code);
	do {
		if (pass_code == guess2) {
			j++;
		}
		else {
			guess2++;
		}
	} while (j == 1);

	printf("Passcode guessed in %d attempts\n", guess2+1);
}