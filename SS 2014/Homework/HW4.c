//Jackson Chandler
//jccyb4
//Homework4
//4/29/2014
//


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 50

int load_data(char* );
void print_data(int size);
int update_data(char*, int n);
int highest_grade(int size);
int lowest_grade(int size);
float average_grade(int size);
int write_content(char *, int size, int low, int high, float avg);

typedef struct
{
	int id;
	int grade;
}data;
data students[MAX];
main(int argc, char *argv[])
{
	if(argc!=4)
	{
		printf("Incorrect parameters\n");
		return 0;
	}
	int size, low, high;
	float avg;
	size = load_data(argv[1]);
	print_data(size);
	
	high=highest_grade(size);
        low=lowest_grade(size);
        avg=average_grade(size);
        write_content(argv[3], size, low, high, avg);
        printf("\nStudent with highest grade has the id %d and grade %d\nStudent with the lowest grade has id %d and the grade %d\nAverage class grade is %.2f\n", students[high].id, students[high].grade, students[low].id, students[low].grade, avg);


	size+=update_data(argv[2], size);
	high=highest_grade(size);
	low=lowest_grade(size);
	avg=average_grade(size);
	write_content(argv[3], size, low, high, avg);
	 print_data(size);
	printf("\nAfter update\nStudent with highest grade has the id %d and grade %d\nStudent with the lowest grade has id %d and the grade %d\nAverage class grade is %.2f\n", students[high].id, students[high].grade, students[low].id, students[low].grade, avg);

	return 0;
}

void print_data(int size)
{
	int i;
	printf("Student grade\nID\tGrade\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t%d\n", students[i].id, students[i].grade);
	}
}
int load_data(char* filename)
{
	int i;
	int size;
	FILE* file = fopen(filename, "r");
	if(file == NULL)
	{
		return 0;
	}
	fscanf(file, "%d", &size);
	for(i=0;i<size;i++)
	{
		fscanf(file, "%d %d", &students[i].id, &students[i].grade);
	}
	fclose(file);
	return size;
}
int update_data(char*filename, int n)
{
	int i, size;
	FILE*file = fopen(filename,"r");
	if(file == NULL)
	{
		return 0;
	}
	fscanf(file, "%d", &size);
	for(i=n;i<size+n;i++)
	{
		fscanf(file,"%d %d", &students[i].id, &students[i].grade);
	}
	fclose(file);
	return size;
}
int highest_grade(int size)
{
	int i, big=0, index=0;

	for(i=0; i<size; i++)
	{
		if(students[i].grade>big)
		{
			big=students[i].grade;
			index=i;
		}
	}
	return index;
}
int lowest_grade(int size)
{
	int i, small=101, index = 0;
	
	for(i=0; i<size; i++)
	{
		if(students[i].grade<small)
		{
			small=students[i].grade;
			index=i;
		}
	}
	return index;
}
float average_grade(int size)
{
	int i, tot=0;
	float avg;
	
	for(i=0;i<size;i++)
	{
		tot+=students[i].grade;
	}
	avg=tot/size;
	return avg;
}
int write_content(char *fname, int size, int low, int high, float avg)
{
	int i;
	FILE*file = fopen(fname,"w");
	for(i=0;i<size;i++)
	{
		fprintf(file, "%d %d", students[i].id, students[i].grade);
	}
	fprintf(file,"Student with the highest grade has the id %d and the grade %d",students[high].id, students[high].grade);
	fprintf(file,"Student with the lowest grade has the id %d and the grade %d",students[low].id, students[low].grade);
	fprintf(file,"Average class grade is %.2f", avg);
	fclose(file);
	return;
}

