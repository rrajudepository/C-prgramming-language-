#include <stdio.h>
void PrintName(char Name[]);

int main() {
	// your code goes here
	/*char name1[]={'R','A','J','K','I','S','H','O','R','\0'}; //character array is a string
	char name2[]="RAJKISHOR";
	
	char class[]="DATA SCIENCE";*/
	
	char firstName[]= "RAJKISHOR";
	char lastName[] = "RANJAN";
//	Name(firstName);
//	printf("\n");
//	Name(lastName);
	
/*	char name3[40];
	scanf("%s", &name3); //not take words after space
	printf("%s \n",name3); */
	
	char fullName[100];
	//gets(fullName); //Take input as full string. It does not define the length of string and take any size input string.
	//puts(fullName); //print output as full string
	
	fgets(fullName, 100, stdin); // take only 100 size length input string
	puts(fullName); 
	puts(fullName);
	

}
void Name(char name[]){
    for(int i=0; name[i]!='\0';i++){
        printf("%c", name[i]);
    }
}


