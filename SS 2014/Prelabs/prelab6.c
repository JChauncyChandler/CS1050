//Jackson Chandler
//Pre Lab 6


#include<stdio.h>
#include<stdlib.h>

int generateNumber(void);
int cube(int);
float division(int, int);

int main()
{
	srand(time(NULL));
	int x,y, xcube, ycube;
	float div;
	x=generateNumber();
	y=generateNumber();

	printf("The first number is %d\n", x);
	printf("The second number is %d\n", y);
	
	xcube = cube(x);
	ycube = cube(y);

	div = division(x,y);

	printf("Cube of %d is %d\n", x, xcube);
	printf("Cube of %d is %d\n", y, ycube);

	printf("Div(%d, %d) = %.2f\n", x, y, div);
}
int generateNumber(void)
{
	int x;

	x = rand()%10;

	return x;
}
int cube(int x)
{
	x=x*x;

	return x;
}
float division(int x, int y)
{
	int div;
	div =(x/y);
	return div;
}

