#include <stdio.h>
//Multidimension array

//Find the number of odd numbres
int main() {
	// your code goes here
	/*int arr[2][2]={{1,2},{3,4}};
	for(int i=0;i<2;i++){
	    for(int j=0;j<2;j++){
	        printf("%d ", arr[i][j]);
	    }
	    printf("\n");
	}*/
	
	
	/*int marks[2][3];
	for(int i=0;i<2;i++){
	    for(int j =0;j<3;j++){
	        scanf("%d",&marks[i][j]);
	    }
	}
	
	for(int i=0;i<2;i++){
	    for(int j =0;j<3;j++){
	        printf("%d ", marks[i][j]);
	    }
	    printf("\n");
	}*/
	
	/*int marks[2][3];
	for(int i=0;i<2;i++){
	    for(int j =0;j<3;j++){
	        scanf("%d",&marks[i][j]);
	    }
	}
	int oddNumber=0;
	for(int i=0;i<2;i++){
	    for(int j =0;j<3;j++){
	        if((marks[i][j] % 2) !=0){
	            oddNumber++;
	            printf("%d ", marks[i][j]);
	        }
	    }
	}*/
	//printf("\n number of odd numbers = %d\n", oddNumber);
	
	
	/*int arr[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
	    printf("%d ", *(arr+i));
	}
	printf("\n");*/
	
	
	//write a program to reverse an array 
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++){
	    scanf("%d ",&arr[i]);
	}
	ReverseArray(arr, n);
	printf("\nThis is rajkishor \n");
	printf("\n");
	for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

}
void ReverseArray(int arr[], int n){
    int i=0, j=n-1;
    while(i<=j){
        int k = arr[i];
        arr[i]=arr[j];
        arr[j]=k;
        i++,j--;
    }
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    
}
