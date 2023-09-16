#include <stdio.h>
/*
Name: Liam Caffrey
Student Id:
Date: 19-10-21
*/

void main() {

    float counter = 0; //setting up variables
    float num = 0;
    float total ;
    double add = 0;
    double average1;
    double average2 = 0 ;
    double average3;
  
    printf("enter total number of children: "); //this allows you to keep track of number of children
    scanf_s("%f", &total);
 
    
        printf("total is %f\n", total ); // prints total number of children

        printf("enter age of first child:"); //this allows you to enter the first childs age
        scanf_s("%f", &num);
        average2 = num + add; //this line creates a new variable called average2 which is just the first value

        do {  

            if (0 <= num <= 18); { printf("enter next age:");  //this allows you to enter the rest of the childrens ages
            scanf_s("%f", &num); average2 = num + average2; //this line then updates the average2 by adding on the lastest entered number
            counter++;  }


            average1 = (average2 / total); //overall average age is gotten by this equation
         
    }while (counter+1 < total ); //this keeps track of all the entered amounts counter has a +1 to account for the first age which isnt in the loop

     

        printf("average age is %lf", average1 ); //this prints the average

}


