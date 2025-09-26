#include <stdio.h>
int Fibonaccii(int n);
int fib[100]={0};
int main() {
	// your code goes here
	int n; 
	printf("Enter the number n \n");
	scanf("%d",&n);
	printf("%d\n",n);
	int nth_number = Fibonaccii(n);
	printf("Nth Fibonaccii number is %d \n",nth_number);

}
int Fibonaccii2(int n){
    if(n==1){
        printf("%d\n",1);
        return 1;
    }
    if(n==2){
        printf("%d\n",2);
        return 2;
    }
    else{
        printf("%d\n",n);
        return Fibonaccii2(n-1)+Fibonaccii2(n-2);
    }
}
int Fibonaccii(int n){
    if(n==1){
        fib[n]=1;
        printf("%d\n",fib[n]);
        return fib[n];
    }
    if(n==2){
        fib[n]=2;
        printf("%d\n",fib[n]);
        return fib[n];
    }
    if(fib[n]==0){
        fib[n]= Fibonaccii(n-1)+Fibonaccii(n-2);
        printf("%d\n",fib[n]);
        return fib[n];
    }
    else{
        return fib[n];
       // printf("%d\n",fib[n]);
    }
   // return fib[n];
    
}

