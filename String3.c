#include <stdio.h>
#include <string.h>
//standard library function
int main() {
	// your code goes here
	char name[]="Rajkishor Ranjan kumar";
	int length =strlen(name); // give length of string
	//printf("Length is %u \n";strlen(name)); // it gives unsigned length .. show error
	//printf("Length is %d \n", length);
	
	char str1[100]="Rajkishor ";
	char str2[]="Ranjan"; // if size is not declared then it takes equal to string length
	//strcpy(str1, str2); // copy string str2 into str1.
	puts(str1);
	puts(str2);
	
	strcat(str1,str2); // str1 = str1+str2 for adding to strings
	puts(str1);
	
	char firstString[]="Apple";
	char secondString[]="Banana";
	printf("%d \n", strcmp(firstString, secondString)); // it compare the two strings. return zero if equal else 1 when skyvalue of first is greater than second else -1.
	printf("%d \n", strcmp("HHHB","HHHA"));
	printf("%d \n", strcmp("HHHB","HHHa"));
	printf("%d \n", strcmp("APPLE", "APPLE"));
	
	
	
	//take input string using %c
	
	char str[100];
	char ch;
	int i =0;
	while(ch !='\n'){
	    scanf("%c", &ch);
	    str[i]=ch;
	    i++;
	}
	str[i]='\0';
	puts(str);
	
	
	
	

}

