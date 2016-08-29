//Jackson Chandler
//Pre Lab 5

int check_number(float);
void display_menu();
float sum(float, float);
float square(float);
float cube(float);

int main()
{
	float num1, num2, output;
	int check, choice;

	printf("Enter a number: ");
		scanf("%f", &num1);
	check=check_number(num1);
	while(check==0)
	{
		printf("Invalid number should be between 0 and 100\nEnter a number: ");
			scanf("%f", &num1);
			check=check_number(num1);
	}
	printf("Enter a number: ");
		scanf("%f", & num2);
		check=check_number(num2);
	while(check==0)
	{
		printf("Invalid number should be between 0 and 100\nEnter a number: ");
		scanf("%f", &num2);
		check=check_number(num2);
	}
	printf("The numbers entered are %.4f and %.4f\n", num1, num2)
	display_menu;
	switch(choice)
	{
	case 1: output=square(
