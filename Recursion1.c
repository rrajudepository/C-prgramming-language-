#include <stdio.h>
void printHelloWorld(int count);
int main() {
	// your code goes here
	int i=5;
	printHelloWorld(i);

}

void printHelloWorld(int count){
    if(count==0){
        return;
    }
    printf("Hello World \n");
    printHelloWorld(count-1);
}
