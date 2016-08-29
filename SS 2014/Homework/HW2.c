//Jackson Chandler
//jccyb4
//Homework 2
//14 March 2014
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int check_input(int);
void initialize_array(int[],int);
void print_array(int [],int);
void display_menu();
int check_option(int);
int common_numbers(int[],int[],int);
int count_numbers(int[],int, int);
int most(int[], int);
void print_histogram(int[],int[],int);

int main()
{
	srand(time(NULL));

	int array1[100],array2[100], mode1, mode2, checkin, checkopt, count, mode, input, choice;

	//Ask for input
	printf("Enter the size of the input: ");
		//scan input
		scanf("%d", &input);
			//run check_input function
			checkin = check_input(input);
				//While loop to check for correct input
				while(checkin == 0)
					{
						//ask user for input again
						printf("Invalid input, enter the input again: ");
							//Scan input again
							scanf("%d", &input);
								//recheck input
								checkin = check_input(input);
					}
	initialize_array(array1, input);
	initialize_array(array2, input);
	//Open display menu function
	display_menu();
		//scan choice
		scanf("%d", &choice);
			//check for correct option
			checkopt = check_option(choice);
				//While to check for correct response
				while(checkopt == 0)
					{
						//Reneter choice
						printf("Invalid choice, enter again: ");
							//rescan
							scanf("%d", &choice);
								//Call check function
								checkopt = check_option(choice);
					}
			print_array(array1, input);
                        print_array(array2, input);

	switch(choice)
	{
		case 1: count = common_numbers(array1, array2, input);
			printf("There are %d common numbers between the two arrays", count);
			break;
		case 2: mode1 = most(array1, input);
			mode2 = most(array2, input);
			printf("Mode for first array is %d\n", mode1);
			printf("Mode for first array is %d\n", mode2);
			break;
		case 3: print_histogram(array1, array2, input);
			break;
		case 4: printf("Ending program");
			break;
	}

}

//Check input
int check_input(int input)
{
	if(input>0 && input<=100)
		return 1;
	if(input<0 || input>100)
		return 0;
}

//initialize array
void initialize_array(int array[], int input)
{
	size_t i;

	for(i=0;i<input;i++)
	{
		array[i]=rand()%10;
	}
}
//print array
void print_array(int array[], int input)
{
	size_t i;

	for(i=0;i<input;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

//display menu
void display_menu()
{
	printf("Array operations, your options are:\n\n1: Common Numbers\n2: Mode\n3: Histogram\n4: Exit\nEnter the operation you want to preform: ");
}

//check option
int check_option(int choice)
{
	if(choice<1||choice>4)
	{
	while(choice<1 || choice>4)
	{
		printf("Invalid option enter option again: ");
			scanf("%d", choice);
	}
	return choice;
	}
	else
	{
		return -1;
	}
}

//common number 
int common_numbers(int array1[], int array2[], int input)
{
	size_t i;
	int counter;
	
	for(i=0;i<input;i++)
	{
		if(array1[i] == array2[i])
			counter++;
	}
	return counter;
}

// count number
int count_number(int array[], int input, int num)
{
	size_t i;
	int counter;

	for(i=0;i<input;i++)
	{
		if(array[i]==num)
			counter++;
	}
	return counter++;
}

// mode
int most(int array[], int input)
{
	size_t i;
	int most, num0, num1, num2, num3, num4, num5, num6, num7, num8, num9;

	for(i=0;i<input;i++)
	{
		switch(array[i])
		{
			case 0: num0++;
				break;
			case 1: num1++;
				break;
			case 2: num2++;
				break;
			case 3: num3++;
				break;
			case 4: num4++;
				break;
			case 5: num5++;
				break;\
			case 6: num6++;
				break;
			case 7: num7++;
				break;
			case 8: num8++;
				break;
			case 9: num9++;
				break;
		}
	}
        if(num0 > num1 && num0 > num2 && num0 > num3 && num0 > num4 && num0 > num5 && num0 > num6 && num0 > num7 && num0 > num8 && num0 > num9 )
        {
                return num0;
        }

	if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num1 > num6 && num1 > num7 && num1 > num8 && num1 > num0 && num1 > num9 )
	{
		return num1;
	}
        if(num2 > num0 && num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 && num2 > num6 && num2 > num7 && num2 > num8 && num2 > num9 )
        {
                return num2;
        }
        if(num3 > num0 && num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 && num3 > num6 && num3 > num7 && num3 > num8 && num3 > num9 )
        {
                return num3;
        }
        if(num4 > num0 && num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 && num4 > num6 && num4 > num7 && num4 > num8 && num4 > num9 )
        {
                return num4;
        }
        if(num5 > num0 && num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4 && num5 > num6 && num5 > num7 && num5 > num8 && num5 > num9 )
        {
                return num5;
        }
        if(num6 > num0 && num6 > num1 && num6 > num2 && num6 > num3 && num6 > num4 && num6 > num5 && num6 > num7 && num6 > num8 && num6 > num9 )
        {
                return num6;
        }
        if(num7 > num0 && num7 > num1 && num7 > num2 && num7 > num3 && num7 > num4 && num7 > num5 && num7 > num6 && num7 > num8 && num7 > num9 )
        {
                return num7;
        }
        if(num8 > num0 && num8 > num1 && num8 > num2 && num8 > num3 && num8 > num4 && num8 > num5 && num8 > num6 && num8 > num7 && num8 > num9 )
        {
                return num8;
        }
        if(num9 > num0 && num9 > num1 && num9 > num2 && num9 > num3 && num9 > num4 && num9 > num5 && num9 > num6 && num9 > num7 && num9 > num8 )
        {
                return num9;
        }
	else
		return num1;
}

//print histogram
void print_histogram(int arraya[], int arrayb[], int input)
{
	size_t i , j;
	for(i=0;i<input;i++)
	{
		printf("%7d%13d     ", i, arraya[i]);
		for(j-1;j<- arraya[i];j++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}



}
