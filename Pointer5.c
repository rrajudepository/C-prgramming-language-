#include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
// swap two numbers a and b
int main() {
	// your code goes here
	int x=3, y=5;
	//swap(x,y);
	printf("value x = %d and y =%d \n", x, y);
	
	printf("After passing by reference values\n");
	_swap(&x,&y);
	printf("value x = %d and y =%d \n", x, y);

}

//cal by value
void swap(int a, int b){
    int t =a;
    a=b;
    b=t;
    printf ("value of a = %d and b = %d \n", a,b);
}

//call by reference
void _swap(int *a, int *b){
    int t = *a;
    *a=*b;
    *b = t;
    
     printf ("value of *a = %d and *b = %d \n", *a,*b);
}