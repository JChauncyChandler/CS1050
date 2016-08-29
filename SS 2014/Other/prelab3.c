//Prelab 3
//Jackson Chandler
//

#include<stdio.h>

int main(void)
{
	int num;

	printf("Please enter a number: ");
		scanf("%d", &num);
	while(num<=0)
	{
		printf("Invalid number enter again: ");
		scanf("%d", &num);
	}
	printf("The number entered is: %d", num);

	printf("\n\n\n_______________________Sentinel_____________________\n\n\n");
	
	printf("Please enter a number: ");
		scanf("%d", &num);
	while(num != -1)
	{
		printf("The number is %d: ", num);
		printf("Enter a number: ");
			scanf("%d", &num);
	}
}
	
