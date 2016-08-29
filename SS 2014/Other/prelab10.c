//Jackson Chandler


#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int string_length(char *);
void copy_string(char *, char*);


int main(int argc, char *argv[])
{
	if(argc!=2)
	{
		printf("Not enough parameters\n");
		return 0;
	}

	char*input1=argv[1];
	char cpyarr[100];
	char*input2= cpyarr;
	int len;
	
	len=string_length(input1);
	copy_string(input1, input2);

	printf("Input string is %s\nLength of string is %d\nCopied string is %s\n", input1, len, input2);
}

int string_length(char *input1)
{
	int num;
	
	num=strlen(input1);
	
	return num;
}

void copy_string(char *input1, char *input2)
{
	strcpy(input2, input1);
}
