#include <stdio.h>
#include <string.h>
void salting(char password[]);
void slice(char password[], int n , int m);
int countVowels(char str[]);
int main() {
	// your code goes here
	/*char password[100];
	scanf("%s", &password);
 	salting(password);
    int n =3, m=8;
    slice(password, n, m);*/
    
    char word[100];
    scanf("%s", &word);
  //  printf("%s\n", word);
    printf("Number of vowels are %d \n", countVowels(word));

}

void salting(char password[]){
    char salt[]="123";
    char newPassword[200];
    strcpy(newPassword, password);
    strcat(newPassword, salt); // newPassword="test" +"123";
    puts(newPassword);
    
    
}

void slice(char password[], int n, int m){
    char newPassword[100];
    for(int i=n, j=0;i<=m; i++,j++){
        newPassword[j]=password[i];
    }
    puts(newPassword);
}

//To count vowels in a string (check this code again)

int countVowels(char str[]){
    int count =0;
    //printf("%s \n", str);
    for(int i=0; str[i]!='\0'; i++){
        printf("%c \n", str[i]);
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i', str[i]=='o'|| str[i]=='u'){
            count++;
           printf("Rajkishor %d \n",i);
        }
    }
    return count;
}
