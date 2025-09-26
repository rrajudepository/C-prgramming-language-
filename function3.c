#include <stdio.h>
int sum(int a, int b);
int main() {
    int a, b;
    printf("Enter first number :\n");
    scanf("%d",&a);
    printf("Enter second number : \n");
    scanf("%d",&b);
    int s = sum( a , b);
    printf("Sum is %d \n", s);
	// your code goes here

}

int sum(int a, int b){
    int sum = a+b;
    return sum;
}

