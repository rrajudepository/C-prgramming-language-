#include <stdio.h>

// Pointer to pointer 
int main() {
	// your code goes here
	float price = 100;
	float *ptr = &price;
	float **pptr = &ptr; // double pointers
	// * used for value and & used for address
	printf(" price = %f \n", price);
	printf(" *ptr = %f \n", *ptr);
	printf(" **pptr = %f \n", **pptr);
	
	return 0;
	 
}

