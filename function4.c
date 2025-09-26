#include <stdio.h>
void printTable(int n);
int main() {
	// your code goes here
	int n;
	printf("Enter the number \n");
	scanf("%d", &n);
	printTable(n);
	printf("\n Thank you");

}

void printTable(int n){
    for(int i=1; i<=10;i++){
       // int j = n*i;
        printf("%d ",n*i);
    }
}
