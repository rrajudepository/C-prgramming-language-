#include <stdio.h>
//Increament and dreament of pointer
int main() {
	// your code goes here
	/*int age = 22;
	int *ptr = &age;
	printf("ptr = %u \n", ptr);
	ptr++; //pointer increase by 4 bytes
	printf("ptr = %u \n", ptr);
	ptr--; //pointer decrease by 4 bytes
	printf("ptr = %u \n", ptr);*/
	
	/*float price = 20.0;
	float *ptr2 = &price;
	printf("ptr = %u \n", ptr2);
	ptr2++; //pointer increase by 4 bytes
	printf("ptr = %u \n", ptr2);
	ptr2--; //pointer decrease by 4 bytes
	printf("ptr = %u \n", ptr2);*/
	
	/*char star ='*';
	char *ptr = &star;
	printf("ptr = %u \n", ptr);
	ptr++; //pointer increase by 4 bytes
	printf("ptr = %u \n", ptr);
	ptr--; //pointer decrease by 4 bytes
	printf("ptr = %u \n", ptr);*/
	
	/*int age = 22;
	int _age = 23;
	int *ptr1 = &age;
	int *ptr2 = &_age;
	
	printf("value of ptr1 = %u and ptr2 = %u \n", ptr1, ptr2);
	printf("difference of ptr1-ptr2 : %u\n", ptr1-ptr2);
	printf("value of ptr1 = %u and ptr2 = %u \n", ptr1, ptr2);
	ptr2 = &age;
	printf("comparision = %d \n", ptr1==ptr2);*/
	
	
	//Array is a pointer
	int aadhar[5];
	int *ptr = aadhar;
	//int *ptr = &aadhar[0];
	for(int i=0;i<5;i++){
	   // printf("%d index : ", i);
	    scanf("%d",(ptr+i));
	}
	
	
	for(int i =0; i<5;i++){
	    printf("%d index = %d \n", i+1, *(ptr+i));
	    printf("%d index = %d \n", i+1, aadhar[i]);
	}
	
	
	return 0;

}

