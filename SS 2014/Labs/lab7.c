//Jackson Chandler
//jccyb4
//20 March 2014
//lab 7
//

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//declare prototypes
int check_input(int);
void initialize_array(int);
int max(int);
int min(int);
float average(int);
void compute_stats(int);
int search(int, int);
void print_array(int);
int count_numbers(int, int);
void bubble_sort(int);
//declare array
int array[100];

//start main
int main()
{
	//random numbers
	srand(time(NULL));
	//variables
	int size, num, searcha, checknum, sreturn, count;
	//start user input
	printf("Enter the size of the input: ");
		scanf("%d", &size);
			checknum = check_input(size);//call check unput
				while(checknum == 0)//loop while invalid
					{
						printf("Invalid input enter the size of the input again: ");
							scanf("%d", &size);
								checknum = check_input(size);
					}//end user input
	initialize_array(size);//call initialize array
	print_array(size);//print array
	compute_stats(size);//display min, max and average
	
	//ask for search
	printf("Enter the number you want to search: ");
		scanf("%d", &searcha);
	//search array
	sreturn = search(size,searcha);
		if(sreturn!=-1)//if number is present
		printf("The number %d is present at index %d\n", searcha, sreturn);
		if(sreturn==-1)//if it doesnt find number
		printf("The number %d is not present in the array\n", searcha);
	count = count_numbers(size, searcha);//count the numbers
	printf("The number %d is present %d times in the array\n", searcha, count);
	bubble_sort(size);
}
//FUNCTION  to check input
int check_input(int size)
{
	if(size>0&&size<=100)
		return 1;
	if(size<=0||size>100)
		return 0;
}

//initialize the aray
void initialize_array(int size)
{
	size_t i;
	
	for(i=0;i<size;i++)
	{
		array[i]=rand()%10;
	}
}

//find max number
int max(int size)
{
	size_t i;
	int big=0;
	for(i=0;i<size;i++)
	{
		if(array[i] > big)
			big = array[i];
	}
	return big;
}

//find mininum number
int min(int size)
{
        size_t i;
        int small=array[0];
        for(i=0;i<size;i++)
        {
                if(array[i] < small)
                        small = array[i];
        }
        return small;

}

//find average
float average(int size)
{
	size_t i;
	float avg, total;
	for(i=0;i<size;i++)
	{
		total += array[i];
	}
	avg= total/size;
	return avg;
}

//calls min, max, and average
void compute_stats(int size)
{
	int mini, maxi;
	float avg;
	maxi = max(size);
	mini = min(size);
	avg = average(size);
	printf("\nLargest number is %d\nSmallest number is %d\nAverage number is %.4f\n", maxi, mini, avg);
}

//search the array
int search(int size, int searcha) 
{
	size_t i;
	for(i=0;i<size;i++)
	{
		if(array[i]==searcha)
			return i;
	}
	return -1;
}

//printf array
void print_array(int size)
{
	size_t i;
	printf("Input array\n");
	for(i=0;i<size;i++)
	{
		printf("%d ", array[i]);
	}
}

//count numbers
int count_numbers(int size, int searcha)
{
	size_t i;
	int counter;
	for(i=0;i<size;i++)
	{
		if(array[i]==searcha)
			counter++;
	}
	return counter;
}

//Bubble sort
void bubble_sort(int size)
{
	int pass, i, hold;
	printf("Array before sorting\n");
	print_array(size);
	for(pass=1;pass<size;pass++)
	{
		for(i=0;i<size-1;i++)
		{
			if(array[i]>array[i+1])
			{
				hold = array[i];
				array[i] = array[i+1];
				array[i+1] = hold;
			}
		}
	}
	printf("\nArray after sorting\n");
	for(i=0;i<size;i++)
	{
		printf("%d ", array[i]);
	}
}
