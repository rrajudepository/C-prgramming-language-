#include <stdio.h>
struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

int main() {
	// your code goes here
	struct address add[3];
	//input 
	printf("Enter info for person 1 :\n");
	scanf("%d", &add[0].houseNo);
	scanf("%d", &add[0].block);
	scanf("%s", &add[0].city);
	scanf("%s", &add[0].state);
	

	printf("Enter info for person 2 :\n");
	scanf("%d", &add[1].houseNo);
	scanf("%d", &add[1].block);
	scanf("%s", &add[1].city);
	scanf("%s", &add[1].state);
	
	printf("Enter info for person 3 :\n");
	scanf("%d", &add[2].houseNo);
	scanf("%d", &add[2].block);
	scanf("%s", &add[2].city);
	scanf("%s", &add[2].state);
	

	
	printAdd(add[0]);
	printAdd(add[1]);
	printAdd(add[2]);
	
    	return 0;
}


void printAdd(struct address add){
    printf("address is : %d, %d, %s, %s \n", add.houseNo, add.block, add.city, add.state);
}
