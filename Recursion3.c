#include <stdio.h>
// f(x)=x^2 then calculate f(f(f(x)))
//f(x)=3x+5 then calculate f(f(f(x)))

float function(float x, int n);
int main() {
	// your code goes here
	
	float x = 4;
	float value = function(x,3);
	printf("%f", value);

}

float function(float x, int n){
    if(n==0){
        return x;
    }
    float value = function(3*x+5,n-1);
        
    
    return value;
    
}

