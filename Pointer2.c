#include <stdio.h>

int main(){
	// your code goes here
	int x;
	int *ptr;
	ptr = &x; //store the address of x
	*ptr=10; // value at address of x is 10 now i.e. x=10
	printf("x= %d \n",x);
	printf("*ptr = %d \n", *ptr);
	
	*ptr+=5; //*ptr=*ptr+5 => x=10+5;
		printf("x= %d \n",x);
	printf("*ptr = %d \n", *ptr);
	
	(*ptr)++;
	
	printf("x= %d \n",x);
	printf("*ptr = %d \n", *ptr);
		printf("x= %d \n",x);
	printf("*ptr = %d \n", *ptr);
	return 0;
}

