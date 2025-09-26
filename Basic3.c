#include <stdio.h>
#include<math.h>
int main() {
    
/* int age;
 printf("Enter age \n");
 scanf("%d", &age);*/
 
 
/* if(age>18){
     printf("adult \n");
     printf("they can vote \n");
     printf("they can drive \n");
 }*/
 
/* if(age>18){
     printf("adult \n");
     printf("they can vote \n");
     printf("they can drive \n");
 }
 else{
     printf("Not adult \n");
 }*/
 
/* if (age>13 && age<18){
     printf("child \n");
 }
 else if(age>18 && age<30){
     printf("adult \n");
 }
 else if(age<13){
     printf("Kid \n");
 }
 else{
     printf("Man\n");
 }*/
 
 
 // age >=18 ? printf("Adult \n") : printf("not adult \n");
 
/* int day; // mon=1, tue=2, wed=3, thu=4 so on 
 printf("Enter day (1-7)\n");
 scanf("%d", &day);*/
 
 /*switch (day){
     case 1 : printf("monday \n");
     break;
     case 2 : printf("tuesday \n");
     break;
     case 3 : printf("wednesday \n");
     break;
     case 4 : printf("thursday \n");
     break;
     case 5 : printf("friday \n");
     break;
     case 6 : printf("saturday \n");
     break;
     case 7 : printf("sunday \n");
     break;
     default : printf("not a valid day ! \n");
 }*/
 
 /*switch (day){
     case 1 : printf("monday \n");
     break;
     case 2 : printf("tuesday \n");
     break;
     case 3 : printf("wednesday \n");
    // break;
     case 4 : printf("thursday \n");
    // break;
     case 5 : printf("friday \n");
     break;
     case 6 : printf("saturday \n");
     break;
     case 7 : printf("sunday \n");
     break;
     default : printf("not a valid day ! \n");
 }*/
 
 /*char day; // m-mon, t-tues, w, T, f, s, S
 
 printf("enter day(1-7) : \n");
 scanf("%s", &day);
  
   switch (day){
     case 'm' : printf("monday \n");
     break;
     case 't' : printf("tuesday \n");
     break;
     case 'w' : printf("wednesday \n");
     break;
     case 'T' : printf("thursday \n");
     break;
     case 'f' : printf("friday \n");
     break;
     case 's' : printf("saturday \n");
     break;
     case 'S' : printf("sunday \n");
     break;
     default : printf("not a valid day ! \n");
 }*/
 
 
 /*int number;
 printf("Enter number : \n");
 scanf("%d",&number);
 
 if(number >= 0){
     printf("positive \n");
     if(number %2==0){
         printf("even \n");
     } else{
         printf("Odd \n");
     }
 } else{
     printf("negative\n");
 }*/
 
 //Write a program to check if a student is pass or fail(marks >30 pass, marks<30 fail)
 
 /*int marks;
 printf("Enter marks(0-100)\n");
 scanf("%d", &marks);*/
 
/* if(marks>=0 && marks<=30){
     printf("Fail\n");
 } else if(marks>30 && marks<=100){
     printf("Pass \n");
 }else {
     printf("Wrong Marks\n");
 }*/
 
// marks<=30 ? printf("FAIL\n"): printf("PASS\n"); 

 /* if(marks<30){
      printf("C \n");
  }
  else if(marks>=30 &&marks<=70){
      printf("B \n");
  }
  else if(marks>70 && marks <=90){
      printf("A\n");
  }
  else{
      printf("A+\n");
  }*/
  
  //Write a program to check upper and lower case letter
  char ch;
  printf("Enter character : \n");
  scanf("%c", &ch);
  // ch>='a' or ch >= 97 (Both are same) a=97, b= 98 .... , A=66, B=67... so on..
  if(ch >= 'A' && ch <='Z'){
      printf("Uper case \n");
  }
  else if(ch>='a' && ch<='z'){
      printf("Lower case \n");
  }
  else{
      printf("not english letter \n");
  }
 
 printf("Thany You \n");
 return 0;
 
 

}