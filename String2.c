#include <stdio.h>
//string using pointers
//print character of string and find length

void printString(char arr[]);
int countLength(char arr[]);
int main() {
	// your code goes here
	/*char *canChange ="Hello World"; // this pointer used to change the string
	puts(canChange);
	canChange = "Hello";
	puts(canChange);
	
	char cannotchange[] = "Hello World";
	puts(cannotchange);*/
//	cannotchange="Hello"; //can't use this to change the string
//	puts(cannotchange);
	
// write a program that inputs user's name and print its length.
 char name[100];
 fgets(name, 100, stdin);
 printf("Character of wrods is : ");
 printString(name);
 printf("Length of string is %d \n", countLength(name));
 

}

void printString(char arr[]){
    for(int i=0; arr[i]!='\0';i++){
        printf("%c ",arr[i]);
        
    }
    printf("\n");
}

int countLength(char arr[]){
    int count =0;
    for(int i=0; arr[i]!='\0';i++){
        count++;
        
    }
    return count;
}