#include <stdio.h>
void printAdress(int num);
void _printAdress(int *num);
int main() {
	// your code goes here
	int n=4;
	printAdress(n);
	printf("Adress of n is : %u \n", &n);
	_printAdress(&n);
	printf("Adress of n is : %u \n", &n);
	return 0;

}

void printAdress(int num){
    printf("Adress of num is : %u \n", &num);
}

//call by reference
void _printAdress(int *num){
    printf("Adress of num is : %u \n", num);
}
