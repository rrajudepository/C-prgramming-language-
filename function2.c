#include <stdio.h>
// write a function that print Namaste if user is Indian and Bnjour if the user is french

void namaste();
void bonjour();
int main() {
	// your code goes here
	char ch;
	printf("enter F for french and I for Indian\n");
	scanf("%c", &ch);
	if(ch =='I'){
	     namaste();
	}
	else if(ch=='F'){
	     banjour();
	}
	else{
	    printf("Neither Indian nor French \n");
	}
	printf("Thank you so much \n");
	return 0;

}

void namaste(){
    printf("Namaste \n");
    banjour();
}
void banjour(){
    printf("Bonjour \n");
}