#include <stdio.h>

int main() {
	// your code goes here
	int age =22;
	int *ptr = &age; // give address of integer age. &-> give the address of variable age
	int _age = *ptr; // give value at address of age i.e 22
	
	char star = '*';
	float value = 30;
	char *ptr1 = &star; //store address of character star
	float *ptr2 = &value; // store address of float value 

	printf("%d \n", _age); // give value 22
	printf("%d \n", *ptr); // give value 22
	
	
	printf("%p \n", &age); //give address of age....hexadecimal value..... %u for unsigned integere
	printf("%p \n", ptr);// give address of age 
	printf("%p \n", &ptr);//give address of ptr 
	printf("%u \n", ptr); //address in unsigned integer  
	printf("%u \n", &age); //address in unsigned integer
	
	
	//*use to take address of variable
	printf("%d \n", age);
	printf("%d \n", *ptr); //give value of address of age i.e. 22
	printf("%d \n", *(&age)); //give value of address of age i.e. 22
	
	

}

