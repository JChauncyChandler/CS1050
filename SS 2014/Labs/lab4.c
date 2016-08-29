//Jackson Chandler
//jccyb4
//Lab4
//Lab Code:
//


#include<stdio.h>

int error_check(int);

int main()
{
	int input, num,check,j, largest=0, smallest=1000000, i, total=0;//Variables
	float mean;

	// size input
	printf("Enter the input size: ");
		scanf("%d", &input);
	//check for positive
	while(input<=0)
	{
		printf("Invalid input enter the input size again: ");
			scanf("%d", &input);
	}
	printf("Attempting bonus part\n");	
	//begin for 
	for(i=1;i<=input;i++)
	{
		
		//entering number
		printf("Enter a positive integer: ");
			scanf("%d", &num);
		//call function to error check
		check = error_check(num);
		//check number return with while loop
		while(check != 1)
		{
			printf("Invalid number, number should be positive (>=0)");
				scanf("%d", &num);
			check = error_check(num);
		}
		
		//determin largest
		if(num> largest)
		{
			largest = num;
		}
		//samllest
		if(num<smallest)
		{
			smallest = num;
		}
		//calculate total
		total = num + total;
	}
	//find mean
	mean = total / input;
	//display results
	printf("Mean of numbers is %.2f\nLargest number is %d\nSmallest number is %d\n", mean, largest, smallest);
}
//function 
int error_check(num)
{
	
	if(num>=0)
		return 1;
	if(num<0)
		return 0;
}


	
