#include <stdio.h>
// Sum of first n antural number
// Factorial of n;
// nth Fibonnaci Sequence
int sum1_n(int n);
int fact(int n);
int Fibonnaci(int n);
int main() {
	// your code goes here
	int n =10;
	int sum = sum1_n(n);
//	printf("Sum of %d numbers is %d",n, sum);
	printf("Factorial of %d is %d\n", n, fact(n));
	
	int n1=10;
	int j= Fibonnaci(n1);
	printf("%d\n",j);

}

int sum1_n(int n){
    if(n==1)
    return 1;
    int S= n+sum1_n(n-1);
    return S;
}

int fact(int n){
    if(n==1)
    return 1;
    int value = n*fact(n-1);
    return value;
}


int Fibonnaci(int n){
    if(n==0 || n==1){
        return n;
    }
    int seq=Fibonnaci(n-1)+Fibonnaci(n-2);
    //printf("%d ", seq);
    return seq;
    
}