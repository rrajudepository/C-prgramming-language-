#include <stdio.h>

int main() {
    // Write C code here
    //int i;
    /*for(int i=1; i<=5; i++)
    {
        printf("Hello World \n");
    }
    for(int j=10; j>=0;j--){
        printf("%d\n",j);
    }*/
    /*int l=10,m=1;
    for(int k=10;k>=5;k--){
        printf("%d ", l--);
       // l--;
        printf("%d \n",++m);
    }*/
    
    /*for(float i=5; i<=10;i++){
        printf("%f\n",i);
    }
    for(char ch='a'; ch<='z';ch++){
        printf("%c\n", ch);
    }*/
    
    
    //infite loop
    /*for(int i=1; ;i++){
        printf("Hello world \n");
    }*/
    
    /*float i=1;
    while(i<=10){
        printf("%f \n", i++);
    }*/
    
    /*int n;
    printf("Enter value of n \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }*/
    
    //in do while loop, it first perform then check conditions 
   /* int i=5;
    do{
        printf("%d \n",i++);
    } while(i<=5);*/
    
   /* int i=5;
    do{
        printf("%d \n",i--);
    } while(i>=1);
    return 0;*/ 
    
    
    // Print the sum of first n natural number
    
   /* int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d \n", sum);*/
    
   /* int n; 
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        printf("%d\n",i);
    }*/
    
    /*int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=0, j=n;i<=n,j>=0;i++,j--){
        sum+=i;
        printf("%d ", j);
    }
    printf("\n");
    printf("%d", sum);*/
    
   /* int n;
    printf("Enter value of n \n");
    scanf("%d",&n);
    //int j=1;
    for(int i=n,j=1;j<=10;i+=n,j++){
        printf("%d ",i);
    }
    printf("\n");
    for(int k=n,l=1;l<=10;l++,k=n*l){
        printf("%d ", k);
    }
    
    printf("\n%d, %d",n, n-5);*/
    
    
    
    //Breaking the loop
    /*for(int i=1; i<=5;i++){
        if(i==3){
            break;
        }
        printf("%d ",i);
    }
    printf("end");*/
    
    
    //keep taking numbers as input from user until user enters odd number
   /* int number;
    scanf("%d ",&number);
    while(number%2==0){
        printf("Yes %d \n", number);
        scanf("%d",&number);
    }*/
    
    // or
   /* int n;
    do{
        scanf("%d", &n);
        
        if(n%2!=0){
            break;
        }
        printf("%d \n",n);
    }while(1);
    
    printf("Thank You \n");*/
    
    
    //Keep taking the number until the user enter the number multiple of 7
    
    /*int number;
    scanf("%d ",&number);
    while(number%7!=0){
        printf("Yes %d \n", number);
        scanf("%d",&number);
    }*/
    
    /*for(int i=1; i<=30;i++){
        if(i%3!=0){
            printf("%d ",i);
        }
    }
    printf("\n");
    for(int i=1;i<=30;i++){
        if(i%3==0){
            continue;
        }
        printf("%d ",i);
    }*/
    
    //Print factorial of number
    int n;
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf(" factorial of %d is %d ", n, fact);
    printf("\n Thank You");
    return 0;
    
}