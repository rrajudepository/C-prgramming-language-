#include <stdio.h>
#include <string.h>
//write a program to store data of three students

//Structure are helpful to create so many variables together
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
	// your code goes here
	struct student s1;
	s1.roll = 121295;
	s1.cgpa = 7.59;
//	s1.name ="Rajkishor"; // you can not change the string like this.
	strcpy(s1.name, "Rajkishor");
	printf("Student name = %s\n", s1.name);
	printf("Student  roll number  = %d\n", s1.roll);
	printf("Student cgpa = %f\n", s1.cgpa);
	
	struct student s2;
	s2.roll = 121296;
	s2.cgpa = 7.50;
//	s2.name ="Rajkishor"; // you can not change the string like this.
	strcpy(s2.name, "Ranjan");
	printf("Student name = %s\n", s2.name);
	printf("Student  roll number  = %d\n", s2.roll);
	printf("Student cgpa = %f\n", s2.cgpa);
	
	struct student s3;
	s3.roll = 121297;
	s3.cgpa = 7.70;
//	s3.name ="Rajkishor"; // you can not change the string like this.
	strcpy(s3.name, "Kumar");
	printf("Student name = %s\n", s3.name);
	printf("Student  roll number  = %d\n", s3.roll);
	printf("Student cgpa = %f\n", s3.cgpa);

}

