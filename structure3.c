#include <stdio.h>
#include <string.h>
//Structure are helpful to create so many variables together
//Array structure 
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student ece[100];
    ece[0].roll = 1664;
    ece[0].cgpa = 9.2;
    strcpy(ece[0].name, "Rajkishor");
    printf("Name = %s, cgpa = %f, roll= %d \n", ece[0].name, ece[0].cgpa, ece[0].roll);
    
    
    struct student s1={121295, 8.90, "Rajkishor"};
    struct student s2 = {0};
    printf("student name %s\n", s1.name);
    printf("Student name %s\n", s2.name);
	}

