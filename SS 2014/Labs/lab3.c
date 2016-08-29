//Jackson Chandler
//jccyb4
//Lab 3
//13 Feb 2014
//Lab Code: TEAM USA
//

#include<stdio.h>
#include<math.h>

int main()
{
	//Varaibles A= side 1, b = side 2, c = side 3, p = perimeter, area = area
	int a, b, c;
	float p, area;

	//Input for first side
	printf("Enter first number: ");
		scanf("%d", &a);
	//check if first input is positive
	while(a <= 0)
	{
		printf("Invalid number enter number again: ");
			scanf("%d", &a);
	}
	
	//second side
	printf("Enter the second number: ");
		scanf("%d", &b);
	//check to see if positive
	while(b <= 0)
	{
		printf("Invalid number enter the number again: ");
			scanf("%d", &b);
	}
	
	//third side
	printf("Enter the third number: ");
		scanf("%d", &c);
	//positive check
	while(c <= 0)
	{
		printf("Invalid number enter the number again: ");
			scanf("%d", &c);
	}
	//dat math doh
	p = (((float) a + (float) b+ (float) b)/2);
	area = sqrt(p*(p-(float)a)*(p-(float)b)*(p-(float)c));
	
	// print fresult
	printf("Area of the triangle is: %.2f \n", area);

	//equilateral
	if(a==b && a==b && c==b)
		printf("Triangle is equilateral\n");
	//Isosceles
	if(a==b && a!=c || a==c && a!=b)
		printf("Triangle is Isoscles\n");
	//Scalene
	if(a!=b && a!=c && c!=b)
		printf("Triangle is scalene\n");

	//Check length of sides
	if(a>b && a>c)
		printf("Length of the longest side of the triangle is %d \n", a);
	if(b>c && b>a)
		printf("Length of the longest side of the triangle is %d \n", b);
	if(c>a && c>b)
		printf("Length of the longest side of the triangle is %d \n", c);
	//Checj short length
	if(a<b && a<c)
		printf("Length of the shortest side of the triangle is %d \n", a);
	if(b<c && b<a)
		printf("Length of the shortest side of the triangle is %d \n", b);
	if(c<a && c<b)
		printf("Length of the shortest side of the triangle is %d \n", c);

}
	
