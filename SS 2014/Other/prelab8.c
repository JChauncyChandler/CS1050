//Jackson Chandler

#include<stdio.h>
#include<stdlib.h>

int check_size(int);
void initialize_2Darray(int[][MAX],int);
void print_2Darray(int[][MAX], int);
int smallest_number(int[][MAX], int);

#define MAX 100;

int main()
{
	srand(time(NULL));
	int array[MAX][MAX] size, small;
	
	printf("Enter the size of the array: ");
		scanf("%d", &size);

	while(size>100||size<=0)
	{
		printf("Invalid input enter size again: ");
			scanf("%d", &size);
	}
	
	initialize_2Darray(array, size);	
