#include <stdio.h>

//create a vector to store vectors. make a fucntion to return sum of two vetcors
// create a structure to store complex number
//create a structure to store account information of person

typedef struct accountInformation{
    int account;
    char name[100];
    int ifscCode;
} acc;

struct complexNo{
    int realPart;
    int ImPart;
    
};
struct vector{
    int x; 
    int y;
};
int main() {
	// your code goes here
	struct vector v1 ={5, 10};
	struct vector v2 ={3,7};
	struct vector sum ={0};
	calSum(v1,v2,sum);
	
	struct complexNo c1;
	c1.realPart=5;
	c1.ImPart =10;
	
	printf("Complex Number 1 is %d + i%d \n", c1.realPart, c1.ImPart);
	return 0;
}

void calSum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x+v2.x;
    sum.y = v1.y+v2.y;
printf("Sum vector is %di + %dj \n", sum.x, sum.y);
}

