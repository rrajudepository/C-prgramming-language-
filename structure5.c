#include <stdio.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu;

typedef struct ComputerEngineeringStudents{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main() {
	// your code goes here
	coe s1;
	s1.roll = 121295;
	s1.cgpa = 9.2;
	strcpy(s1.name, "Rajkishor");
	
	printf("Student name is %s", s1.name);
	

}

