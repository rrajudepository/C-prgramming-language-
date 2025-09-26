#include <stdio.h>
//array as function argument


void printNumbers(int arr[], int n);
//void printNumbers2(int *arr, int n);
int main() {
	// your code goes here
	int arr[5];
	for(int i=0;i<5;i++){
	    scanf("%d",&arr[i]);
	}
	//printNumbers(arr, 5);
	printNumbers2(arr, 5);

}

void printNumbers(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d \n", arr[i]);
    }
}

void printNumbers2(int *arr, int n){
    for(int i=0;i<n;i++){
        printf("%d \n", arr[i]);
    }
}

