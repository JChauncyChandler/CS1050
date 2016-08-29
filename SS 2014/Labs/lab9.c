//JAckson Chandler
//jccyb4
//10 April 2014
//Lab9


#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100

void initialize_array(int *aptr, int);
void print_array(int *aptr, int size);
int check_size(int);
int count_even(int *aptr, int);
float median(int *aptr, int);
int count_dublicate(int *aptr, int);
float standard_deviation(int *aptr, int);


int main()
{//start main
	srand(time(NULL));
	int size, duplicate, even, checksize;
	int array[MAX];
	int *aptr=array;
	float med, dev;

	printf("Enter the size of the input: ");
		scanf("%d", &size);
			checksize=check_size(size);
				while(checksize==0)
				{//start while
					printf("Invalid input enter the size of the array again: ");
						scanf("%d", &size);
							checksize=check_size(size);
				}//end while
	initialize_array(aptr, size);
	even=count_even(aptr, size);
	print_array(aptr, size);
	med=median(aptr, size);
	duplicate=count_dublicate(aptr, size);
	
	printf("\nThere are %d even numbers present in the array\nThere are %d duplicate numbers present in the array\nMedian value is %.2f\n",even,duplicate,med);

	dev=standard_deviation(aptr, size);
	printf("The standard deviation is %.2f", dev);

}//end main

void initialize_array(int *aptr, int size)
{//start initialize

	size_t i;
	for(i=0;i<size;i++)
	{//start for
		*(aptr+i)=rand()%10;
	}//end for
}//end initialize
void print_array(int *aptr, int size)
{//start print
	size_t i;
	for(i=0;i<size;i++)
	{//start for
		printf("%d ", *(aptr+i));
	}//end for
}//end print
int check_size(int size)
{//start check
	if(size<=100&&size>0)
		return 1;
	if(size>100||size<=0)
		return 0;
}//end check
int count_even(int *aptr, int size)
{//start count even
	size_t i;
	int num, counter=0;
	for(i=0;i<size;i++)
	{//start for
		num= *(aptr+i);
			if(num%2==0||num==0)
				counter++;
	}//end for
	return counter;
}//end count even

float median(int *aptr, int size)
{//start median
	size_t i,pass;
	int num, hold, length, place;
	float med;
	
	for(pass=1;pass<size;pass++)
	{//start outer for
		for(i=0;i<size;i++)
		{//start for
			if(*(aptr+i)>*(aptr+i+1))
			{//start if
				hold=*(aptr+i);
				*(aptr+i)=*(aptr+i+1);
				*(aptr+i+1) = hold;
			}//end if
		}//end for
	}//end for
	if(size%2==0)
	{
		place=size/2;
		med=(*(aptr+place)+*(aptr+place-1))/2;
	
	}
	if(size%2!=0)
	{
		place=size/2;
		med=*(aptr+place);
	}	
		
	return med;
}//end median

int count_dublicate(int *aptr, int size)
{//start duplicate
	size_t i=0, t=0;
	int freq[10]={0};
	int *fp=freq;
	int counter=0;
	
		for(i=0;i<size;i++)
		{
			(*(fp+(*(aptr+i))))++;
		
		}
		for(t=0;t<size;t++)
		{
			if(*(fp+t)>=2)
				counter++;
		}
	
	return counter;
}

float standard_deviation(int *aptr, int size)
{
        float dev, mean, sum;
        size_t i;

        for(i=0;i<size;i++)
        {
                mean+=*(aptr+i);
        }
        for(i=0;i<size;i++)
        {
                sum+=pow((((float)*aptr+1)-mean),2);
        }
        return sqrt((sum-mean)/((float)size-1));
}

