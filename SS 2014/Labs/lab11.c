//Jackson Chandler
//jccyb4
//Lab 11
//5/1/2014
//
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

int load_data(char*filename);
void print_data(int size);
int update_grade(int size, int id, int ngrade);
int highest_grade(int size);
int write_content(char * fname, int size);
void sort_data(int size);

main(int argc, char* argv[])
{
	 if(argc!=3)
        {
                printf("Insufficient arguments");
                return 0;
        }
        int size, ngrade, hgrade, id, gradecheck;
        size = load_data(argv[1]);
        print_data(size);
	printf("Enter the ID of the student to search: ");
		scanf("%d", &id);
	printf("Enter the grade for the student: ");
		scanf("%d", &ngrade);
	gradecheck=update_grade(size, id, ngrade);
		while(gradecheck==0)
		{
			printf("Student ID not found, enter ID again: ");
				scanf("%d", &id);
				gradecheck=update_grade(size,id,ngrade);
		}
	write_content(argv[2], size);
	print_data(size);
	hgrade=highest_grade(size);
	printf("The highest grade is %d of the student with the ID %d\n", students[hgrade].grade, students[hgrade].id);
	sort_data(size);

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
        printf("Student grade\nID\tGrade\n");
        for(i=0;i<size;i++)
        {
                printf("%d\t%d\n", students[i].id, students[i].grade);
	}
	return;
}

int update_grade(int size, int id, int ngrade)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(students[i].id==id)
		{
			students[i].grade=ngrade;
			return 1;
		}
		else
			return 0;
	}
}

int highest_grade(int size)
{
	int i, hold=0, id=0;
	for(i=0;i<size;i++)
	{
		if(students[i].grade>hold)
		{
			hold=students[i].grade;
			id=i;
		}
	}
	return id;
}
int write_content(char* fname, int size)
{
	int i;
	FILE*file = fopen(fname, "w");
	for(i=0;i<size;i++)
	{
		fprintf(file, "%d %d", students[i].id, students[i].grade);
	}
	fclose(file);
	return;
}
void sort_data(int size)
{
	int i, pass;
	data hold;
	for(pass=0;pass<size;pass++)
	{
		for(i=0;i<size-1;i++)
		{

			if(students[i].grade>students[i+1].grade)
			{
				hold=students[i+1];
				students[i+1] = students[i];
				students[i]= hold;
			}
		}
	}
	printf("\nAfter sorting\n");
	print_data(size);
}
				
