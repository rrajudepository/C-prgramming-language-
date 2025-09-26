#include <stdio.h>
// writre code to find sum, product and average of a and b

void doWork(int a, int b, int *sum, int *prod, int *ave);
int main() {
	// your code goes here
	int x=5, y=11;
	int sum=0, prod=0, ave=0;
	doWork(x,y,&sum,&prod,&ave);
	
	printf("sum = %d, product = %d, average = %d", sum, prod, ave);

}
void doWork(int a, int b, int *sum, int *prod, int *ave){
    *sum = a+b;
    *prod = a*b;
    *ave = (a+b)/2;
}

