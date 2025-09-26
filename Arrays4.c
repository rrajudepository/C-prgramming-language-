#include <stdio.h>
void FibonacciSequence(int Fibonacci[], int n);
int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	int Fibonacci[n];
	FibonacciSequence(Fibonacci, n);
	printf("\n");
	for(int i =0; i<n;i++){
	    printf("%d ",Fibonacci[i]);
	}

}

void FibonacciSequence(int Fibonacci[], int n){
    Fibonacci[0]=0;
    Fibonacci[1]=1;
    for(int i=2;i<n;i++){
        Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
    }
    for(int i =0; i<n;i++){
	    printf("%d ",Fibonacci[i]);
	}
}

