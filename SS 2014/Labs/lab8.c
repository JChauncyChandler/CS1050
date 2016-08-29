//Jackson Chandler
//jccyb4
//Lab 8
//3 April 2014
//
#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int check_error(int);
void initialize_2Darray(int[][MAX], int);
void print_2Darray(int [][MAX], int);
int check_index(int, int);
int find_rowmax(int [][MAX], int, int);
float calculate_rowaverage(int[][MAX], int, int);
int find_colmin(int [][MAX], int, int);


int main()
{
	srand(time(NULL));//random

	//variables
	int rowmax, rowmin, checksize, checkinput, size, row, col=0, index;
	int  array[MAX][MAX];
	float avg;
	size_t i;
	
	//Input for size of array
	printf("Enter the size of the 2D array: ");
		scanf("%d",&size);
			checksize=check_error(size);//Error check
				while(checksize==0)
				{
					printf("Invalid input enter size of the array again: ");
						scanf("%d", &size);
							checksize=check_error(size);
				}
	initialize_2Darray(array, size);//initialize
	print_2Darray(array, size);//print
	
	printf("Enter the row: ");//user input row
		scanf("%d", &row);
			checkinput=check_index(row, size);//check input
				while(checkinput=0)
				{
					printf("Invalid row index enter the row again: ");
						scanf("%d", &row);
							checkinput=check_index(row, size);
				}
	rowmax=find_rowmax(array,row,size);//find max in row
	avg=calculate_rowaverage(array,row, size);//find average
	
	printf("The largest number present in row %d is %d\n\nThe average of numbers present in the row %d is %.2f\n", row, rowmax, row, avg);
	for(i=0;i<size;i++)//colum mininums
	{
		rowmin=find_colmin(array, col, size);
			printf("Mininum number present in column %d is %d\n", col,rowmin);
		col++;
	}		
}

//error check
int check_error(int size)
{
	if(size<=100&&size>0)
		return 1;
	if(size>100||size<0)
		return 0;
}

//initialize
void initialize_2Darray(int array[][MAX], int size)
{
	size_t row, col;

	for(row = 0;row<size; row++)
	{
		for(col=0;col<size;col++)
		{
			array[row][col]=rand()%10;
		}
	}
}

//print
void print_2Darray(int array[][MAX], int size)
{
	size_t row, col;

	 for(row = 0;row<size; row++)
        {
                for(col=0;col<size;col++)
                {
                        printf("%d ", array[row][col]);
                }
		printf("\n");
        }


}

//check index
int check_index(int index, int size)
{
	if(index>=0&&index<=size-1)
		return 1;
	if(index<0||index>=size)
		return 0;
}

//row max
int find_rowmax(int array[][MAX], int row, int size)
{
	size_t i;
	int biggest=0;

	for(i=0;i<size;i++)
	{
		if(array[row][i]>biggest)//find biggest number
			biggest=array[row][i];
	}
	return biggest;

}

//calc average
float calculate_rowaverage(int array[][MAX], int row, int size)
{
	size_t i;
	float avg;
	int rowttl=0;

	for(i=0;i<size;i++)
	{
		rowttl=array[row][i]+rowttl;//calculate total
	}
	avg=rowttl/size;//find average
	return avg;
}

//int find col min
int find_colmin(int array[][MAX], int col, int size)
{
	size_t i;
	int min=9;
	
	for(i=0;i<size;i++)
	{
		if(array[i][col]<min)
			min=array[i][col];
	}
	return min;
}

	
