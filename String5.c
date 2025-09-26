#include <stdio.h>
#include <string.h>
int countVowels(char str[]);
int main() {
    char word[100];
    scanf("%s", &word);
  //  printf("%s\n", word);
    printf("Number of vowels are %d \n", countVowels(word));
   //checkChar(word, 'z');

}
//To count vowels in a string (check this)

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

//to check a specific character available in string or not

void checkChar(char str[], char ch){
    for(int i=0; str[i]!='\0';i++){
        if(str[i]==ch){
            printf("character is present at %dth place\n", i);
            return;
        }
    }
    printf("character isn't present\n");
}