//Jackson Chandler
//jccyb4
//Lab 6
//13 March 2014
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generateNumber(void);
void displayMenu(void);
int errorCheck(int guess);
int checkGuess(int guess, int answer);
void printResult(int result, int answer);

int main()
{
	srand(time(NULL));//generate number off clock

	int guess, result, answer, check;//variables


	displayMenu();//display menu
		scanf("%d", &guess);//scan result
	
	check = errorCheck(guess);//check for valid input

		while(check == 0)//loop unitl correct input
			{
				printf("Invalid guess enter your choice again: ");
					scanf("%d",&guess);
				check = errorCheck(guess);
			}
	answer = generateNumber();//generate coin flip

	result = checkGuess(guess, answer);//check user guess

	printResult(result, answer);//display results
	
}
//generates number
int generateNumber(void)
{
	int x;

	x = rand()%2;//produce random number 0 or 1
	
	return x;
}
//displays menu
void displayMenu(void)
{
	 printf("Please take a guess\n0 : Head\n1 : Tail\nEnter your guess: ");
}
//check input
int errorCheck(int guess)
{
	if(guess == 1 || guess == 0)
		return 1;
	else
		return 0;
}
//check users guess
int checkGuess(int guess, int answer)
{
	if(guess == answer)
		return 1;
	else
		return 0;
}
//printf results
void printResult(int result, int answer)
{
	//if user is correct
	if(result == 1)
		{
			if(answer==1)// if tails
				{
					printf("Your answer was tail and it is a correct guess\n");
				}
			if(answer==0)// if heads
				{
					printf("Your answer was head and it is a correct guess\n");
				}
		}
	if(result == 0)// if incorrect
		{
			if(answer==1)// if tails
				{
					printf("Your answer was tail and it is an incorrect guess\n");
				}
			if(answer==0)// if heads
				{
					printf("Your answer was head and it is an incorrect guess\n");
				}
		}
}
