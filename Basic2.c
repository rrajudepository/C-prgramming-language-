#include <stdio.h>
#include<math.h>
int main() {
    
 // Write a program to check number is divisible by 2 or not 
 
 /*int x;
 printf("Enter a number : \n");
 scanf("%d",&x);
 if(x%2 == 0)
 printf("Divisible\n");
 else
 printf("Now divisible\n");*/
 
 //Write a program to check even or odd number

 
 /*int x;
 printf("Enter a number : \n");
 scanf("%d",&x);
 if(x%2 == 0)
 printf("Even\n");
 else
 printf("ODD\n");
 return 0;*/
 
 
 // int a = 8^8 (valid)
 // int x; int y=x; (valid)
 //int x, int y =x; (not valid)
 
// char stars = '*'; (valid)
// char stars = '**'; (not valid) double character
// char stars = '1'; (valid)
 
 int isSunday =0;
 int inSnowing = 0;
 
/* if(isSunday && inSnowing)
 {
     printf("True");
 }
 else
 printf("False");*/
 
 /*if(isSunday || inSnowing)
 {
     printf("True");
 }
 else
 printf("False");*/
 
 int x;
 printf("Enter a number \n");
 scanf("%d", &x);
 
 printf("%d \n", x>9 && x<100);
 if(x>9 && x<100)
 printf("Yes \n");
 else
 printf("No \n");
 }