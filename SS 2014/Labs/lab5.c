//Jackson Chandler
//jccyb4
//Lab 5
//3/6/2014
//

#include<stdio.h>
#include<math.h>
//function prototypes
int check_number(float);
int check_exponent(int);
float compute_power(float x, int n);
int GCD(int,int);

int main()
{
	//variables
	int checkf, checkn, n;
	float x, result, powresult;
	
	//number input
	printf("Enter a number: ");
		scanf("%f", &x);
		checkf = check_number(x);//send float x to be checked
		while(checkf == 0)
			{
				printf("Number should be between 0 & 100 enter the number again: ");
					scanf("%f", &x);
					checkf= check_number(x);
			}
	//enter exponent
	printf("Enter the exponent: ");
		scanf("%d", &n);
		checkn = check_exponent(n);//int n to be checked
		while(checkn == 0)
			{
				printf("Exponent should be between -5 & 5 enter the exponent again: ");
					scanf("%d", &n);
					checkn = check_exponent(n);
			}
	
	//call compute function
	result = compute_power(x, n);
	//run pow as a check
	powresult = pow(x,n);
	//display results
	printf("pow(%.3f,%d)=%.3f using computer_power function\n", x, n, result);
	printf("pow(%.3f,%d)=%f using pow function from library\n", x, n, powresult);

	printf("\n\n\n\n------------- Atemtping bonus------------\n\n\n\n\n");
//bonus vars
	int num1, num2, gcd;
//inputs
	printf("Enter the first number: ");
		scanf("%d", &num1);
	printf("Enter the second number: ");
		scanf("%d", &num2);
//call GCD
	gcd= GCD(num1, num2);
//print results
	printf("GCD(%d, %d) is %d\n", num1, num2, gcd);
			
}

int check_number(float x)
{
	//check for over 100 or under 0
	if( x< 0 || x>100)
		return 0;
	else
		return 1;
}
int check_exponent(int n)
{
	//check if under -5 or over 5
	if( n<-5 || n>5)
		return 0;
	else
		return 1;
}
float compute_power(float x, int n)
{
	int i;
	float power;
	power=x;
	//check if negative
	if(n<-1)
	{
		//for loop to multiply by exponent
		for(i=-2;i>=n;i--)
		{
			power= power*x;
		}
		return 1/power;
	}
	//check if positive
	if(n>1)
	{
		for(i=2;i<=n;i++)
		{
			power=power*x;
		}
		return power;
	}
	if(n==1)
	return x;
	if(n==-1)
	return 1/x;
	if(n==0)
	return 1;
}		
int GCD(int num1, int num2)
{
	int i, mod1, mod2, gcd;
	 for(i=1; i<=num1;i++)
        {
                mod1=num1%i;
                mod2=num2%i;
                        if(mod1 == 0 && mod2 == 0)
                                gcd=i;
        }
	return gcd;
}
