//Jackson Chandler
//


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 50

typedef struct{
	int id;
	int grade;
}data;
data students[MAX];

int load_data( char*);
void print_data(int size);

main(int argc, char*argv[])
{
	if(argc!=2)
	{
		printf("Inccorrect number of inputs");
		return 0;
	}
	int size;
 	size = load_data(argv[1]);
	print_data(size);

}

int load_data(char* filename)
{
	int i=0;
	FILE* file=fopen(filename,"r");
	if(file==NULL)
	{
		return 0;
	}
	
	int size;

	fscanf(file, "%d", &size); 
	
	for(i=0;i<size;i++)
	{
		fscanf(file,"%d %d", &students[i].id, &students[i].grade);
	}
	fclose(file);
	return size;
}
void print_data(int size)
{
	int i;
	printf("Student grade\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t%d\n", students[i].id, students[i].grade);
	}
	return;
}
