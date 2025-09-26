#include <stdio.h>

//program to write table 
//void table(int n, int k, int tables[n][k]);
int main() {
	// your code goes here
	int n;
	scanf("%d", &n);
	int tables[n][10];
	table(n, 10, tables);
	for(int i=0;i<n;i++){
	    for(int j=0;j<10;j++){
	        printf("%d ", tables[i][j]);
	    }
	    printf("\n");
	}
    
}
void table(int n, int k, int tables[n][k]){
    int l=2;
    for(int i=0; i<n; i++){
        for(int j=0;j<k;j++){
            tables[i][j]=(j+1)*l;
        }
        l++;
    }
    
   /* printf("This is rajkishor \n");
    for(int i=0;i<n;i++){
	    for(int j=0;j<10;j++){
	        printf("%d ", tables[i][j]);
	    }
	    printf("\n");
	}*/
}
