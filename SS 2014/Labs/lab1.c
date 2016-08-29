//Jackson Chandler
//jccyb4
//Code:
//30 January 2014
//

#include <stdio.h>

int main(void)
{

	int first, second, third, sum, velocity, accel, time;//integer variable
	float  totald, meters, hours; //flaot variable

	printf("Enter the first number: ");
		scanf("%d", &first);//read in first number
	printf("\nEnter the second number: ");
		scanf("%d", &second);//read in second number
	printf("\nEnter the third number: ");
		scanf("%d", &third);//read in third number

	sum = first + second+ third;//find sum of all 3 number

	printf("Sum of the three numbers is: %d", sum);//print results

	printf("\n\n\n\n\n\n\n______________________BONUS___________________________\n");//heads up on the bonus so you're not surprised when it comes.



	printf("\nEnter the initial velcoity (MPH): ");
		scanf("%d", &velocity); //scan in velocity
	printf("\nEnter the acceleration (MPH^2): ");
		scanf("%d", &accel);//scan in acceleration
	printf("\nEnter the time (Seconds): ");
		scanf("%d", &time);//scan in time
	
	totald= velocity * time + ((accel*(time*time))/2);//calculate total distance traveled

	meters= totald *1600;//convert to meters	
	
	totald = totald/3600;
	meters = meters/3600;	

	printf("\nTotal distance traveled in %d seconds is %.4f miles or %.4f meters\n", time, totald, meters);// print results
}
