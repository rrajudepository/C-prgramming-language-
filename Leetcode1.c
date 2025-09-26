#include <stdio.h>

int main() {
	// your code goes here
	int num;
	scanf("%d",&num);
	printf("%d \n",reverse(num));

}

int reverse(int x){
    int i=1;
    while(i<=x){
        i=i*10;
    }
    //printf("%d \n",i/10);
    i=i/10;
    int num=0;
    while(x>0){
        int j=x%10;
        num=num+j*i;
        x=(x-j)/10;
        i=i/10;
       printf("%d %d %d %d\n", j, num, x, i);
    }
    return num;
    
    
    
    
    
    
    
    
    
    /*i=i/10;
    printf("%d \n",i);
    int j=0;
    int l=1;
    while(i>=1){
        int k = x/i;
        j=j+k*l;
        l=l*10;
        i=i/10;
        x=x%i;
    }*/
    //printf("%d \n",j);
  //  return 0;
}