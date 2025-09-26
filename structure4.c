#include <stdio.h>
#include <string.h>
//Structure are helpful to create so many variables together
//Pointers to structure
struct student {
    int roll;
    float cgpa;
    char name[100];
};

//use of function

void printInformation(struct student s1);
int main() {
    struct student s1={121295, 8.9, "Rajkishor"};
    struct student *ptr = &s1;
    printf("Students roll = %d \n", (*ptr).roll);
    printf("Student name = %s \n", (*ptr).name);
    
    printf("Students roll = %d \n", ptr->roll); // ptr->roll == (*ptr).roll
    printf("Students name = %s \n", ptr->name);
    
    printInformation(s1);
	

}

 void printInformation(struct student s1){
     printf("Students information : \n");
     printf("Students roll = %d \n", s1.roll);
    printf("Student name = %s \n", s1.name);
    printf("Student cgpa = %f \n", s1.cgpa);
     
 }
